/*
 * func-name: ?Instance@FXManager@@SAPAV1@XZ
 * func-address: 0x100a01c0
 * callers: 0x10001020, 0x1000aa70, 0x10013120, 0x1004ef90, 0x10087570, 0x10087a10, 0x10088400, 0x10088cd0, 0x1010a6c0, 0x101396e0, 0x10139890, 0x1013db50
 * callees: 0x100a0050, 0x101a26a0
 */

struct FXManager *__cdecl FXManager::Instance()
{
  if ( (dword_1123D6F0 & 1) == 0 )
  {
    dword_1123D6F0 |= 1u;
    FXManager::FXManager((FXManager *)&dword_1123D6A8);
    atexit(sub_101B8D60);
  }
  return (struct FXManager *)&dword_1123D6A8;
}
