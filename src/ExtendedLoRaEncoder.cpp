#include "ExtendedLoRaEncoder.h"

void ExtendedLoRaEncoder::writeTemperature(double temperature)
{
    int16_t temperatureInt = (int16_t) (temperature *100);
    if (temperature < 0) {
      temperatureInt = ~-temperatureInt;
      temperatureInt = temperatureInt + 1;
    }
    LoRaEncoder::writeUint16(temperatureInt);
}

void ExtendedLoRaEncoder::writeHumidity(double humidity)
{
    int16_t humidityInt = (int16_t) (humidity *100);
    LoRaEncoder::writeUint16(humidityInt);
}

void ExtendedLoRaEncoder::writePressure(double pressure)
{
    int16_t pressureInt = (int16_t) (pressure *100);
    LoRaEncoder::writeUint16(pressureInt);
}

void ExtendedLoRaEncoder::writePM(uint16_t pm)
{
    LoRaEncoder::writeUint16(pm);
}