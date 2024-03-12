
import sys
#sys.path.append('../Utility')
from time import sleep

from PyKiwiUtility import PyKiwi

Lux_Bright = 1000

DEBUG = True

Output=0
Input =1
High  =1
Low   =0


GP4 = 4
GP5 = 5
GP6 = 6
GP14 = 14
GP15 = 15
GP16 = 16
GP17 = 17
GP18 = 18
GP19 = 19
GP20 = 20
GP21 = 21
GP22 = 22
GP23 = 23
GP24 = 24
GP25 = 25
GP26 = 26
GP27 = 27



mykiwi = PyKiwi()

_GPIO_OUTPUT_Dict = [GP22,GP23,GP24]
_LED_GPIO = {"GREEN":GP22,"YELLOW":GP23,"RED":GP24}
Lux_Black = 50
Lux_Bright = 1000

def debug_msg(messages):
    if DEBUG:
        print(messages)


def Init_GPIO():
    for gpio in _GPIO_OUTPUT_Dict:
        mykiwi.SetGpioMode(gpio,Output)
        mykiwi.SetGpioStatus(gpio,Low)      



def Show_LED_Algorithm(lx):

    global Lux_Black
    global Lux_Bright

    if  lx > Lux_Bright:    
        LedControl("GREEN")
    elif lx < Lux_Black:                 
        LedControl("RED")
    else:   
        LedControl("YELLOW")    

def LedControl(mled_On):

    for gpio in _GPIO_OUTPUT_Dict:         
        if _LED_GPIO[mled_On] == gpio:                          
            mykiwi.SetGpioStatus(gpio,High)        
        else:
            mykiwi.SetGpioStatus(gpio,Low)                               

def main():
    
    Init_GPIO()
    Show_LED_Algorithm(10)
    sleep(1)
    Show_LED_Algorithm(100)
    sleep(1)
    Show_LED_Algorithm(1500)
    sleep(1)


if __name__ == "__main__":
    
    main()