/*
 * func-name: sub_101161A0
 * func-address: 0x101161a0
 * callers: 0x10116230, 0x10116770
 * callees: 0x10115c20, 0x10115c90, 0x101a2522
 */

int *__cdecl sub_101161A0(CREControl *a1, int a2, int a3)
{
  CREControl *v3; // esi
  int *result; // eax
  int v6; // [esp+0h] [ebp-24h] BYREF
  CREControl *v7; // [esp+Ch] [ebp-18h]
  CREControl *v8; // [esp+10h] [ebp-14h]
  int *v9; // [esp+14h] [ebp-10h]
  int v10; // [esp+20h] [ebp-4h]

  v3 = a1;
  v9 = &v6;
  v8 = a1;
  v10 = 0;
  while ( a2 )
  {
    v7 = v3;
    LOBYTE(v10) = 1;
    if ( v3 )
      result = sub_10115C20((int *)v3, a3);
    --a2;
    v3 = (CREControl *)((char *)v3 + 60);
    LOBYTE(v10) = 0;
  }
  return result;
}
