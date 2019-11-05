//Libraries
#include <DHT.h>;

//Constants
#define DHTPIN 7     
#define DHTTYPE DHT22   
DHT dht(DHTPIN, DHTTYPE); 



float hum; 
float temp; 
void setup()
{
  Serial.begin(9600);
  dht.begin();
}

void loop()
{
    delay(2000);
    
    hum = dht.readHumidity();
    temp= dht.readTemperature();
    //Print temp and humidity values to serial monitor
    Serial.print("Humidity: ");
    Serial.print(hum);
    Serial.print(" %, Temp: ");
    Serial.print(temp);
    Serial.println(" Celsius");
    delay(10000); //Delay 2 sec.
}

