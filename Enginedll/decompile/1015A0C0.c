/*
 * func-name: sub_1015A0C0
 * func-address: 0x1015a0c0
 * callers: 0x1015a400
 * callees: 0x10159220, 0x10159320, 0x101a2522
 */

CREControl *__cdecl sub_1015A0C0(int a1, int a2, CREControl *a3)
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
      sub_10159320((char *)v3, a1);
    v3 = (CREControl *)((char *)v3 + 84);
    LOBYTE(v10) = 0;
    a1 += 84;
  }
  return v3;
}
