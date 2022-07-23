/* How to use the DHT-22 sensor with Arduino uno
   Temperature and humidity sensor
   More info: http://www.ardumotive.com/how-to-use-dht-22-sensor-en.html
   Dev: Michalis Vasilakis // Date: 1/7/2015 // www.ardumotive.com */

//Libraries
#include <DHT.h>;


#include <LiquidCrystal_I2C.h>


LiquidCrystal_I2C lcd(0x27,16,2); 

//Constants
#define DHTPIN 2    // what pin we're connected to
#define DHTTYPE DHT11   // DHT 22  (AM2302)
DHT dht(DHTPIN, DHTTYPE); //// Initialize DHT sensor for normal 16mhz Arduino


//Variables
int chk;
float hum;  //Stores humidity value
float temp; //Stores temperature value

void setup()
{
    Serial.begin(9600);
  dht.begin();

  lcd.backlight();
  lcd.init();

  lcd.begin(16,2); 

}
void loop()
{
    //Read data and store it to variables hum and temp
    hum = dht.readHumidity();
    temp= dht.readTemperature();
    //Print temp and humidity values to serial monitor
    Serial.print("Humidity: ");
    Serial.print(hum);
    Serial.print(" %, Temp: ");
    Serial.print(temp);
    Serial.println(" Celsius");
    delay(2000); //Delay 2 sec.


lcd.clear();

    lcd.setCursor(0,0); // Sets the location at which subsequent text written to the LCD will be displayed
  lcd.print("Temp.: "); // Prints string "Temp." on the LCD
  lcd.print(temp); // Prints the temperature value from the sensor
  lcd.print(" C");
  lcd.setCursor(0,1);
  lcd.print("Humi.: ");
  lcd.print(hum);
  lcd.print(" %");
}

   