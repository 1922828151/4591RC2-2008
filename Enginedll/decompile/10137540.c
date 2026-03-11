/*
 * func-name: ?GetClipPlane@World@@QAEMXZ
 * func-address: 0x10137540
 * callers: 0x10002270, 0x1003fb30
 * callees: none
 */

double __thiscall World::GetClipPlane(World *this)
{
  return (float)((double)*((int *)this + 18)
               - *((float *)this + 19) * (double)*((int *)this + 18) * *((float *)this + 16));
}
