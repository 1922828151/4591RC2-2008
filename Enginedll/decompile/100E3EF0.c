/*
 * func-name: ?Instance@MaterialManager@@SAPAV1@XZ
 * func-address: 0x100e3ef0
 * callers: 0x10003a50, 0x1003a4c0, 0x10040990, 0x10042bf0, 0x100e3fc0, 0x100e40e0, 0x100e42b0, 0x100e4400, 0x100e4420, 0x100e4d40, 0x100e6830, 0x100e6db0, 0x100e78e0, 0x100efe90, 0x100f04f0, 0x1011b870, 0x1011d270, 0x10136530, 0x1013e1c0, 0x101658e0, 0x10166120, 0x1016e310
 * callees: 0x101a26a0
 */

struct MaterialManager *__cdecl MaterialManager::Instance()
{
  if ( (dword_11240D84 & 1) == 0 )
  {
    dword_11240D84 |= 1u;
    dword_11240D54 = 0;
    dword_11240D58 = 0;
    dword_11240D5C = 0;
    dword_11240D64 = 0;
    dword_11240D68 = 0;
    dword_11240D6C = 0;
    dword_11240D78 = 0;
    dword_11240D7C = 0;
    dword_11240D80 = 0;
    dword_11240D4C = 0;
    atexit(sub_101B9020);
  }
  return (struct MaterialManager *)&dword_11240D4C;
}
