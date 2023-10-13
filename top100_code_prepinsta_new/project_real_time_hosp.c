#include <WiFi.h>
#include <HTTPClient.h>
#include <ArduinoJson.h>
#include <TinyGPS++.h>
#include <SMTPClient.h>

#define RXD2 16
#define TXD2 17
int sensorPin = 34; // A0 is the input pin for the heart rate sensor

float sensorValue = 0; // Variable to store the value coming from the sensor

int count = 9;

unsigned long starttime = 0;

int heartrate = 0;

boolean counted = false;

const char *ssid = "AEIE_AP";
const char *password = "12345678";
const char *smtpServer = "smtp.gmail.com";
const int smtpPort = 587; // Use the appropriate port for your SMTP server
const char *smtpUsername = "driver007jamesbond@gmail.com";
const char *smtpPassword = "iyxtsyndgafckvph";
SMTPClient smtp;

TinyGPSPlus gps;

void setup()
{
    pinMode(2, OUTPUT); // D13 LED as Status Indicator
    Serial.begin(9600);
    Serial.begin(115200);
    Serial2.begin(9600, SERIAL_8N1, RXD2, TXD2);
    delay(1000);

    Serial.println("Connecting to Wi-Fi...");
    WiFi.begin(ssid, password);
    while (WiFi.status() != WL_CONNECTED)
    {
        delay(1000);
        Serial.println("Connecting to WiFi...");
    }
    Serial.println("Connected to WiFi.");

    Serial.println("Getting location...");
    while (gps.location.isValid() == 0)
    {
        while (Serial2.available() > 0)
        {
            gps.encode(Serial2.read());
        }
    }
    Serial.println("Got location.");
}

void loop()
{
    // BPM ka void loop wala code
    starttime = millis();

    while (millis() < starttime + 10000) // Reading pulse sensor for 10 seconds

    {

        sensorValue = analogRead(sensorPin);

        if (sensorValue > 550 && counted == false) // Threshold value is 550 (~ 2.7V)

        {

            count++;

            Serial.print("count = ");

            Serial.println(count);

            digitalWrite(2, HIGH);

            delay(50);

            digitalWrite(2, LOW);

            counted = true;
        }

        else if (sensorValue < 550)

        {

            counted = false;

            digitalWrite(2, LOW);
        }
    }

    heartrate = (+count * 6); // Multiply the count by 6 to get beats per minute

    Serial.println();

    Serial.print("BPM = ");

    Serial.println(heartrate); // Display BPM in the Serial Monitor

    Serial.println();

    count = 0;

    if (gps.location.isValid() && heartrate > 150)
    {
        double latitude = gps.location.lat();
        double longitude = gps.location.lng();

        Serial.println("Latitude: " + String(latitude, 6));
        Serial.println("Longitude: " + String(longitude, 6));

        WiFiClient client;
        HTTPClient http;

        String url = "https://maps.googleapis.com/maps/api/place/nearbysearch/json?location=" + String(latitude, 6) + "," + String(longitude, 6) + "&radius=5000&type=hospital&key=AIzaSyDd577FfREZXORIDQ4iTuOFtJGgMxNQ9VU";

        Serial.println("Making request to Google Maps API...");

        if (http.begin(client, url))
        {
            int httpCode = http.GET();

            if (httpCode == HTTP_CODE_OK)
            {
                String payload = http.getString();

                Serial.println("Received data from Google Maps API:");
                Serial.println(payload);

                StaticJsonDocument<2048> doc;
                DeserializationError error = deserializeJson(doc, payload);

                if (error)
                {
                    Serial.println("Failed to parse JSON.");
                }
                else
                {
                    int results = min(3, doc["results"].size());
                    Serial.println("Found " + String(results) + " results.");
                    double hospitalLatitudes[3];
                    double hospitalLongitudes[3];
                    String hospitalNames[3];

                    for (int i = 0; i < results; i++)
                    {
                        double hospitalLatitude = doc["results"][i]["geometry"]["location"]["lat"];
                        double hospitalLongitude = doc["results"][i]["geometry"]["location"]["lng"];
                        String hospitalName = doc["results"][i]["name"].as<String>();
                        Serial.println("Hospital " + String(i + 1) + " Latitude: " + String(hospitalLatitude, 6) + ", Longitude: " + String(hospitalLongitude, 6));
                        hospitalNames[i] = hospitalName;
                        hospitalLatitudes[i] = hospitalLatitude;
                        hospitalLongitudes[i] = hospitalLongitude;
                    }
                    String emails[] = {"damahospital2325@gmail.com", "tudetide@gmail.com", "ygefwkdk@gmail.com"};

                    long double lat1 = gps.location.lat();  // MY latitude by gps module
                    long double long1 = gps.location.lng(); // MY longitude by gps
                    long double Distance[results];
                    for (int j = 0; j < results; j++) // for calculating distance from my location to hospitals and saving them in Distance named array one by one by for loop
                    {
                        Distance[j] = distance_cal(lat1, long1, hospitalLatitudes[j], hospitalLongitudes[j]);
                    }
                    int n = results;
                    double mini = INT_MAX;
                    int index = 0;
                    int i;
                    int k;
                    int found_flag = 0;
                    for (k = 0; k < n; k++)
                    {
                        if (Distance[k] < mini)
                        {
                            mini = Distance[k];
                            index = k;
                            found_flag = 1;
                        }
                    }
                    Serial.print("The nearby hospital's distance is :::");
                    Serial.println(Distance[index]);
                    Serial.print("The nearby hospital's name is :::");
                    Serial.println(hospitalNames[index]);
                    if (found_flag == 1)
                    {
                        String subject = "Emergency: Nearest Hospital, I got an heart attack kind of situtation";
                        String message = "There is an emergency. Please send assistance immediately.\n";
                        message += "Nearest Hospital: " + hospitalNames[index] + "\n";
                        message += "Distance: " + String(Distance[index]) + " km";

                        Serial.println("Sending email...");

                        smtp.begin(smtpServer, smtpPort, smtpUsername, smtpPassword, "esp32", true);
                        smtp.setSubject(subject);
                        smtp.setSender("driver007jamesbond@gmail.com");
                        smtp.setRecipient(emails[index]);
                        smtp.println(message);
                        smtp.end();

                        Serial.println("Email sent!");
                    }
                }
            }
            else
            {
                Serial.println("Failed to make request to Google Maps API.");
            }

            http.end();
        }
        else
        {
            Serial.println("Failed to connect to Google Maps API.");
        }

        delay(5000);
    }
}
long double distance_cal(long double lat1, long double long1,
                         long double lat2, long double long2)
{
    // Convert the latitudes and longitudes from degree to radians.
    lat1 = toRadians(lat1);
    long1 = toRadians(long1);
    lat2 = toRadians(lat2);
    long2 = toRadians(long2);

    // Haversine Formula
    long double dlong = long2 - long1;
    long double dlat = lat2 - lat1;

    long double ans = pow(sin(dlat / 2), 2) + cos(lat1) * cos(lat2) * pow(sin(dlong / 2), 2);
    ans = 2 * asin(sqrt(ans));

    // Radius of Earth in Kilometers, R = 6371
    // Use R = 3956 for miles
    long double R = 6371;

    // Calculate the result
    ans = ans * R;

    return ans;
}
long double toRadians(const long double degree)
{
    long double one_deg = (M_PI) / 180;
    return (one_deg * degree);
}
