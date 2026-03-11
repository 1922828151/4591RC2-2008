/*
 * func-name: sub_10137030
 * func-address: 0x10137030
 * callers: 0x1000e688
 * callees: 0x1001979a, 0x102c9d98
 */

HookEstablishment *__stdcall sub_10137030(struct World *a1)
{
  HookEstablishment *v1; // eax

  v1 = (HookEstablishment *)operator new(0x5A0u);
  if ( v1 )
    return HookEstablishment::HookEstablishment(v1, a1);
  else
    return 0;
}
