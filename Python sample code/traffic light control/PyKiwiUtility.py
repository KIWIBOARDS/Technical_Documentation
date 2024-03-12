import os.path
from pywinio import WinIO
from ctypes import cdll,c_uint,c_int,c_ubyte,c_bool,byref,sizeof


class PyKiwi:
    def __init__(self):
        app_path = os.path.dirname(os.path.abspath(__file__))
        self.mydll = cdll.LoadLibrary(app_path+"\Dll\Kiwi.dll")
    #    app_path = os.path.dirname(os.path.abspath(__file__)) + os.path.sep + dll_name

    #    dll_name = 'Kiwi.dll'
    #    self.mydll = cdll.LoadLibrary(dll_name)

        
    def GetGpioConfig(self,mGPIO):

        Reresult = ( c_uint)()
        self.mydll.GetGpioConfig.restype = c_bool
        Status = self.mydll.GetGpioConfig(mGPIO,byref(Reresult))

        return Status,Reresult.value
    
    def GetGpioMode(self,mGPIO):

        Reresult = ( c_uint)()
        self.mydll.GetGpioMode.restype = c_bool
        Status = self.mydll.GetGpioMode(mGPIO,byref(Reresult))

        return Status,Reresult.value    

    def SetGpioMode(self,mGPIO,mDirection):
       
        self.mydll.SetGpioMode.restype = c_bool
        Status = self.mydll.SetGpioMode(mGPIO,mDirection)

        return Status            
    
    def GetGpioStatus(self,mGPIO):

        Reresult = ( c_uint)()
        self.mydll.GetGpioStatus.restype = c_bool
        Status = self.mydll.GetGpioStatus(mGPIO,byref(Reresult))

        return Status,Reresult  

    def SetGpioStatus(self,mGPIO,mLevle):

        self.mydll.SetGpioStatus.restype = c_bool
        Status = self.mydll.SetGpioStatus(mGPIO,mLevle)

        return Status       
