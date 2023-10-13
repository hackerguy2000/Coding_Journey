#include <TinyGPSPlus.h>
#include <Arduino.h>
#include <math.h>
#include <algorithm>
#include <string.h>
#include <WiFi.h>
#include <MailClient.h>

// The TinyGPSPlus object
int sensorPin = 34; // A0 is the input pin for the heart rate sensor

float sensorValue = 0; // Variable to store the value coming from the sensor

int count = 9;

unsigned long starttime = 0;

int heartrate = 0;

boolean counted = false;

//SMTP WALA CODE
const char *ssid = "your_SSID";
const char *password = "your_PASSWORD";

const char *smtpServer = "your_SMTP_server";
int smtpPort = 587;
const char *smtpUsername = "your_email_address";
const char *smtpPassword = "your_email_password";

TinyGPSPlus gps;

void setup(void)
{

    pinMode(2, OUTPUT); // D13 LED as Status Indicator

    Serial.begin(9600);
    Serial.begin(9600);

    Serial2.begin(9600);

    delay(3000); // Start Serial Communication @ 9600
    WiFi.begin(ssid, password);
    while (WiFi.status() != WL_CONNECTED)
    {
        delay(1000);
    }
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

    // GPS CODE void loop wala part of GPS code

    while (Serial2.available() > 0)

        if (gps.encode(Serial2.read()))
        {
            displayInfo();
            if (heartrate > 200)
            {
                String Hospitals[] = {"Apollo Hospital", "Boston Hospital", "Capital Hospital", "Dipak Hospital", "Enriched Hospital"};
                String emails[] = {"email_of_apollo", "email_of_boston", "email_of_capital", "email_of_dipak", "email_of_enriched"};
                long double lat1 = gps.location.lat();    // MY latitude by gps module
                long double long1 = gps.location.lng();   // MY longitude by gps module
                long double lat2 = 43.31861111251211;     // lat of nearby hospital A
                long double long2 = -5.6997454552222223;  // long of nearby hospital A
                long double lat3 = 53.32055555555556;     // lat of nearby hospital B
                long double long3 = -1.7297222222222221;  // long of nearby hospital B
                long double lat4 = 13.31861111111111;     // lat of nearby hospital C
                long double long4 = -2.6997896322222223;  // long of nearby hospital C
                long double lat5 = 53.31861111111111;     // lat of nearby hospital D
                long double long5 = -1.6997222222222223;  // long of nearby hospital D
                long double lat6 = 13.31861111251211;     // lat of nearby hospital E
                long double long6 = -25.6997454552222223; // long of nearby hospital E

                long double D1 = distance(lat1, long1, lat2, long2);
                long double D2 = distance(lat1, long1, lat3, long3);
                long double D3 = distance(lat1, long1, lat4, long4);
                long double D4 = distance(lat1, long1, lat5, long5);
                long double D5 = distance(lat1, long1, lat6, long6);

                long double distance_arr[] = {D1, D2, D3, D4, D5};

                int n = 5;
                double mini = INT_MAX;
                int index = 0;
                int i;
                for (i = 0; i < n; i++)
                {
                    if (distance_arr[i] < mini)
                    {
                        mini = distance_arr[i];
                        index = i;
                    }
                }
                Serial.print("The nearby hospital is:::"); // print the label
                String nearest_hospital = Hospitals[index];
                Serial.println(Hospitals[index]); // print the hospital name on a new line

                if (nearest_hospital == "Apollo Hospital")
                {
                    MailClient mail;
                    mail.setLogin(smtpUsername, smtpPassword);
                    mail.setServer(smtpServer, smtpPort);
                    mail.setSender("sender_email_address");
                    mail.setRecipient("recipient_email_address");
                    mail.setSubject("Your subject here");
                    mail.setMessage("Your message here");
                    if (!mail.send())
                    {
                        Serial.println("Error sending email");
                    }
                    else
                    {
                        Serial.println("Email sent");
                    }
                }
                if (nearest_hospital == "Boston Hospital")
                {
                    MailClient mail;
                    mail.setLogin(smtpUsername, smtpPassword);
                    mail.setServer(smtpServer, smtpPort);
                    mail.setSender("sender_email_address");
                    mail.setRecipient("recipient_email_address");
                    mail.setSubject("Your subject here");
                    mail.setMessage("Your message here");
                    if (!mail.send())
                    {
                        Serial.println("Error sending email");
                    }
                    else
                    {
                        Serial.println("Email sent");
                    }
                }
                if (nearest_hospital == "Capital Hospital")
                {
                    MailClient mail;
                    mail.setLogin(smtpUsername, smtpPassword);
                    mail.setServer(smtpServer, smtpPort);
                    mail.setSender("sender_email_address");
                    mail.setRecipient("recipient_email_address");
                    mail.setSubject("Your subject here");
                    mail.setMessage("Your message here");
                    if (!mail.send())
                    {
                        Serial.println("Error sending email");
                    }
                    else
                    {
                        Serial.println("Email sent");
                    }
                }
                if (nearest_hospital == "Dipak Hospital")
                {
                    MailClient mail;
                    mail.setLogin(smtpUsername, smtpPassword);
                    mail.setServer(smtpServer, smtpPort);
                    mail.setSender("sender_email_address");
                    mail.setRecipient("recipient_email_address");
                    mail.setSubject("Your subject here");
                    mail.setMessage("Your message here");
                    if (!mail.send())
                    {
                        Serial.println("Error sending email");
                    }
                    else
                    {
                        Serial.println("Email sent");
                    }
                }
                if (nearest_hospital == "Enriched Hospital")
                {
                    MailClient mail;
                    mail.setLogin(smtpUsername, smtpPassword);
                    mail.setServer(smtpServer, smtpPort);
                    mail.setSender("sender_email_address");
                    mail.setRecipient("recipient_email_address");
                    mail.setSubject("Your subject here");
                    mail.setMessage("Your message here");
                    if (!mail.send())
                    {
                        Serial.println("Error sending email");
                    }
                    else
                    {
                        Serial.println("Email sent");
                    }
                }
            }
        }

    if (millis() > 5000 && gps.charsProcessed() < 10)

    {

        Serial.println(F("No GPS detected: check wiring."));

        while (true)
            ;
    }
}
long double toRadians(const long double degree)
{
    long double one_deg = (M_PI) / 180;
    return (one_deg * degree);
}

long double distance(long double lat1, long double long1,
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

void displayInfo()

{

    Serial.print(F("Location: "));

    if (gps.location.isValid())
    {

        Serial.print("Lat: ");

        Serial.print(gps.location.lat(), 6);

        Serial.print(F(","));

        Serial.print(gps.location.lng(), 6);

        Serial.print("Lng: ");
        Serial.println();
    }

    else

    {

        Serial.print(F("INVALID"));
    }
}

void updateSerial()

{

    delay(500);

    while (Serial.available())

    {

        Serial2.write(Serial.read()); // Forward what Serial received to Software Serial Port
    }

    while (Serial2.available())

    {

        Serial.write(Serial2.read()); // Forward what Software Serial received to Serial Port
    }
}
