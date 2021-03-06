//-----------------------------LICENSE NOTICE-----------------------------------------------------
//  This file is part of Amstrad CPC videogame "Agent 006"
//  Copyright (C) 2017 APLSoft / Adrian Frances Lillo / Pablo Lopez Iborra / Luis Gonzalez Aracil
//  Copyright (C) 2015-2016 ronaldo / Fremos / Cheesetea / ByteRealms (@FranGallegoBR)
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU Lesser General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU Lesser General Public License for more details.
//
//  You should have received a copy of the GNU Lesser General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//-----------------------------LICENSE NOTICE-----------------------------------------------------


#include "006.h"
// Data created with Img2CPC - (c) Retroworks - 2007-2015
// Tile sprite_006: 200x40 pixels, 50x40 bytes.
#include <cpctelera.h>
CPCT_ABSOLUTE_LOCATION_AREA(0x8000);
const u8 sprite_006[50 * 40] = {
	0x00, 0x00, 0x00, 0x00, 0x30, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0xcc, 0x00, 0x33, 0xee, 0x66, 0x77, 0xff, 0xff, 0x33, 0xcc, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0xc0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x70, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x33, 0xcc, 0x00, 0xee, 0x11, 0xee, 0x33, 0xcc, 0x77, 0x11, 0xee, 0x00, 0x77, 0xff, 0x99, 0xcc, 0x77, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xe0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0xf0, 0xf0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x33, 0xcc, 0x33, 0xcc, 0x00, 0xcc, 0x33, 0xcc, 0x11, 0x00, 0xee, 0x00, 0x33, 0x66, 0x11, 0xcc, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0xf0, 0xf0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0xf0, 0xf0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0xcc, 0x77, 0x88, 0x00, 0x44, 0x33, 0x88, 0x11, 0x11, 0xff, 0x00, 0x22, 0x44, 0x33, 0xcc, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0xf0, 0xf0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x10, 0xf0, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x99, 0x88, 0x77, 0x00, 0x00, 0x44, 0x33, 0x88, 0x88, 0x11, 0x77, 0x00, 0x66, 0x00, 0x33, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xf0, 0x80, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x10, 0xf0, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0xbb, 0x88, 0xff, 0x00, 0x00, 0x00, 0x77, 0x88, 0x88, 0x11, 0x77, 0x88, 0x44, 0x00, 0x33, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xf0, 0x80, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xf0, 0xf0, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x33, 0x33, 0x88, 0xee, 0x00, 0x00, 0x00, 0x77, 0x33, 0x88, 0x33, 0x33, 0x88, 0x44, 0x00, 0x77, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0xf0, 0xf0, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x10, 0xf7, 0xf8, 0xe0, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x22, 0x33, 0x99, 0xee, 0x00, 0x00, 0x00, 0x77, 0xff, 0x00, 0x22, 0x33, 0xcc, 0xcc, 0x00, 0x77, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x70, 0xf1, 0xfe, 0x80, 0x00, 0x00,
	0x00, 0x00, 0x31, 0xff, 0xf8, 0xc0, 0x00, 0x10, 0x70, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x77, 0xff, 0x99, 0xee, 0x00, 0x77, 0xee, 0xff, 0x11, 0x00, 0x22, 0x11, 0xcc, 0x88, 0x00, 0x77, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xe0, 0x80, 0x00, 0x30, 0xf1, 0xff, 0xc8, 0x00, 0x00,
	0x00, 0x00, 0x71, 0xff, 0xfe, 0x80, 0x00, 0x21, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x33, 0x99, 0xcc, 0x00, 0x33, 0xcc, 0xee, 0x33, 0x00, 0x66, 0x11, 0xee, 0x88, 0x00, 0xee, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x48, 0x00, 0x10, 0xf7, 0xff, 0xe8, 0x00, 0x00,
	0x00, 0x00, 0x71, 0xff, 0xff, 0x88, 0x00, 0x43, 0x3c, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x11, 0x88, 0x33, 0x99, 0xcc, 0x00, 0x33, 0x88, 0xee, 0x00, 0x22, 0x44, 0x00, 0xff, 0x88, 0x00, 0xee, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xc3, 0x2c, 0x00, 0x11, 0xff, 0xff, 0xe8, 0x00, 0x00,
	0x00, 0x00, 0x73, 0xff, 0xff, 0xe8, 0x30, 0x87, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x33, 0x00, 0x33, 0x88, 0xee, 0x00, 0x77, 0x99, 0xee, 0x00, 0x66, 0x44, 0x00, 0xff, 0x00, 0x00, 0xee, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x1e, 0xc0, 0x71, 0xff, 0xff, 0xec, 0x00, 0x00,
	0x00, 0x00, 0xf3, 0xf7, 0xff, 0xfe, 0xf3, 0x9e, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00, 0x77, 0x00, 0x33, 0x88, 0xee, 0x00, 0x77, 0x11, 0xcc, 0x00, 0xcc, 0xcc, 0x00, 0x77, 0x00, 0x11, 0xee, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x12, 0x97, 0xfc, 0xf7, 0xff, 0xfe, 0xfc, 0x00, 0x00,
	0x00, 0x00, 0xf6, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x88, 0xff, 0xee, 0x77, 0xff, 0xdd, 0x77, 0xff, 0xff, 0xff, 0xff, 0x00, 0x77, 0x00, 0x77, 0xff, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xf6, 0x00, 0x00,
	0x00, 0x00, 0xf7, 0xff, 0xff, 0xff, 0xff, 0x87, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xee, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x1e, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00,
	0x00, 0x10, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x80, 0x00,
	0x00, 0x10, 0xf7, 0xff, 0xff, 0xff, 0xfe, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0xee, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x11, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0xf7, 0xff, 0xff, 0xff, 0xfe, 0x80, 0x00,
	0x00, 0x10, 0xff, 0xff, 0xff, 0xf0, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x77, 0xff, 0xcc, 0x00, 0x33, 0xff, 0xcc, 0x00, 0x00, 0xff, 0xff, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf1, 0xf0, 0xff, 0xff, 0xff, 0x80, 0x00,
	0x00, 0x31, 0xff, 0xff, 0xfe, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0xee, 0x33, 0xcc, 0x00, 0xff, 0x11, 0xee, 0x00, 0x11, 0xee, 0x33, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0xf7, 0xff, 0xff, 0xc8, 0x00,
	0x00, 0x31, 0xff, 0xff, 0xee, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x77, 0x00, 0x11, 0xcc, 0x00, 0xee, 0x00, 0x00, 0x00, 0x00, 0x33, 0xcc, 0x33, 0xcc, 0x11, 0xee, 0x11, 0xee, 0x00, 0x33, 0xcc, 0x11, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x77, 0xff, 0xff, 0xc8, 0x00,
	0x00, 0x71, 0xff, 0xff, 0xfd, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x77, 0xcc, 0x11, 0xff, 0x00, 0xff, 0x88, 0x00, 0x00, 0x00, 0x33, 0xcc, 0x11, 0xee, 0x11, 0xee, 0x00, 0xff, 0x00, 0x77, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf3, 0xff, 0xfb, 0xff, 0xff, 0xe8, 0x00,
	0x00, 0x75, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0xff, 0x00, 0x77, 0xcc, 0x33, 0xee, 0x00, 0x00, 0x00, 0x77, 0x88, 0x11, 0xee, 0x33, 0xcc, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xea, 0x00,
	0x00, 0x75, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x77, 0xcc, 0x11, 0xff, 0x00, 0xff, 0x88, 0x00, 0x00, 0xff, 0x88, 0x11, 0xee, 0x77, 0xcc, 0x00, 0xff, 0x11, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xea, 0x00,
	0x00, 0xf5, 0xfe, 0xff, 0xff, 0xff, 0xf6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0xff, 0x00, 0x77, 0xcc, 0x33, 0xee, 0x00, 0x00, 0xff, 0x00, 0x33, 0xee, 0x77, 0x88, 0x11, 0xff, 0x11, 0xee, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf6, 0xff, 0xff, 0xff, 0xf7, 0xfa, 0x00,
	0x00, 0xff, 0xfe, 0xf3, 0xff, 0xfe, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x77, 0xcc, 0x11, 0xff, 0x00, 0xff, 0x88, 0x11, 0xff, 0x00, 0x33, 0xee, 0xff, 0x88, 0x11, 0xff, 0x33, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf3, 0xf7, 0xff, 0xfc, 0xf7, 0xff, 0x00,
	0x00, 0xf7, 0xfe, 0xf7, 0xff, 0xfd, 0xec, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0xff, 0x00, 0x77, 0xcc, 0x33, 0x88, 0x11, 0xff, 0x00, 0x33, 0xcc, 0xff, 0x88, 0x11, 0xee, 0x77, 0xff, 0x33, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x73, 0xfb, 0xff, 0xfe, 0xf7, 0xfe, 0x00,
	0x00, 0xf7, 0xff, 0xff, 0xfe, 0xf3, 0xec, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x77, 0xcc, 0x11, 0xff, 0x00, 0x00, 0x33, 0xee, 0x00, 0x77, 0xdd, 0xff, 0x00, 0x33, 0xee, 0x77, 0xcc, 0x33, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x73, 0xfc, 0xf7, 0xff, 0xff, 0xfe, 0x00,
	0x00, 0x77, 0xfb, 0xff, 0xff, 0xfb, 0xe8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0xff, 0x00, 0x77, 0xcc, 0x00, 0x33, 0xee, 0x00, 0x77, 0xdd, 0xff, 0x00, 0x33, 0xee, 0x77, 0xcc, 0x33, 0xee, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x71, 0xfd, 0xff, 0xff, 0xfd, 0xee, 0x00,
	0x00, 0x77, 0xff, 0xff, 0xfe, 0xfd, 0xc8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x77, 0xcc, 0x11, 0xff, 0x00, 0x33, 0xcc, 0x00, 0x77, 0xdd, 0xee, 0x00, 0x33, 0xee, 0xff, 0x88, 0x11, 0xee, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0xfb, 0xf7, 0xff, 0xff, 0xee, 0x00,
	0x00, 0x31, 0xff, 0xff, 0xff, 0xfe, 0xc4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0xff, 0x00, 0x77, 0x88, 0x33, 0xcc, 0x00, 0xff, 0x99, 0xee, 0x00, 0x77, 0xcc, 0xff, 0x88, 0x33, 0xee, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0xf7, 0xff, 0xff, 0xff, 0xc8, 0x00,
	0x00, 0x11, 0xff, 0xff, 0xff, 0xfe, 0xc4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x77, 0xcc, 0x11, 0x88, 0x77, 0xcc, 0x00, 0xff, 0xbb, 0xee, 0x00, 0x77, 0xcc, 0xff, 0x00, 0x33, 0xee, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0xf7, 0xff, 0xff, 0xff, 0x88, 0x00,
	0x00, 0x11, 0xff, 0xff, 0xff, 0xfd, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0xff, 0x00, 0x00, 0x77, 0x88, 0x00, 0xff, 0xbb, 0xcc, 0x00, 0x77, 0x99, 0xff, 0x00, 0x33, 0xee, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x33, 0xfb, 0xff, 0xff, 0xff, 0x88, 0x00,
	0x00, 0x71, 0xff, 0xff, 0xff, 0xfb, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x77, 0xcc, 0x00, 0x77, 0x88, 0x11, 0xff, 0x33, 0xcc, 0x00, 0xff, 0x99, 0xee, 0x00, 0x77, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x33, 0xfd, 0xff, 0xff, 0xff, 0xe8, 0x00,
	0x00, 0xf7, 0xff, 0xff, 0xec, 0xf7, 0xc8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0xff, 0x00, 0x77, 0x88, 0x11, 0xff, 0x33, 0xcc, 0x00, 0xff, 0x99, 0xee, 0x00, 0x77, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0xfe, 0x73, 0xff, 0xff, 0xfe, 0x00,
	0x00, 0xf7, 0xff, 0xc8, 0x00, 0xff, 0xc8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x77, 0x88, 0x77, 0x88, 0x33, 0xee, 0x33, 0xcc, 0x11, 0xff, 0x11, 0xee, 0x00, 0xff, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0xff, 0x00, 0x31, 0xff, 0xfe, 0x00,
	0x00, 0xf3, 0xff, 0x00, 0x10, 0xfe, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x88, 0x77, 0x88, 0x33, 0xcc, 0x33, 0x88, 0x11, 0xee, 0x11, 0xee, 0x00, 0xff, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0xf7, 0x80, 0x00, 0xff, 0xfc, 0x00,
	0x00, 0x73, 0xee, 0x00, 0x10, 0xff, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x77, 0x00, 0x77, 0x88, 0x33, 0x88, 0x33, 0xcc, 0x11, 0xee, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xff, 0x80, 0x00, 0x77, 0xec, 0x00,
	0x00, 0x73, 0x88, 0x00, 0x11, 0xff, 0xec, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x33, 0x88, 0xff, 0x00, 0x11, 0xcc, 0x77, 0x88, 0x00, 0xee, 0x11, 0xee, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x73, 0xff, 0x88, 0x00, 0x11, 0xec, 0x00,
	0x00, 0x32, 0xec, 0x00, 0x10, 0xdc, 0xfe, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0xff, 0xee, 0x00, 0x11, 0xff, 0xff, 0x00, 0x00, 0x77, 0xff, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0xf7, 0xb3, 0x80, 0x00, 0x73, 0xc4, 0x00,
	0x00, 0x11, 0xee, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x88, 0x00, 0x00, 0x77, 0xcc, 0x00, 0x00, 0x11, 0xee, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x77, 0x88, 0x00
};
CPCT_RELOCATABLE_AREA();

