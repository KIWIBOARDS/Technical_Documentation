

#ifndef Kiwi310_H
#define Kiwi310_H 
#if defined(__linux__) || defined(__FreeBSD__)
bool GetMcuVersion(uint8_t *Version);
bool GetGpioConfig(uint8_t HATNum, uint8_t *Config);
bool GetGpioMode(uint8_t HATNum, uint8_t *Mode);
bool SetGpioMode(uint8_t HATNum, uint8_t Mode);
bool GetGpioStatus(uint8_t HATNum, uint8_t *status);
bool SetGpioStatus(uint8_t HATNum, uint8_t status);
bool GetPwmConfig(uint8_t PwmNum, uint8_t *PwmConfig);
bool SetPwmStatus(uint8_t PwmNum, uint8_t PwmStatus);
bool SetPwmFrequency(uint8_t PwmNum, uint32_t PwmFrequency);
bool SetPwmDutyCycle(uint8_t PwmNum, uint8_t PwmDutyCycle);
bool GetPwmStatus(uint8_t PwmNum, uint8_t *PwmStatus);
bool GetPwmFrequency(uint8_t PwmNum, uint32_t *PwmFrequency);
bool GetPwmDutyCycle(uint8_t PwmNum, uint8_t *PwmDuty);
bool GetI2cConfig(uint8_t *Enable, uint8_t *Speed, uint8_t *Rs);
bool GetSPIConfig(uint8_t *Enable, uint8_t *Mode, uint8_t *DataOrder, uint8_t *Speed);
bool SetI2cConfig(uint8_t Enable, uint8_t Speed, uint8_t Rs);
bool SetSPIConfig(uint8_t Enable, uint8_t Mode, uint8_t DataOrder, uint8_t Speed);
bool AccessI2c(uint8_t Address, uint8_t wSize, uint8_t *wData, uint8_t rSize, uint8_t *rData);
bool AccessSPI(uint8_t Chipselect, uint8_t wSize, uint8_t *wData, uint8_t rSize, uint8_t *rData);
bool PWMtestmode(uint8_t Enable);
bool GetPWMtestmodevoltage(uint8_t PwmNum, uint16_t *PwmDutyCycle);
bool GetI2SGPIO(uint8_t Cmd, uint8_t * rValue);
bool SetI2SGPIO(uint8_t Cmd, uint8_t PinNum, uint8_t Value);
bool GetUartGPIO(uint8_t Cmd, uint8_t *rValue);
bool SetUartGPIO(uint8_t Cmd, uint8_t PinNum, uint8_t Value);
void GetMiddleWareVersion(uint8_t *MiddlewareVer);
bool AccessSPIBulk(uint8_t Chipselect, uint16_t wSize, uint8_t *wData, uint16_t rSize, uint8_t *rData);
#else
extern "C" __declspec(dllexport)bool GetMcuVersion(uint8_t *Version);
extern "C" __declspec(dllexport)bool GetGpioConfig(uint8_t HATNum, uint8_t *Config);
extern "C" __declspec(dllexport)bool GetGpioMode(uint8_t HATNum, uint8_t *Mode);
extern "C" __declspec(dllexport)bool SetGpioMode(uint8_t HATNum, uint8_t Mode);
extern "C" __declspec(dllexport)bool GetGpioStatus(uint8_t HATNum, uint8_t *status);
extern "C" __declspec(dllexport)bool SetGpioStatus(uint8_t HATNum, uint8_t status);
extern "C" __declspec(dllexport)bool GetPwmConfig(uint8_t PwmNum, uint8_t *PwmConfig);
extern "C" __declspec(dllexport)bool SetPwmStatus(uint8_t PwmNum, uint8_t PwmStatus);
extern "C" __declspec(dllexport)bool SetPwmFrequency(uint8_t PwmNum, uint32_t PwmFrequency);
extern "C" __declspec(dllexport)bool SetPwmDutyCycle(uint8_t PwmNum, uint8_t PwmDutyCycle);
extern "C" __declspec(dllexport)bool GetPwmStatus(uint8_t PwmNum, uint8_t *PwmStatus);
extern "C" __declspec(dllexport)bool GetPwmFrequency(uint8_t PwmNum, uint32_t *PwmFrequency);
extern "C" __declspec(dllexport)bool GetPwmDutyCycle(uint8_t PwmNum, uint8_t *PwmDuty);
extern "C" __declspec(dllexport)bool GetI2cConfig(uint8_t *Enable, uint8_t *Speed, uint8_t *Rs);
extern "C" __declspec(dllexport)bool GetSPIConfig(uint8_t *Enable, uint8_t *Mode, uint8_t *DataOrder, uint8_t *Speed);
extern "C" __declspec(dllexport)bool SetI2cConfig(uint8_t Enable, uint8_t Speed, uint8_t Rs);
extern "C" __declspec(dllexport)bool SetSPIConfig(uint8_t Enable, uint8_t Mode, uint8_t DataOrder, uint8_t Speed);
extern "C" __declspec(dllexport)bool AccessI2c(uint8_t Address, uint8_t wSize, uint8_t *wData, uint8_t rSize, uint8_t *rData);
extern "C" __declspec(dllexport)bool AccessSPI(uint8_t Chipselect, uint8_t wSize, uint8_t *wData, uint8_t rSize, uint8_t *rData);
extern "C" __declspec(dllexport)bool PWMtestmode(uint8_t Enable);
extern "C" __declspec(dllexport)bool GetPWMtestmodevoltage(uint8_t PwmNum, uint16_t *PwmDutyCycle);
extern "C" __declspec(dllexport)bool GetI2SGPIO(uint8_t Cmd, uint8_t * rValue);
extern "C" __declspec(dllexport)bool SetI2SGPIO(uint8_t Cmd, uint8_t PinNum, uint8_t Value);
extern "C" __declspec(dllexport)bool GetUartGPIO(uint8_t Cmd, uint8_t *rValue);
extern "C" __declspec(dllexport)bool SetUartGPIO(uint8_t Cmd, uint8_t PinNum, uint8_t Value);
extern "C" __declspec(dllexport)void GetMiddleWareVersion(uint8_t *MiddlewareVer);
extern "C" __declspec(dllexport)bool AccessSPIBulk(uint8_t Chipselect, uint16_t wSize, uint8_t *wData, uint16_t rSize, uint8_t *rData);
#endif
#endif
#define   WRITE_COMMAND   0x02
#define   READ_COMMAND    0x04

