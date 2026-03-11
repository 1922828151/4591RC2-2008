/*
 * func-name: sub_1015C0B0
 * func-address: 0x1015c0b0
 * callers: none
 * callees: 0x1015bcd0, 0x101a2534
 */

Prefab *__stdcall sub_1015C0B0(struct World *a1)
{
  Prefab *v1; // eax

  v1 = (Prefab *)operator new(0x4C0u);
  if ( v1 )
    return sub_1015BCD0(v1, a1);
  else
    return 0;
}
