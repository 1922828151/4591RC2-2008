/*
 * func-name: sub_1009B260
 * func-address: 0x1009b260
 * callers: none
 * callees: 0x10116c70, 0x101a2534
 */

PrefabInstance *__stdcall sub_1009B260(struct World *a1)
{
  PrefabInstance *v1; // eax

  v1 = (PrefabInstance *)operator new(0x4B0u);
  if ( v1 )
    return PrefabInstance::PrefabInstance(v1, a1);
  else
    return 0;
}
