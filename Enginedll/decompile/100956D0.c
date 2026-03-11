/*
 * func-name: ?Error@@YAJPBDZZ
 * func-address: 0x100956d0
 * callers: 0x100384a0, 0x10044cf0, 0x10049140, 0x100497b0, 0x10049860, 0x10049910, 0x1004add0, 0x10061350, 0x10061480, 0x10061750, 0x100617f0, 0x10064690, 0x100647a0, 0x10064880, 0x10064990, 0x10064ab0, 0x10066970, 0x10066a20, 0x100769d0, 0x1007e380, 0x1007e7c0, 0x1007e880, 0x10096550, 0x10096b90, 0x10097800, 0x10097ea0, 0x10099650, 0x1009cf20, 0x1009d150, 0x1009d640, 0x100db790, 0x100db860, 0x100df700, 0x100e4420, 0x100e7390, 0x100f2260, 0x100f30c0, 0x100f37e0, 0x100f8d10, 0x10118ed0, 0x10118f10, 0x10118f60, 0x1011fbb0, 0x101206e0, 0x10125a30, 0x101381e0, 0x10138880, 0x1013a940, 0x10140d40, 0x10141080, 0x101410f0, 0x10141150, 0x10141230, 0x10141500, 0x10141680, 0x10145800, 0x10174aa0
 * callees: none
 */

int Error(char *Format, ...)
{
  _DWORD v2[8]; // [esp-1Ch] [ebp-20h] BYREF
  va_list ArgList; // [esp+Ch] [ebp+8h] BYREF

  va_start(ArgList, Format);
  vsprintf(Buffer, Format, ArgList);
  v2[7] = v2;
  std::string::string(v2, Buffer);
  (*(void (__thiscall **)(struct DialogManager *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)DialogManager::Instance + 4))(
    DialogManager::Instance,
    v2[0],
    v2[1],
    v2[2],
    v2[3],
    v2[4],
    v2[5],
    v2[6]);
  return 0;
}
