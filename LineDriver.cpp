/* LineDriver is the interface designed to abstact the hardware from I/O pins implementations.
 * 
 * Copyright (C) 2011 Artem Borisovskiy (bytefu@gmail.com), http://robocraft.ru
 * 
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 * 
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include <inttypes.h>
#include "LineDriver.h"
#include "Arduino.h"

DefaultLineDriver DefaultLineDriver::g_instance;


void DefaultLineDriver::lineConfig(uint8_t pin, uint8_t mode)
{
  pinMode(pin, mode);
}


void DefaultLineDriver::lineWrite(uint8_t pin, uint8_t value)
{
  digitalWrite(pin, value);
}


uint8_t DefaultLineDriver::lineRead(uint8_t pin)
{
  return digitalRead(pin);
}


DefaultLineDriver* DefaultLineDriver::getInstance()
{
  return &g_instance;
}
