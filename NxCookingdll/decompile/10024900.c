/*
 * func-name: NxCookConvexMesh
 * func-address: 0x10024900
 * callers: 0x10024bc0
 * callees: 0x100233a0, 0x100233c0, 0x10023e50, 0x100242e0, 0x100261a0, 0x1002af60
 */

char __cdecl NxCookConvexMesh(_BYTE *a1, int a2)
{
  bool v4; // bl
  float *v5; // eax
  int *v6; // esi
  double v7; // st7
  int v8; // [esp+Eh] [ebp-50h] BYREF
  int v9; // [esp+12h] [ebp-4Ch]
  int v10; // [esp+16h] [ebp-48h]
  int v11; // [esp+1Ah] [ebp-44h]
  int v12; // [esp+1Eh] [ebp-40h]
  int v13; // [esp+22h] [ebp-3Ch]
  _DWORD v14[7]; // [esp+26h] [ebp-38h] BYREF
  int v15; // [esp+42h] [ebp-1Ch] BYREF
  int v16; // [esp+46h] [ebp-18h]
  float v17; // [esp+4Ah] [ebp-14h]
  float v18; // [esp+4Eh] [ebp-10h]
  float v19; // [esp+52h] [ebp-Ch]
  float v20; // [esp+56h] [ebp-8h]
  int v21; // [esp+5Ah] [ebp-4h]

  if ( !dword_1005B464 )
    return 0;
  if ( *(_DWORD *)a1 < 3u
    || *(_DWORD *)a1 > 0xFFFFu && (a1[24] & 2) != 0
    || !*((_DWORD *)a1 + 4)
    || *((_DWORD *)a1 + 2) < 0xCu )
  {
    return 0;
  }
  if ( *((_DWORD *)a1 + 5) )
  {
    if ( *((_DWORD *)a1 + 1) >= 2u && !((a1[24] & 2) != 0 ? *((_DWORD *)a1 + 3) < 6u : *((_DWORD *)a1 + 3) < 0xCu) )
      goto LABEL_13;
    return 0;
  }
  if ( (a1[24] & 4) == 0 )
    return 0;
LABEL_13:
  qmemcpy(v14, a1, sizeof(v14));
  v4 = (v14[6] & 4) != 0 && (v14[6] & 8) != 0;
  v5 = (float *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, 348, 13);
  if ( !v5 )
    return 0;
  v6 = (int *)sub_100233A0(v5);
  if ( !v6 )
    return 0;
  v19 = 0.001;
  v15 = 0;
  v16 = 0;
  v20 = 0.0099999998;
  v17 = 0.0;
  v18 = 0.0;
  v21 = 4096;
  LOBYTE(v8) = 1;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  if ( (v14[6] & 4) != 0 )
  {
    v15 = 5;
    v16 = v14[0];
    v17 = *(float *)&v14[4];
    v18 = *(float *)&v14[2];
    if ( v4 )
      v7 = *(float *)&dword_1005B1D4;
    else
      v7 = 0.0;
    v20 = v7;
    if ( !sub_1002AF60(&v15, &v8) )
    {
      v14[6] &= ~4u;
      v14[0] = v9;
      v14[4] = v10;
      v14[2] = 12;
      v14[1] = v11;
      v14[5] = v13;
      v14[3] = 12;
    }
  }
  if ( !sub_10023E50(v6, v14) )
  {
    sub_100233C0(v6);
    (*(void (__thiscall **)(int, int *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v6);
    sub_100261A0(&v8);
    return 0;
  }
  sub_100242E0((int)v6, a2, v14[6] & 0x20);
  sub_100233C0(v6);
  (*(void (__thiscall **)(int, int *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v6);
  sub_100261A0(&v8);
  return 1;
}
