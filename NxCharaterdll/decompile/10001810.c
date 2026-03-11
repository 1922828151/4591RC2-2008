/*
 * func-name: sub_10001810
 * func-address: 0x10001810
 * callers: 0x10009500
 * callees: 0x10009620, 0x10009ed0, 0x10009f93, 0x1000a490
 */

int __fastcall sub_10001810(int a1, int a2, float *a3, int a4)
{
  _DWORD *v5; // ebp
  double v6; // st7
  double v7; // st7
  float v8; // eax
  float v9; // eax
  float v10; // ecx
  float v11; // ebx
  float v12; // eax
  float v13; // edx
  double v14; // st7
  int v15; // ecx
  float v17; // [esp+14h] [ebp-184h]
  float v18; // [esp+18h] [ebp-180h]
  float v19; // [esp+1Ch] [ebp-17Ch]
  float v20[26]; // [esp+20h] [ebp-178h] BYREF
  _DWORD v21[15]; // [esp+88h] [ebp-110h] BYREF
  __int16 v22; // [esp+C4h] [ebp-D4h]
  __int16 v23; // [esp+C6h] [ebp-D2h]
  int v24; // [esp+C8h] [ebp-D0h]
  float v25; // [esp+CCh] [ebp-CCh]
  float v26; // [esp+D0h] [ebp-C8h]
  float v27; // [esp+D4h] [ebp-C4h]
  int v28; // [esp+D8h] [ebp-C0h]
  int v29; // [esp+DCh] [ebp-BCh]
  int v30; // [esp+E0h] [ebp-B8h]
  int v31; // [esp+E4h] [ebp-B4h]
  int v32; // [esp+E8h] [ebp-B0h]
  int v33; // [esp+ECh] [ebp-ACh]
  int v34; // [esp+F0h] [ebp-A8h]
  float v35; // [esp+F4h] [ebp-A4h]
  float v36; // [esp+F8h] [ebp-A0h]
  float v37; // [esp+FCh] [ebp-9Ch]
  float v38[35]; // [esp+100h] [ebp-98h] BYREF
  int v39; // [esp+194h] [ebp-4h]

  LODWORD(v38[34]) = a1;
  *(_DWORD *)a1 = &NxBoxController::`vftable';
  v5 = (_DWORD *)(a1 + 8);
  v39 = 0;
  sub_10009620(a3, a4);
  *(_DWORD *)a1 = &BoxController::`vftable';
  *v5 = &BoxController::`vftable';
  *(_DWORD *)(a1 + 16) = 0;
  *(float *)(a1 + 376) = a3[18];
  LODWORD(v38[30]) = 4;
  v6 = a3[19];
  LODWORD(v38[27]) = 2432;
  *(float *)(a1 + 380) = v6;
  v21[1] = 2;
  v7 = a3[20];
  v21[0] = &NxBoxShapeDesc::`vftable';
  *(float *)(a1 + 384) = v7;
  v38[0] = 1.0;
  v38[1] = 0.0;
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
  *(float *)&v21[11] = 0.0;
  v21[14] = 1179656;
  v22 = 0;
  v27 = -1.0;
  v23 = 0;
  v26 = -1.0;
  v24 = 0;
  v29 = 0;
  v25 = 1.0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v18 = *(float *)(a1 + 376) * 0.800000011920929;
  v28 = 1128485971;
  v19 = *(float *)(a1 + 380) * 0.800000011920929;
  v17 = 0.800000011920929 * *(float *)(a1 + 384);
  v35 = v18;
  v36 = v19;
  v37 = v17;
  memset(v20, 0, sizeof(v20));
  v8 = v20[22];
  v20[13] = 0.0;
  v20[12] = 0.0;
  v20[0] = 1.0;
  memset(&v20[14], 0, 14);
  v20[4] = 1.0;
  memset(&v20[18], 0, 12);
  v20[8] = 1.0;
  v20[1] = 0.0;
  v20[2] = 0.0;
  v20[3] = 0.0;
  v20[23] = v20[22];
  v20[5] = 0.0;
  LODWORD(v20[21]) = 1;
  v20[6] = 0.0;
  v20[7] = 0.0;
  v20[11] = 0.0;
  v20[10] = 0.0;
  v20[9] = 0.0;
  LOBYTE(v39) = 3;
  if ( LODWORD(v20[24]) <= LODWORD(v20[22])
    && (!LODWORD(v20[22]) || (unsigned int)((LODWORD(v20[24]) - LODWORD(v20[22])) >> 2) < 2) )
  {
    v9 = COERCE_FLOAT(malloc(8u));
    v10 = v20[23];
    v11 = v9;
    v12 = v20[22];
    v13 = v11;
    if ( LODWORD(v20[22]) != LODWORD(v20[23]) )
    {
      do
      {
        *(_DWORD *)LODWORD(v13) = *(_DWORD *)LODWORD(v12);
        LODWORD(v12) += 4;
        LODWORD(v13) += 4;
      }
      while ( LODWORD(v12) != LODWORD(v10) );
      v10 = v20[23];
      v12 = v20[22];
    }
    if ( v12 != 0.0 )
    {
      free((void *)LODWORD(v12));
      v10 = v20[23];
      v12 = v20[22];
    }
    LODWORD(v8) = LODWORD(v11) + 4 * ((LODWORD(v10) - LODWORD(v12)) >> 2);
    LODWORD(v20[24]) = LODWORD(v11) + 8;
    v20[23] = v8;
    v20[22] = v11;
  }
  *(_DWORD *)LODWORD(v8) = v21;
  v20[13] = 10.0;
  v14 = *(double *)(a1 + 280);
  v15 = *(_DWORD *)(a1 + 360);
  LODWORD(v20[23]) += 4;
  v20[9] = v14;
  v20[10] = *(double *)(a1 + 288);
  LODWORD(v20[12]) = v38;
  v20[11] = *(double *)(a1 + 296);
  *(_DWORD *)(a1 + 272) = (*(int (__thiscall **)(int, float *))(*(_DWORD *)v15 + 28))(v15, v20);
  if ( LODWORD(v20[22]) )
    free((void *)LODWORD(v20[22]));
  return a1;
}
