/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2019 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
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
 *
 */
#pragma once

const temp_entry_t temptable_2001[] PROGMEM = {
// see: https://hydraraptor.blogspot.com/2012/11/more-accurate-thermistor-tables.html
    { OV(2       ),300      }, // r=     9 adc=1.89
    { OV(2       ),295      }, // r=    10 adc=2.09
    { OV(2       ),290      }, // r=    11 adc=2.32
    { OV(3       ),285      }, // r=    12 adc=2.58
    { OV(3       ),280      }, // r=    13 adc=2.87
    { OV(3       ),275      }, // r=    15 adc=3.20
    { OV(4       ),270      }, // r=    16 adc=3.57
    { OV(4       ),265      }, // r=    18 adc=3.99
    { OV(4       ),260      }, // r=    21 adc=4.47
    { OV(5       ),255      }, // r=    23 adc=5.01
    { OV(6       ),250      }, // r=    26 adc=5.63
    { OV(6       ),245      }, // r=    29 adc=6.33
    { OV(7       ),240      }, // r=    33 adc=7.14
    { OV(8       ),235      }, // r=    37 adc=8.06
    { OV(9       ),230      }, // r=    42 adc=9.12
    { OV(10      ),225      }, // r=    48 adc=10.33
    { OV(12      ),220      }, // r=    55 adc=11.73
    { OV(13      ),215      }, // r=    62 adc=13.33
    { OV(15      ),210      }, // r=    71 adc=15.19
    { OV(17      ),205      }, // r=    81 adc=17.32
    { OV(20      ),200      }, // r=    93 adc=19.79
    { OV(23      ),195      }, // r=   106 adc=22.65
    { OV(26      ),190      }, // r=   122 adc=25.97
    { OV(30      ),185      }, // r=   141 adc=29.81
    { OV(34      ),180      }, // r=   163 adc=34.27
    { OV(39      ),175      }, // r=   189 adc=39.46
    { OV(46      ),170      }, // r=   219 adc=45.48
    { OV(53      ),165      }, // r=   254 adc=52.49
    { OV(61      ),160      }, // r=   296 adc=60.63
    { OV(70      ),155      }, // r=   346 adc=70.09
    { OV(81      ),150      }, // r=   405 adc=81.08
    { OV(94      ),145      }, // r=   475 adc=93.81
    { OV(109     ),140      }, // r=   558 adc=108.54
    { OV(126     ),135      }, // r=   657 adc=125.52
    { OV(145     ),130      }, // r=   776 adc=145.05
    { OV(167     ),125      }, // r=   919 adc=167.38
    { OV(193     ),120      }, // r=  1091 adc=192.79
    { OV(222     ),115      }, // r=  1299 adc=221.49
    { OV(254     ),110      }, // r=  1550 adc=253.65
    { OV(289     ),105      }, // r=  1854 adc=289.34
    { OV(329     ),100      }, // r=  2223 adc=328.49
    { OV(371     ),95       }, // r=  2673 adc=370.90
    { OV(416     ),90       }, // r=  3223 adc=416.18
    { OV(464     ),85       }, // r=  3898 adc=463.77
    { OV(513     ),80       }, // r=  4726 adc=512.93
    { OV(563     ),75       }, // r=  5748 adc=562.80
    { OV(612     ),70       }, // r=  7011 adc=612.42
    { OV(661     ),65       }, // r=  8577 adc=660.85
    { OV(707     ),60       }, // r= 10525 adc=707.19
    { OV(751     ),55       }, // r= 12956 adc=750.68
    { OV(791     ),50       }, // r= 16000 adc=790.72
    { OV(827     ),45       }, // r= 19825 adc=826.95
    { OV(859     ),40       }, // r= 24647 adc=859.16
    { OV(887     ),35       }, // r= 30748 adc=887.36
    { OV(912     ),30       }, // r= 38496 adc=911.69
    { OV(932     ),25       }, // r= 48374 adc=932.41
    { OV(950     ),20       }, // r= 61015 adc=949.83
    { OV(964     ),15       }, // r= 77259 adc=964.34
    { OV(976     ),10       }, // r= 98220 adc=976.28
    { OV(986     ),5        }, // r=125385 adc=986.04
    { OV(994     ),0        }  // r=160748 adc=993.94
};
