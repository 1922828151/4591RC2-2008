/*
 * func-name: ?GetFogExponent@World@@QAEMXZ
 * func-address: 0x101374f0
 * callers: 0x10002270, 0x1003fb30, 0x1005bd90, 0x1005cb50
 * callees: none
 */

double __thiscall World::GetFogExponent(World *this)
{
  return (float)(*((float *)this + 13) * *((float *)this + 12) * *((float *)this + 16) + *((float *)this + 12));
}
