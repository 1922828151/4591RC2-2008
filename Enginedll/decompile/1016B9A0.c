/*
 * func-name: sub_1016B9A0
 * func-address: 0x1016b9a0
 * callers: 0x1016baa0, 0x1016c020
 * callees: 0x100589f0, 0x101a2522
 */

_DWORD *__cdecl sub_1016B9A0(CREControl *a1, int a2, _DWORD *a3)
{
  CREControl *v4; // esi
  _DWORD *result; // eax
  int v6; // [esp+0h] [ebp-24h] BYREF
  CREControl *v7; // [esp+Ch] [ebp-18h]
  CREControl *v8; // [esp+10h] [ebp-14h]
  int *v9; // [esp+14h] [ebp-10h]
  int v10; // [esp+20h] [ebp-4h]

  v4 = a1;
  v9 = &v6;
  v8 = a1;
  v10 = 0;
  while ( a2 )
  {
    v7 = v4;
    LOBYTE(v10) = 1;
    if ( v4 )
    {
      *(_DWORD *)v4 = &MatBlock::`vftable';
      *((_DWORD *)v4 + 1) = a3[1];
      *((_DWORD *)v4 + 2) = a3[2];
      *((_DWORD *)v4 + 3) = a3[3];
      *((_DWORD *)v4 + 4) = a3[4];
      *((_DWORD *)v4 + 5) = a3[5];
      *((_DWORD *)v4 + 6) = a3[6];
      *((_DWORD *)v4 + 7) = a3[7];
      result = sub_100589F0((_DWORD *)v4 + 8, (int)(a3 + 8));
      *((_DWORD *)v4 + 12) = a3[12];
    }
    --a2;
    v4 = (CREControl *)((char *)v4 + 52);
    LOBYTE(v10) = 0;
  }
  return result;
}
