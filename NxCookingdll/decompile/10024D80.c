/*
 * func-name: NxCookClothMesh
 * func-address: 0x10024d80
 * callers: 0x10025090
 * callees: 0x10007d70, 0x10008620, 0x1000bf10, 0x10024cf0
 */

char __cdecl NxCookClothMesh(int a1, int a2)
{
  float v3; // ebp
  float v4; // edi
  float v5; // esi
  float v6; // eax
  double v8; // st7
  float v9; // edx
  float v10; // edx
  float v11; // eax
  float v12; // edx
  float v13; // eax
  char v14; // bl
  int v15; // [esp+4h] [ebp-124h]
  float v16[16]; // [esp+8h] [ebp-120h] BYREF
  _DWORD v17[56]; // [esp+48h] [ebp-E0h] BYREF

  if ( !dword_1005B464 )
    return 0;
  v15 = *(_DWORD *)(a1 + 36);
  if ( v15 && *(_DWORD *)(a1 + 28) < 4u )
    return 0;
  v3 = *(float *)(a1 + 40);
  if ( v3 != 0.0 && *(_DWORD *)(a1 + 32) < 4u )
    return 0;
  if ( *(float *)(a1 + 44) < 0.0 )
    return 0;
  v4 = *(float *)a1;
  if ( *(_DWORD *)a1 > 0xFFFFu && (*(_BYTE *)(a1 + 24) & 2) != 0 )
    return 0;
  v5 = *(float *)(a1 + 16);
  if ( v5 == 0.0 || *(_DWORD *)(a1 + 8) < 0xCu )
    return 0;
  v6 = *(float *)(a1 + 20);
  if ( v6 != 0.0 && ((*(_BYTE *)(a1 + 24) & 2) != 0 ? *(_DWORD *)(a1 + 12) < 6u : *(_DWORD *)(a1 + 12) < 0xCu) )
    return 0;
  v8 = *(float *)(a1 + 44);
  v16[2] = *(float *)(a1 + 8);
  v9 = *(float *)(a1 + 4);
  v16[10] = v8;
  v16[3] = v9;
  v10 = *(float *)(a1 + 12);
  v16[8] = v6;
  v11 = *(float *)(a1 + 24);
  v16[4] = v10;
  v12 = *(float *)(a1 + 28);
  v16[11] = v11;
  v13 = *(float *)(a1 + 32);
  LODWORD(v16[14]) = v15;
  v16[5] = 0.0;
  v16[6] = 0.0;
  v16[9] = 0.0;
  LODWORD(v16[0]) = 1;
  v16[1] = v4;
  v16[7] = v5;
  v16[12] = v12;
  v16[13] = v13;
  v16[15] = v3;
  sub_10024CF0(v17);
  if ( !sub_1000BF10((int)v17, v16) )
  {
    sub_10008620(v17);
    return 0;
  }
  if ( dword_1005B1D0 )
  {
    if ( (unsigned int)(dword_1005B1D0 - 1) <= 1 )
      LOBYTE(v15) = 1;
  }
  else
  {
    LOBYTE(v15) = 0;
  }
  v14 = sub_10007D70((int)v17, a2, v15);
  sub_10008620(v17);
  return v14;
}
