/*
 * func-name: ?GetFogDistance@World@@QAEMXZ
 * func-address: 0x101374b0
 * callers: 0x10002270, 0x1003fb30, 0x1005bd90, 0x1005cb50, 0x1012d660, 0x1012e2b0
 * callees: 0x1007ec70
 */

double __thiscall World::GetFogDistance(World *this)
{
  if ( *((_DWORD *)Editor::Instance() + 62) )
    return 1.0e10;
  return (float)(*((float *)this + 10) - *((float *)this + 11) * *((float *)this + 10) * *((float *)this + 16));
}
