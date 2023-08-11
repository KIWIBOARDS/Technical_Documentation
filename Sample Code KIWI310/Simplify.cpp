// Simplify.cpp : This file contains the 'main' function. This is where the program starts and ends.


#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include "kiwi310.h"



/*
Instructions:

Compile:
gcc -g -o Simplify Simplify.cpp Kiwi.so

Run :
sudo LD_LIBRARY_PATH=. ./Simplify
*/



; int main()
{
	
	/*
	//LED test- will turn on the led for 5ms then turn OFF, repeatedly 
	uint8_t iNumber = 16;
	uint8_t iMode = 0;
	uint8_t iLevel = 0;
	SetGpioMode(iNumber, iMode);
	SetGpioStatus(iNumber, iLevel);
	while(1)
	{
		SetGpioStatus(iNumber, iLevel);
		iLevel ^= 1;
		usleep(500000);
	
	*/
	
	
	
	//Digital Input test - the switch should connect one pint to the GPIO and the other to ground
	uint8_t iNumber = 17;
	uint8_t iMode = 1;  //0 output , 1 input
	uint8_t iLevel = 0;  //0 low , 1 high   ***
	SetGpioMode(iNumber, iMode);
	SetGpioStatus(iNumber, iLevel);
	while(1)
	{
		GetGpioStatus(iNumber, &iLevel);
		if(iLevel)
		{
			printf("==========Received %d state========\n", iLevel);
		}
		usleep(100000);
	}
	
	
	
	
	/*//PWM test - gradually increase and decrease the intensity of the light 
	bool bFlashMode = false;
	uint8_t iChannel = 0;
	uint8_t iDuty = 0;
	SetPwmStatus(0, 0); //Disable PWM0
	SetPwmStatus(1, 0); //Disable PWM1
	SetPwmFrequency(iChannel, 0x2710);
	while(1)
	{
		if(bFlashMode)
		{
			if(iDuty == 100)
			{
				bFlashMode = false;
			}
			else
			{
				iDuty++;
			}
		}
		else
		{
			if(iDuty == 0)
			{
				bFlashMode = true;
			}
			else
			{
				iDuty--;
			}
		}
		SetPwmDutyCycle(iChannel, iDuty);
		usleep(10000);
	}*/
	
	
	
	// return for all functions
	return 0;
}





