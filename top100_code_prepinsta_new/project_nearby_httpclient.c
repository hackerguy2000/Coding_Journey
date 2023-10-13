#include <WiFi.h>
#include <HTTPClient.h>
#include <ArduinoJson.h>

const char* ssid = "YourWiFiSSID";
const char* password = "YourWiFiPassword";
const char* apiKey = "YourGoogleMapsAPIKey";

const int MAX_HOSPITALS = 5;
String hospitalNames[MAX_HOSPITALS];    
float hospitalLatitudes[MAX_HOSPITALS];
float hospitalLongitudes[MAX_HOSPITALS];
int numHospitals = 0;

void setup() {
  Serial.begin(115200);

  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }

  Serial.println("Connected to WiFi!");
}

void searchNearbyHospitals() {
  HTTPClient http;
  String url = "https://maps.googleapis.com/maps/api/place/nearbysearch/json?";
  url += "location=40.7128,-74.0060";  // Example latitude and longitude (New York City)
  url += "&radius=5000";
  url += "&type=hospital";
  url += "&key=";
  url += apiKey;

  Serial.print("Sending HTTP request to: ");
  Serial.println(url);

  http.begin(url);
  int httpResponseCode = http.GET();

  if (httpResponseCode == HTTP_CODE_OK) {
    String payload = http.getString();

    DynamicJsonDocument json(2048);
    DeserializationError error = deserializeJson(json, payload);

    if (!error) {
      JsonArray results = json["results"].as<JsonArray>();

      Serial.println("Nearby Hospitals:");

      numHospitals = 0;
      for (JsonVariant result : results) {
        const char* name = result["name"].as<const char*>();
        float latitude = result["geometry"]["location"]["lat"].as<float>();
        float longitude = result["geometry"]["location"]["lng"].as<float>();

        hospitalNames[numHospitals] = name;
        hospitalLatitudes[numHospitals] = latitude;
        hospitalLongitudes[numHospitals] = longitude;

        Serial.print(numHospitals + 1);
        Serial.print(". ");
        Serial.println(hospitalNames[numHospitals]);

        numHospitals++;
        if (numHospitals >= MAX_HOSPITALS) {
          break;  // Limit to saving MAX_HOSPITALS
        }
      }
    } else {
      Serial.print("Deserialization error: ");
      Serial.println(error.c_str());
    }
  } else {
    Serial.print("HTTP GET request failed, error code: ");
    Serial.println(httpResponseCode);
  }

  http.end();
}

void loop() {
  searchNearbyHospitals();
  delay(30000);  // Delay for 30 seconds before the next search
}
