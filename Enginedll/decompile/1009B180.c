/*
 * func-name: sub_1009B180
 * func-address: 0x1009b180
 * callers: none
 * callees: 0x10051b50, 0x101a2534
 */

Prefab *__stdcall sub_1009B180(struct World *a1)
{
  Prefab *v1; // eax

  v1 = (Prefab *)operator new(0x494u);
  if ( v1 )
    return Prefab::Prefab(v1, a1);
  else
    return 0;
}
