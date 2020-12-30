/* This sketch contains the firmware for the MKR VIDOR 4000
 * based quadcopter flight controller codename 'Viper'.
 */

/**************************************************************************************
 * INCLUDE
 **************************************************************************************/

#include "ViperFpgaUtil.h"

#include <Arduino.h>

#include "ViperConst.h"

/**************************************************************************************
 * NAMESPACE
 **************************************************************************************/

namespace viper
{

/**************************************************************************************
 * FUNCTION DEFINITION
 **************************************************************************************/

void fpga_spi_select()
{
  digitalWrite(FPGA_CS_PIN, LOW);
}

void fpga_spi_deselect()
{
  digitalWrite(FPGA_CS_PIN, HIGH);
}

/**************************************************************************************
 * NAMESPACE
 **************************************************************************************/

} /* viper */