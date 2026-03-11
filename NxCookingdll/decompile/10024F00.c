/*
 * func-name: NxCookSoftBodyMesh
 * func-address: 0x10024f00
 * callers: 0x100250b0
 * callees: 0x10007d70, 0x10008620, 0x1000bf10, 0x10024cf0
 */

char __cdecl NxCookSoftBodyMesh(int a1, int a2)
{
  float v3; // edi
  int v4; // ebx
  unsigned int v5; // esi
  int v7; // edx
  int v8; // ecx
  float v9; // ebp
  float v10; // esi
  float v11; // ebp
  int v12; // esi
  int v13; // eax
  char v14; // bl
  float v15[11]; // [esp+8h] [ebp-120h] BYREF
  int v16; // [esp+34h] [ebp-F4h]
  int v17; // [esp+38h] [ebp-F0h]
  int v18; // [esp+3Ch] [ebp-ECh]
  int v19; // [esp+40h] [ebp-E8h]
  int v20; // [esp+44h] [ebp-E4h]
  _DWORD v21[56]; // [esp+48h] [ebp-E0h] BYREF

  if ( !dword_1005B464 )
    return 0;
  if ( *(_DWORD *)a1 > 0xFFFFu && (*(_BYTE *)(a1 + 24) & 2) != 0 )
    return 0;
  if ( !*(_DWORD *)(a1 + 16) )
    return 0;
  if ( *(_DWORD *)(a1 + 8) < 0xCu )
    return 0;
  v3 = *(float *)(a1 + 20);
  if ( v3 == 0.0 )
    return 0;
  v4 = *(_DWORD *)(a1 + 24);
  v5 = *(_DWORD *)(a1 + 12);
  if ( (v4 & 2) != 0 ? v5 < 6 : v5 < 0xC )
    return 0;
  v7 = *(_DWORD *)(a1 + 36);
  if ( v7 )
  {
    if ( *(_DWORD *)(a1 + 28) < 4u )
      return 0;
  }
  v8 = *(_DWORD *)(a1 + 40);
  if ( v8 )
  {
    if ( *(_DWORD *)(a1 + 32) < 4u )
      return 0;
  }
  v15[3] = 0.0;
  v15[10] = 0.0;
  v15[4] = 0.0;
  v15[8] = 0.0;
  v15[1] = *(float *)a1;
  v9 = *(float *)(a1 + 8);
  LODWORD(v15[6]) = v5;
  v10 = *(float *)(a1 + 16);
  v15[2] = v9;
  v11 = *(float *)(a1 + 4);
  v15[7] = v10;
  v12 = *(_DWORD *)(a1 + 28);
  v13 = *(_DWORD *)(a1 + 32);
  LODWORD(v15[0]) = 2;
  v15[5] = v11;
  v15[9] = v3;
  v17 = v12;
  v18 = v13;
  v19 = v7;
  v20 = v8;
  v16 = 0;
  if ( (v4 & 4) != 0 )
    v16 = 256;
  if ( (v4 & 2) != 0 )
    v16 |= 2u;
  sub_10024CF0(v21);
  if ( !sub_1000BF10((int)v21, v15) )
  {
    sub_10008620(v21);
    return 0;
  }
  v14 = sub_10007D70((int)v21, a2, v4 & 2);
  sub_10008620(v21);
  return v14;
}
