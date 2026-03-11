/*
 * func-name: sub_100ED200
 * func-address: 0x100ed200
 * callers: 0x100eb8b0, 0x100ed7a0, 0x100ed940
 * callees: 0x1017a0b0, 0x101a2500
 */

void __cdecl sub_100ED200(_DWORD *a1, _DWORD *a2)
{
  _DWORD *i; // esi
  void *v3; // eax

  for ( i = a1; i != a2; i += 20 )
  {
    sub_1017A0B0(i + 10);
    v3 = (void *)i[1];
    if ( v3 )
      operator delete(v3);
    i[1] = 0;
    i[2] = 0;
    i[3] = 0;
  }
}
