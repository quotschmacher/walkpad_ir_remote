#include <Arduino.h>
#include <WiFiManager.h>
#include <ArduinoOTA.h>

WiFiManager wifiManager;

// put function declarations here:
//int myFunction(int, int);

void setup() {
    // put your setup code here, to run once:
    wifiManager.setCountry("DE");
    bool res = wifiManager.autoConnect("IrRemoteEsp");

    ArduinoOTA.begin(WiFi.localIP(), "IrRemoteEsp", "password", InternalStorage);
    
}

void loop() {
    // put your main code here, to run repeatedly:
    ArduinoOTA.poll();
}

// put function definitions here:
/*int myFunction(int x, int y) {
    return x + y;
}*/