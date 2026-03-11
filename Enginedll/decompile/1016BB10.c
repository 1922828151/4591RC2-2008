/*
 * func-name: sub_1016BB10
 * func-address: 0x1016bb10
 * callers: none
 * callees: 0x10162f00, 0x101a2534
 */

Terrain *__stdcall sub_1016BB10(struct World *a1)
{
  Terrain *v1; // eax

  v1 = (Terrain *)operator new(0x6C4u);
  if ( v1 )
    return Terrain::Terrain(v1, a1);
  else
    return 0;
}
