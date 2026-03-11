/*
 * func-name: sub_10137270
 * func-address: 0x10137270
 * callers: 0x100025a4
 * callees: 0x10003c3d, 0x102c9d98
 */

HookEsbTake *__stdcall sub_10137270(struct World *a1)
{
  HookEsbTake *v1; // eax

  v1 = (HookEsbTake *)operator new(0x4DCu);
  if ( v1 )
    return HookEsbTake::HookEsbTake(v1, a1);
  else
    return 0;
}
