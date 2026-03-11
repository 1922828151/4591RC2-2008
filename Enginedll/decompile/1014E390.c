/*
 * func-name: sub_1014E390
 * func-address: 0x1014e390
 * callers: 0x1014f1d0, 0x1014f2b0
 * callees: 0x101493d0, 0x1014dfd0, 0x101a2522
 */

CREControl *__cdecl sub_1014E390(_DWORD *a1, _DWORD *a2, CREControl *a3)
{
  CREControl *v3; // esi
  int v6; // [esp+0h] [ebp-24h] BYREF
  CREControl *v7; // [esp+Ch] [ebp-18h]
  CREControl *v8; // [esp+10h] [ebp-14h]
  int *v9; // [esp+14h] [ebp-10h]
  int v10; // [esp+20h] [ebp-4h]

  v3 = a3;
  v9 = &v6;
  v8 = a3;
  v10 = 0;
  while ( a1 != a2 )
  {
    v7 = v3;
    LOBYTE(v10) = 1;
    if ( v3 )
      sub_1014DFD0(v3, a1);
    v3 = (CREControl *)((char *)v3 + 68);
    LOBYTE(v10) = 0;
    a1 += 17;
  }
  return v3;
}
