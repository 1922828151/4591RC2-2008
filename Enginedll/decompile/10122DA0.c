/*
 * func-name: ?Instance@ShaderManager@@SAPAV1@XZ
 * func-address: 0x10122da0
 * callers: 0x1005bd90, 0x1005cb50, 0x10097ea0, 0x100e68a0, 0x1010d330, 0x10124400, 0x10124d90, 0x10125a30, 0x1013e1c0
 * callees: 0x10122c20, 0x101a26a0
 */

struct ShaderManager *__cdecl ShaderManager::Instance()
{
  if ( (dword_112418C8 & 1) == 0 )
  {
    dword_112418C8 |= 1u;
    ShaderManager::ShaderManager((ShaderManager *)&unk_112417F8);
    atexit(sub_101B95C0);
  }
  return (struct ShaderManager *)&unk_112417F8;
}
