/*
 * func-name: ?GetFogStartDistance@World@@QAEMXZ
 * func-address: 0x10137510
 * callers: 0x10002270, 0x1003fb30, 0x1005bd90, 0x1005cb50
 * callees: none
 */

double __thiscall World::GetFogStartDistance(World *this)
{
  return (float)(*((float *)this + 14) - *((float *)this + 15) * *((float *)this + 14) * *((float *)this + 16));
}
