/*
 * func-name: sub_10137300
 * func-address: 0x10137300
 * callers: 0x100083c3
 * callees: 0x1000c63f, 0x102c9d98
 */

HookEsbSheild *__stdcall sub_10137300(struct World *a1)
{
  HookEsbSheild *v1; // eax

  v1 = (HookEsbSheild *)operator new(0x4CCu);
  if ( v1 )
    return HookEsbSheild::HookEsbSheild(v1, a1);
  else
    return 0;
}
