/*
 * func-name: sub_100ED5C0
 * func-address: 0x100ed5c0
 * callers: 0x100ed820, 0x100ee100
 * callees: 0x100eca00, 0x100ecc60, 0x101a2522
 */

_DWORD *__cdecl sub_100ED5C0(CREControl *a1, int a2, _DWORD *a3)
{
  CREControl *v3; // esi
  _DWORD *result; // eax
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
      result = sub_100ECC60(v3, a3);
    --a2;
    v3 = (CREControl *)((char *)v3 + 80);
    LOBYTE(v10) = 0;
  }
  return result;
}
