/*
 * func-name: ?IsCompatibleWithModule@Serializer@@SA_NAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
 * func-address: 0x1011aff0
 * callers: none
 * callees: 0x1003e810, 0x100408a0, 0x100f16a0, 0x101a2500, 0x101a2534
 */

char __cdecl Serializer::IsCompatibleWithModule(int a1, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  char v4; // bl

  v2 = operator new(0xB8u);
  if ( v2 )
    v3 = sub_100408A0(v2);
  else
    v3 = 0;
  v4 = sub_1003E810((int)v3, a1, a2);
  if ( v3 )
  {
    sub_100F16A0((int)v3);
    operator delete(v3);
  }
  return v4;
}
