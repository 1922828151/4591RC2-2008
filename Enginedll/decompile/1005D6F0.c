/*
 * func-name: sub_1005D6F0
 * func-address: 0x1005d6f0
 * callers: 0x1016bae0, 0x1016bc60
 * callees: 0x100589f0, 0x101a2522
 */

_DWORD *__cdecl sub_1005D6F0(CREControl *a1, CREControl *a2, _DWORD *a3)
{
  _DWORD *v3; // esi
  _DWORD v6[5]; // [esp+0h] [ebp-20h] BYREF
  int v7; // [esp+1Ch] [ebp-4h]

  v3 = a3;
  v6[4] = v6;
  v6[3] = a3;
  v7 = 0;
  while ( a1 != a2 )
  {
    LOBYTE(v7) = 1;
    if ( v3 )
    {
      *v3 = &MatBlock::`vftable';
      v3[1] = *((_DWORD *)a1 + 1);
      v3[2] = *((_DWORD *)a1 + 2);
      v3[3] = *((_DWORD *)a1 + 3);
      v3[4] = *((_DWORD *)a1 + 4);
      v3[5] = *((_DWORD *)a1 + 5);
      v3[6] = *((_DWORD *)a1 + 6);
      v3[7] = *((_DWORD *)a1 + 7);
      sub_100589F0(v3 + 8, (int)a1 + 32);
      v3[12] = *((_DWORD *)a1 + 12);
    }
    v3 += 13;
    LOBYTE(v7) = 0;
    a1 = (CREControl *)((char *)a1 + 52);
  }
  return v3;
}
