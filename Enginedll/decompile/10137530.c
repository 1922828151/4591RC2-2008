/*
 * func-name: ?SetClipPlane@World@@QAEXH@Z
 * func-address: 0x10137530
 * callers: 0x10003130, 0x10041980
 * callees: none
 */

void __thiscall World::SetClipPlane(World *this, int a2)
{
  *((_DWORD *)this + 18) = a2;
}