#define   Noise          0x00
#define   Noise          0x00

#define   Error_H         0x00
#define   Error_L         0x00
/*=======Error Table==========*/
enum Error_Table
{
	Err_Pass,
	Err_Format_invalid,
	Err_CRC_invalid,
	Err_Command_invalid,
	Err_Payload_data_invalid,
	Err_Payload_length_invalid,
	Err_Mcu_Cmd_fail = 0x10
};
/*======Command Type==========*/

#define   Get_MCU_version             0x00
#define   Get_GPIO_Config             0x01
#define   Get_GPIO_mode               0x02
#define   Set_GPIO_mode               0x03
#define   Get_GPIO_status             0x04
#define   Set_GPIO_status             0x05
#define   Get_PWM_Config              0x06
#define   Set_PWM_mode                0x07
#define   Get_PWM_mode                0x08 //ADD
#define   Set_PWM_duty_cycle            0x09
#define   Get_serial_interface_config   0x0A
#define   Config_I2C_interface          0x0B
#define   Config_SPI_interface          0x0C
#define   Access_I2C                    0x0D
#define   Access_SPI                    0x0E
#define   PWM_test_mode                 0x80
#define   Get_PWM_test_mode_voltage     0x81
#define   Access_SPI_Bulk               0x82

#define   WLen_Set_GPIO_mode            0x02
#define   WLen_Set_GPIO_status          0x02
#define   WLen_Set_PWM_mode             0x07
#define   WLen_Get_PWM_mode             0x01
#define   WLen_Set_PWM_duty_cycle       0x02
#define   WLen_Config_I2C_interface     0x01
#define   WLen_Config_SPI_interface     0x02
#define   WLen_PWM_test_mode            0x01
/*======Uart Config==========*/
#if defined(__linux__) || defined(__FreeBSD__)
#define   ComNum   24  // Com
#else
#define   ComNum   2  //  Com
#endif
#define   bdrate   115200  /* 115200 baud */

char mode[]  = {'8','N','1',0};  

#ifndef BIT00
#define 	BIT00	0x00000001
#endif
#ifndef BIT01
#define 	BIT01	0x00000002
#endif
#ifndef BIT02
#define 	BIT02	0x00000004
#endif
#ifndef BIT03
#define 	BIT03	0x00000008
#endif
#ifndef BIT06
#define 	BIT06	0x00000040
#endif
#ifndef BIT08
#define 	BIT08	0x00000100
#endif
#ifndef BIT09
#define 	BIT09	0x00000200
#endif
#ifndef BIT10
#define 	BIT10	0x00000400
#endif
#ifndef BIT11
#define 	BIT11	0x00000800
#endif
#ifndef BIT12
#define 	BIT12	0x00001000
#endif

typedef struct _MCUPIN {
	uint8_t	   GPIONum;
	int	       HATNum;
}MCUPIN;

MCUPIN   McuPinMap[] =
{
{ 0x04, 27 },
{ 0x05, 22 },
{ 0x06, 4 },
{ 0x07, 5 },
//{ 0x08, 12 },
//{ 0x09, 13 },
//{ 0x0A, 2 },
//{ 0x0B, 3 },
//{ 0x0C, 8 },
//{ 0x0D, 7 },
{ 0x0E, 6 },
{ 0x0F, 16 },
{ 0x10, 26 },
{ 0x11, 25 },
{ 0x12, 23 },
{ 0x13, 24 },
{ 0x14, 0 },
{ 0x15, 1 },
{ 0x01, 17 },
};
