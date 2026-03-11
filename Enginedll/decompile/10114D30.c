/*
 * func-name: sub_10114D30
 * func-address: 0x10114d30
 * callers: 0x10115a30
 * callees: 0x1000f380, 0x10114be0, 0x101a2522
 */

CREControl *__cdecl sub_10114D30(int a1, int a2, CREControl *a3)
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
      sub_1000F380((int)v3, a1);
      LOBYTE(v10) = 2;
      sub_1000F380((int)v3 + 16, a1 + 16);
    }
    v3 = (CREControl *)((char *)v3 + 32);
    LOBYTE(v10) = 0;
    a1 += 32;
  }
  return v3;
}
