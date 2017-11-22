#include "main.h"

void initializeIO()
{
}

void initialize()
{
  Quad = encoderInit(quad_top, quad_bot, false); //You can reverse the values of the quad by setting true.
  gyro = gyroInit(gyro_port, 0); //You can change to multiplier for more precision but 0 is great in most cases.

  analogCalibrate(pot);
}
