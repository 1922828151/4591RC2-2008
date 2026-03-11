/*
 * func-name: sub_10137390
 * func-address: 0x10137390
 * callers: 0x1000ff6a
 * callees: 0x10012585, 0x102c9d98
 */

HookEsbAirDrop *__stdcall sub_10137390(struct World *a1)
{
  HookEsbAirDrop *v1; // eax

  v1 = (HookEsbAirDrop *)operator new(0x4B8u);
  if ( v1 )
    return HookEsbAirDrop::HookEsbAirDrop(v1, a1);
  else
    return 0;
}
