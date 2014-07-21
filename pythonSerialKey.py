#!/usr/bin/env python

################################################
# Module:   servo.py
# Author:   GAIED Selsabil

'''
Provides a serial connection abstraction layer
for use with Arduino "MultipleSerialServoControl" sketch.
'''
################################################

import serial
from msvcrt import getch

# Assign Arduino's serial port address

usbport = 'COM16'

# Set up serial baud rate
ser = serial.Serial(usbport, 9600, timeout=1)


while True:
    key = ord(getch())-48
    print ("I received "+ str(key))
    if key==1:ser.write(bytes([key]))
    if key==2: ser.write(bytes([key]))
    print ("I sent "+str(bytes([key])))



