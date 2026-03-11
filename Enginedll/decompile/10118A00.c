/*
 * func-name: ?Instance@RenderCallbackManager@@SAPAV1@XZ
 * func-address: 0x10118a00
 * callers: 0x10118a60, 0x10118b80
 * callees: 0x101a26a0
 */

struct RenderCallbackManager *__cdecl RenderCallbackManager::Instance()
{
  if ( (dword_11241790 & 1) == 0 )
  {
    dword_11241790 |= 1u;
    dword_11241784 = 0;
    dword_11241788 = 0;
    dword_1124178C = 0;
    atexit(sub_101B9530);
  }
  return (struct RenderCallbackManager *)&unk_11241780;
}
