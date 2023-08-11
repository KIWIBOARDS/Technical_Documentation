#ifndef AXWIO_H
#define AXWIO_H

#ifndef AXWIO_DLL
#define AXWIO_API _declspec(dllimport)
#else
#define AXWIO_API 
#endif

struct tagPhysStruct
{
	DWORD64 dwPhysMemSizeInBytes;
	DWORD64 pvPhysAddress;
	DWORD64 PhysicalMemoryHandle;
	DWORD64 pvPhysMemLin;
	DWORD64 pvPhysSection;
};
/*
enum bool
{
    true=1, false=0
};*/
extern "C"
{
  AXWIO_API bool _stdcall InitializeAxWIO();
  AXWIO_API void _stdcall ShutdownAxWIO();
  AXWIO_API PBYTE _stdcall MapPhysToLin(tagPhysStruct &PhysStruct);
  AXWIO_API bool _stdcall UnmapPhysicalMemory(tagPhysStruct &PhysStruct);
  AXWIO_API bool _stdcall GetPhysLong(PBYTE pbPhysAddr, PDWORD pdwPhysVal);
  AXWIO_API bool _stdcall SetPhysLong(PBYTE pbPhysAddr, DWORD dwPhysVal);
  AXWIO_API BOOL _stdcall GetPortVal(WORD wPortAddr, PDWORD pdwPortVal, BYTE bSize);
  AXWIO_API BOOL _stdcall SetPortVal(WORD wPortAddr, DWORD dwPortVal, BYTE bSize);
  AXWIO_API bool _stdcall InstallAxWIODriver(PWSTR pszAxWIODriverPath, bool IsDemandLoaded = false);
  AXWIO_API BOOL _stdcall RemoveAxWIODriver();
  AXWIO_API UCHAR  _stdcall axInp(USHORT wIoPort);
  AXWIO_API USHORT _stdcall axInpw(USHORT wIoPort);
  AXWIO_API ULONG  _stdcall axInpd(USHORT wIoPort);
  AXWIO_API UCHAR  _stdcall AxInp(USHORT wIoPort);
  AXWIO_API USHORT _stdcall AxInpw(USHORT wIoPort);
  AXWIO_API ULONG  _stdcall AxInpd(USHORT wIoPort);
  AXWIO_API BOOL _stdcall _dtAxInp(USHORT wIoPort, UCHAR *pReadData);
  AXWIO_API BOOL _stdcall _dtAxInpw(USHORT wIoPort, USHORT *pReadData);
  AXWIO_API BOOL _stdcall _dtAxInpd(USHORT wIoPort, ULONG *pReadData);
  AXWIO_API int _stdcall	axOutp(USHORT wIoPort, UCHAR nData);
  AXWIO_API int _stdcall	axOutpw(USHORT wIoPort, USHORT nData);
  AXWIO_API int _stdcall	axOutpd(USHORT wIoPort, ULONG nData);
  AXWIO_API int _stdcall	AxOutp(USHORT wIoPort, UCHAR nData);
  AXWIO_API int _stdcall	AxOutpw(USHORT wIoPort, USHORT nData);
  AXWIO_API int _stdcall	AxOutpd(USHORT wIoPort, ULONG nData);
  AXWIO_API BOOL _stdcall _dtAxOutp(USHORT wIoPort, UCHAR WriteData);
  AXWIO_API BOOL _stdcall _dtAxOutpw(USHORT wIoPort, USHORT WriteData);
  AXWIO_API BOOL _stdcall _dtAxOutpd(USHORT wIoPort, ULONG WriteData);
  AXWIO_API bool _stdcall _get_PhysMemory_Data(PBYTE pbPhysSegment, long offset, long lDataLength, unsigned char *pReadBuffer);
  AXWIO_API bool _stdcall _set_PhysMemory_Data(PBYTE pbPhysSegment, long offset, long lDataLength, unsigned char *pReadBuffer);
}

extern HANDLE hDriver;
extern bool IsAxWIOInitialized;
extern bool g_Is64BitOS;

bool _stdcall StartAxWIODriver();
BOOL _stdcall StopAxWIODriver();

#endif
