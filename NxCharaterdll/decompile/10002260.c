/*
 * func-name: sub_10002260
 * func-address: 0x10002260
 * callers: 0x10009500
 * callees: 0x10009620, 0x10009ed0, 0x10009f93, 0x1000a490, 0x1000a550, 0x1000a680
 */

int __fastcall sub_10002260(int a1, int a2, int a3, int a4)
{
  _DWORD *v5; // ebx
  double v6; // st7
  float v7; // eax
  float v8; // eax
  float v9; // ecx
  float v10; // ebx
  float v11; // eax
  float v12; // edx
  double v13; // st7
  bool v14; // zf
  float v16; // [esp+14h] [ebp-180h]
  float v17; // [esp+14h] [ebp-180h]
  float v18; // [esp+14h] [ebp-180h]
  float v19[26]; // [esp+18h] [ebp-17Ch] BYREF
  float v20; // [esp+80h] [ebp-114h]
  _DWORD v21[15]; // [esp+84h] [ebp-110h] BYREF
  __int16 v22; // [esp+C0h] [ebp-D4h]
  __int16 v23; // [esp+C2h] [ebp-D2h]
  int v24; // [esp+C4h] [ebp-D0h]
  float v25; // [esp+C8h] [ebp-CCh]
  float v26; // [esp+CCh] [ebp-C8h]
  float v27; // [esp+D0h] [ebp-C4h]
  int v28; // [esp+D4h] [ebp-C0h]
  int v29; // [esp+D8h] [ebp-BCh]
  int v30; // [esp+DCh] [ebp-B8h]
  int v31; // [esp+E0h] [ebp-B4h]
  int v32; // [esp+E4h] [ebp-B0h]
  int v33; // [esp+E8h] [ebp-ACh]
  int v34; // [esp+ECh] [ebp-A8h]
  float v35; // [esp+F0h] [ebp-A4h]
  float v36; // [esp+F4h] [ebp-A0h]
  int v37; // [esp+F8h] [ebp-9Ch]
  float v38[35]; // [esp+FCh] [ebp-98h] BYREF
  int v39; // [esp+190h] [ebp-4h]

  LODWORD(v38[34]) = a1;
  *(_DWORD *)a1 = &NxCapsuleController::`vftable';
  v5 = (_DWORD *)(a1 + 8);
  v39 = 0;
  sub_10009620(a3, a4);
  *v5 = &CapsuleController::`vftable';
  *(_DWORD *)a1 = &CapsuleController::`vftable';
  *(_DWORD *)(a1 + 16) = 1;
  *(float *)(a1 + 376) = *(float *)(a3 + 72);
  v6 = *(float *)(a3 + 76);
  LODWORD(v38[30]) = 4;
  *(float *)(a1 + 380) = v6;
  *(_DWORD *)(a1 + 384) = *(_DWORD *)(a3 + 80);
  v38[0] = 1.0;
  LODWORD(v38[27]) = 2432;
  v21[1] = 3;
  v38[1] = 0.0;
  v21[0] = &NxCapsuleShapeDesc::`vftable';
  v38[2] = 0.0;
  v38[3] = 0.0;
  v38[5] = 0.0;
  v38[6] = 0.0;
  v38[7] = 0.0;
  v38[11] = 0.0;
  v38[10] = 0.0;
  v38[9] = 0.0;
  v38[14] = 0.0;
  v38[13] = 0.0;
  v38[12] = 0.0;
  v38[18] = 0.0;
  v38[17] = 0.0;
  v38[16] = 0.0;
  v38[21] = 0.0;
  v38[20] = 0.0;
  v38[19] = 0.0;
  v38[4] = 1.0;
  v38[8] = 1.0;
  v38[22] = 0.39999998;
  v38[15] = 0.0;
  v38[23] = 0.0;
  v38[24] = 0.050000001;
  v38[25] = -1.0;
  v38[28] = -1.0;
  v38[29] = -1.0;
  v38[26] = 0.0;
  v38[31] = -1.0;
  v38[32] = 0.0;
  v38[33] = 3.4028235e38;
  *(float *)&v21[2] = 1.0;
  *(float *)&v21[6] = 1.0;
  *(float *)&v21[10] = 1.0;
  *(float *)&v21[3] = 0.0;
  *(float *)&v21[4] = 0.0;
  *(float *)&v21[5] = 0.0;
  *(float *)&v21[7] = 0.0;
  *(float *)&v21[8] = 0.0;
  *(float *)&v21[9] = 0.0;
  *(float *)&v21[13] = 0.0;
  *(float *)&v21[12] = 0.0;
  v21[14] = 1179656;
  *(float *)&v21[11] = 0.0;
  v22 = 0;
  v23 = 0;
  v27 = -1.0;
  v24 = 0;
  v26 = -1.0;
  v29 = 0;
  v30 = 0;
  v25 = 1.0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v37 = 0;
  v35 = *(float *)(a1 + 376) * 0.800000011920929;
  v28 = 1128485971;
  v36 = 0.800000011920929 * *(float *)(a1 + 380);
  memset(v19, 0, sizeof(v19));
  v7 = v19[22];
  v19[13] = 0.0;
  v19[12] = 0.0;
  v19[0] = 1.0;
  memset(&v19[14], 0, 14);
  v19[4] = 1.0;
  memset(&v19[18], 0, 12);
  v19[8] = 1.0;
  v19[1] = 0.0;
  v19[2] = 0.0;
  v19[3] = 0.0;
  v19[23] = v19[22];
  v19[5] = 0.0;
  LODWORD(v19[21]) = 1;
  v19[6] = 0.0;
  v19[7] = 0.0;
  v19[11] = 0.0;
  v19[10] = 0.0;
  v19[9] = 0.0;
  LOBYTE(v39) = 3;
  if ( LODWORD(v19[24]) <= LODWORD(v19[22])
    && (!LODWORD(v19[22]) || (unsigned int)((LODWORD(v19[24]) - LODWORD(v19[22])) >> 2) < 2) )
  {
    v8 = COERCE_FLOAT(malloc(8u));
    v9 = v19[23];
    v10 = v8;
    v11 = v19[22];
    v12 = v10;
    v16 = v19[23];
    if ( LODWORD(v19[22]) != LODWORD(v19[23]) )
    {
      do
      {
        *(_DWORD *)LODWORD(v12) = *(_DWORD *)LODWORD(v11);
        LODWORD(v11) += 4;
        LODWORD(v12) += 4;
      }
      while ( LODWORD(v11) != LODWORD(v16) );
      v9 = v19[23];
    }
    if ( LODWORD(v19[22]) )
    {
      free((void *)LODWORD(v19[22]));
      v9 = v19[23];
    }
    LODWORD(v7) = LODWORD(v10) + 4 * ((LODWORD(v9) - LODWORD(v19[22])) >> 2);
    LODWORD(v19[24]) = LODWORD(v10) + 8;
    v19[23] = v7;
    v19[22] = v10;
  }
  *(_DWORD *)LODWORD(v7) = v21;
  v19[13] = 10.0;
  v13 = *(double *)(a1 + 280);
  LODWORD(v19[23]) += 4;
  v14 = *(_DWORD *)(a3 + 40) == 2;
  v19[9] = v13;
  v19[10] = *(double *)(a1 + 288);
  LODWORD(v19[12]) = v38;
  v19[11] = *(double *)(a1 + 296);
  if ( v14 )
  {
    v17 = cos(1.570796370506287);
    v20 = v17;
    v18 = sin(1.570796370506287);
    v19[0] = 1.0;
    v19[1] = 0.0;
    v19[2] = 0.0;
    v19[3] = 0.0;
    v19[6] = 0.0;
    v19[8] = v20;
    v19[4] = v20;
    v19[5] = -v18;
    v19[7] = v18;
  }
  *(_DWORD *)(a1 + 272) = (*(int (__thiscall **)(_DWORD, float *))(**(_DWORD **)(a1 + 360) + 28))(
                            *(_DWORD *)(a1 + 360),
                            v19);
  if ( LODWORD(v19[22]) )
    free((void *)LODWORD(v19[22]));
  return a1;
}
