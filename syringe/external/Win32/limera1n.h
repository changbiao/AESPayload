/**
  * GreenPois0n Syringe
  * Copyright (C) 2010 Chronic-Dev Team
  *
  * This program is free software: you can redistribute it and/or modify
  * it under the terms of the GNU General Public License as published by
  * the Free Software Foundation, either version 3 of the License, or
  * (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  * GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License
  * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 **/

#ifndef limera1n_H
#define limera1n_H

const unsigned char limera1n_payload[] = {
    0x7f, 0x46, 0x07, 0xe0, 0xc0, 0x46, 0xc0, 0x46, 0xc0, 0x46, 0xc0, 0x46,
   0xc0, 0x46, 0xc0, 0x46, 0xc0, 0x46, 0xc0, 0x46, 0x65, 0x48, 0x02, 0x68,
   0x65, 0x48, 0x90, 0x42, 0x06, 0xd1, 0x65, 0x49, 0x39, 0x60, 0x65, 0x49,
   0x79, 0x60, 0x65, 0x49, 0xb9, 0x60, 0x1c, 0xe0, 0x64, 0x48, 0x90, 0x42,
   0x06, 0xd1, 0x64, 0x49, 0x39, 0x60, 0x64, 0x49, 0x79, 0x60, 0x64, 0x49,
   0xb9, 0x60, 0x12, 0xe0, 0x63, 0x48, 0x90, 0x42, 0x06, 0xd1, 0x63, 0x49,
   0x39, 0x60, 0x63, 0x49, 0x79, 0x60, 0x63, 0x49, 0xb9, 0x60, 0x08, 0xe0,
   0x62, 0x48, 0x90, 0x42, 0x05, 0xd1, 0x62, 0x49, 0x39, 0x60, 0x5e, 0x49,
   0x79, 0x60, 0x61, 0x49, 0xb9, 0x60, 0x61, 0x48, 0x61, 0x49, 0x3b, 0x68,
   0x98, 0x47, 0x61, 0x48, 0x5e, 0x49, 0x4a, 0x68, 0x00, 0xf0, 0x88, 0xf8,
   0x00, 0x28, 0xcb, 0xd0, 0x06, 0x1c, 0x5e, 0x48, 0x5a, 0x49, 0x4a, 0x68,
   0x00, 0xf0, 0x80, 0xf8, 0x00, 0x28, 0xc3, 0xd0, 0x05, 0x1c, 0x11, 0x20,
   0x14, 0x24, 0x29, 0x19, 0x2a, 0x19, 0x30, 0x23, 0x58, 0x4c, 0x00, 0x94,
   0x00, 0x24, 0x01, 0x94, 0x00, 0x24, 0x02, 0x94, 0x7c, 0x68, 0xa0, 0x47,
   0x11, 0x20, 0x0c, 0x24, 0x31, 0x19, 0x32, 0x19, 0xb3, 0x68, 0x53, 0x4c,
   0x00, 0x94, 0x24, 0x24, 0x64, 0x19, 0x01, 0x94, 0x14, 0x24, 0x64, 0x19,
   0x02, 0x94, 0x7c, 0x68, 0xa0, 0x47, 0x49, 0x48, 0x0c, 0x21, 0x89, 0x19,
   0xb2, 0x68, 0x15, 0x1c, 0x00, 0xf0, 0x52, 0xf8, 0x4b, 0x48, 0x45, 0x49,
   0x2a, 0x1c, 0x00, 0xf0, 0x55, 0xf8, 0x00, 0x28, 0x08, 0xd0, 0x01, 0x1c,
   0x48, 0x48, 0x49, 0x4a, 0x00, 0xf0, 0x4e, 0xf8, 0x00, 0x28, 0x01, 0xd0,
   0x47, 0x49, 0x01, 0x60, 0x47, 0x48, 0x3d, 0x49, 0x2a, 0x1c, 0x00, 0xf0,
   0x45, 0xf8, 0x00, 0x28, 0x08, 0xd0, 0x01, 0x1c, 0x44, 0x48, 0x41, 0x4a,
   0x00, 0xf0, 0x3e, 0xf8, 0x00, 0x28, 0x01, 0xd0, 0x42, 0x49, 0x01, 0x60,
   0x42, 0x48, 0x35, 0x49, 0x2a, 0x1c, 0x00, 0xf0, 0x35, 0xf8, 0x00, 0x28,
   0x08, 0xd0, 0x01, 0x1c, 0x3f, 0x48, 0x39, 0x4a, 0x00, 0xf0, 0x2e, 0xf8,
   0x00, 0x28, 0x01, 0xd0, 0x37, 0x49, 0x01, 0x60, 0x3c, 0x48, 0x2d, 0x49,
   0x2a, 0x1c, 0x3c, 0x4b, 0x00, 0xf0, 0x26, 0xf8, 0x00, 0x28, 0x0f, 0xd1,
   0x3a, 0x48, 0x29, 0x49, 0x2a, 0x1c, 0x3a, 0x4b, 0x00, 0xf0, 0x1e, 0xf8,
   0x00, 0x28, 0x07, 0xd1, 0x38, 0x48, 0x25, 0x49, 0x2a, 0x1c, 0x38, 0x4b,
   0x00, 0xf0, 0x16, 0xf8, 0x00, 0x28, 0x03, 0xd0, 0x36, 0x49, 0x01, 0x60,
   0x36, 0x49, 0x41, 0x60, 0x00, 0x20, 0x1f, 0x49, 0x00, 0x22, 0xbb, 0x68,
   0x98, 0x47, 0x4d, 0xe7, 0x0b, 0x78, 0x03, 0x70, 0x01, 0x30, 0x01, 0x31,
   0x01, 0x3a, 0x00, 0x2a, 0xf8, 0xd1, 0x70, 0x47, 0x00, 0x23, 0xff, 0xe7,
   0x10, 0xb5, 0x0c, 0x68, 0x84, 0x42, 0x04, 0xd1, 0x00, 0x2b, 0x07, 0xd0,
   0x4c, 0x68, 0x9c, 0x42, 0x04, 0xd0, 0x02, 0x31, 0x02, 0x3a, 0x00, 0x2a,
   0xf3, 0xd1, 0x00, 0x21, 0x08, 0x1c, 0x10, 0xbd, 0x88, 0x02, 0x00, 0x00,
   0x39, 0x2e, 0x35, 0x00, 0xe5, 0x36, 0x00, 0x00, 0x19, 0x09, 0x00, 0x00,
   0xdd, 0x39, 0x00, 0x00, 0x34, 0x2e, 0x34, 0x00, 0x85, 0x4c, 0x00, 0x00,
   0x6d, 0x68, 0x00, 0x00, 0x5d, 0x5a, 0x00, 0x00, 0x39, 0x2e, 0x33, 0x00,
   0x9d, 0x34, 0x00, 0x00, 0x25, 0x09, 0x00, 0x00, 0x69, 0x39, 0x00, 0x00,
   0x39, 0x2e, 0x33, 0x2e, 0xa5, 0x34, 0x00, 0x00, 0x71, 0x39, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x84, 0x00, 0xc0, 0x02, 0x00, 0x41, 0x54, 0x41, 0x44,
   0x47, 0x41, 0x42, 0x4b, 0x00, 0x02, 0x00, 0x20, 0x00, 0x00, 0x00, 0x20,
   0x1a, 0x78, 0xff, 0x2a, 0x4f, 0xf0, 0xff, 0x30, 0x00, 0x02, 0x00, 0x00,
   0x00, 0x20, 0x00, 0x20, 0xf3, 0xdf, 0x90, 0xb5, 0x07, 0x4b, 0x1b, 0x68,
   0x4f, 0xf0, 0xff, 0x33, 0x11, 0x9a, 0xd3, 0xf1, 0x18, 0xbf, 0x01, 0x20,
   0x80, 0xb5, 0x00, 0xaf, 0x82, 0xb0, 0x4f, 0xf0, 0xb0, 0xb5, 0x02, 0xaf,
   0x82, 0xb0, 0x01, 0x28, 0x90, 0xb5, 0x01, 0xaf, 0x84, 0xb0, 0x4f, 0xf0,
   0x00, 0x4b, 0x18, 0x47, 0x00, 0x00, 0x00, 0x41
};

#endif
