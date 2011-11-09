/* LineDriver is the interface designed to abstact the hardware from I/O pins implementations.
 * 
 * See the article introducing LineDriver at http://robocraft.ru/blog/arduino/541.html
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

#ifndef LINEDRIVER_H_
#define LINEDRIVER_H_

#include <inttypes.h>

class LineDriver
{
public:
  virtual void lineConfig(uint8_t pin, uint8_t mode) = 0;
  virtual void lineWrite(uint8_t pin, uint8_t value) = 0;
  virtual uint8_t lineRead(uint8_t pin) = 0;
};

class DefaultLineDriver: public LineDriver
{
public:
  virtual void lineConfig(uint8_t pin, uint8_t mode);
  virtual void lineWrite(uint8_t pin, uint8_t value);
  virtual uint8_t lineRead(uint8_t pin);

  static DefaultLineDriver* getInstance();

private:
  static DefaultLineDriver g_instance;
};

#endif // LINEDRIVER_H_
