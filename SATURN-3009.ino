 #include <SoftwareSerial.h>
#include <OneWire.h>
#include <input.h>
#include <led.h>
#include <modem.h>
 \
int inputs[5] = {A4,A3,A2,A1,A0};
int outputs[4] = {9,8,3,10  };
int button = 7; //    pullup!!!!
int tm = A5;
SoftwareSerial addSerial(4, 2); // RX, TXSoftwareSerial mySerial(10, 11); // RX, TX
led l_220v(5);
led l_gsm(6);
led l_guard(11);
led l_tm(13);
modem gsm;
String currStr = "1234567"; 
input one(A0,2,3,2,1020,6); 
void setup() {
//  inputs_setup();
    addSerial.begin(19200);
    Serial.begin(19200);
      addSerial.print("AT+CPBS=\"SM\"");
      gsm.initModem();
}

void loop() {
//  addSerial.println(gsm.convert_number("79021201364"));
  delay(1000);
  String bbb = "aaaa";
  bbb.remove(3);
  if (bbb == "aaa" ) addSerial.println(gsm.convert_number("79021201364"));
}
