/*
 * func-name: sub_100FFDE0
 * func-address: 0x100ffde0
 * callers: 0x10100450, 0x101006c0
 * callees: 0x1000e7f0, 0x10061e00, 0x101a2500, 0x101a2522
 */

CREControl *__cdecl sub_100FFDE0(_DWORD *a1, _DWORD *a2, CREControl *a3)
{
  CREControl *v3; // esi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v9; // [esp+0h] [ebp-34h] BYREF
  char v10[4]; // [esp+Ch] [ebp-28h] BYREF
  void *v11; // [esp+10h] [ebp-24h]
  int v12; // [esp+14h] [ebp-20h]
  int v13; // [esp+18h] [ebp-1Ch]
  CREControl *v14; // [esp+1Ch] [ebp-18h]
  CREControl *v15; // [esp+20h] [ebp-14h]
  int *v16; // [esp+24h] [ebp-10h]
  int v17; // [esp+30h] [ebp-4h]

  v3 = a3;
  v16 = &v9;
  v15 = a3;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v17 = 0;
  while ( 1 )
  {
    LOBYTE(v17) = 1;
    if ( a1 == a2 )
      break;
    v14 = v3;
    LOBYTE(v17) = 2;
    if ( v3 )
      sub_1000E7F0(v3, (int)v10);
    v5 = *((_DWORD *)v3 + 1);
    *((_DWORD *)v3 + 1) = a1[1];
    a1[1] = v5;
    v6 = *((_DWORD *)v3 + 2);
    *((_DWORD *)v3 + 2) = a1[2];
    a1[2] = v6;
    v7 = *((_DWORD *)v3 + 3);
    *((_DWORD *)v3 + 3) = a1[3];
    v3 = (CREControl *)((char *)v3 + 16);
    a1[3] = v7;
    a1 += 4;
  }
  if ( v11 )
    operator delete(v11);
  return v3;
}
