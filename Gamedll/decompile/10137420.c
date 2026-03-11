/*
 * func-name: sub_10137420
 * func-address: 0x10137420
 * callers: 0x10006e97
 * callees: 0x10009aa2, 0x102c9d98
 */

HookEsbTransport *__stdcall sub_10137420(struct World *a1)
{
  HookEsbTransport *v1; // eax

  v1 = (HookEsbTransport *)operator new(0x4F8u);
  if ( v1 )
    return HookEsbTransport::HookEsbTransport(v1, a1);
  else
    return 0;
}
