/*
 * func-name: sub_10075DE0
 * func-address: 0x10075de0
 * callers: 0x10075fb0, 0x100d5290
 * callees: 0x1006fd90, 0x1006fe50, 0x101a2522
 */

CREControl *__cdecl sub_10075DE0(int a1, int a2, CREControl *a3)
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
    {
      sub_1006FE50(v3, a1);
      *((_DWORD *)v3 + 4) = *(_DWORD *)(a1 + 16);
    }
    v3 = (CREControl *)((char *)v3 + 20);
    LOBYTE(v10) = 0;
    a1 += 20;
  }
  return v3;
}
