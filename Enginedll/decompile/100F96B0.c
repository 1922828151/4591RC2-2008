/*
 * func-name: sub_100F96B0
 * func-address: 0x100f96b0
 * callers: 0x100fa890
 * callees: 0x100f90d0
 */

bool __thiscall sub_100F96B0(_DWORD *this, int *a1, int *a2, int a3)
{
  int v5; // eax
  unsigned int v6; // edi
  int v7; // eax
  int v8; // ecx
  float v9; // edx
  unsigned int v10; // edi
  int v11; // ecx
  float v12; // edx
  float v13; // ecx
  int v14; // eax
  int v15; // edx
  unsigned int v16; // edi
  float *v17; // ecx
  float v18; // edx
  float v19; // ecx
  int v20; // eax
  int v21; // edx
  unsigned int v22; // edi
  float *v23; // ecx
  float v24; // edx
  float v25; // ecx
  int v26; // eax
  int v27; // edx
  unsigned int v28; // edi
  float *v29; // ecx
  float v30; // edx
  float v31; // ecx
  int v32; // eax
  int v33; // edx
  unsigned int v34; // edi
  float *v35; // ecx
  float v36; // edx
  float v37; // ecx
  int v38; // eax
  float v39; // ecx
  int v40; // eax
  float v41; // edx
  float v42; // eax
  float v43[3]; // [esp+4h] [ebp-48h] BYREF
  float v44[3]; // [esp+10h] [ebp-3Ch] BYREF
  float v45[3]; // [esp+1Ch] [ebp-30h] BYREF
  float v46[3]; // [esp+28h] [ebp-24h] BYREF
  float v47[3]; // [esp+34h] [ebp-18h] BYREF
  float v48[3]; // [esp+40h] [ebp-Ch] BYREF

  if ( this[4] == 1 )
    return sub_100F9310(a1, a2, a3);
  v5 = *(_DWORD *)(a3 + 4);
  v6 = *a1;
  if ( !v5 || v6 >= (*(_DWORD *)(a3 + 8) - v5) / 56 )
    invalid_parameter_noinfo();
  v7 = *(_DWORD *)(a3 + 4);
  v8 = 7 * v6;
  v9 = *(float *)(v7 + 56 * v6);
  v10 = a1[1];
  v11 = v7 + 8 * v8;
  v46[0] = v9;
  v12 = *(float *)(v11 + 4);
  v13 = *(float *)(v11 + 8);
  v46[1] = v12;
  v46[2] = v13;
  if ( !v7 || v10 >= (*(_DWORD *)(a3 + 8) - v7) / 56 )
    invalid_parameter_noinfo();
  v14 = *(_DWORD *)(a3 + 4);
  v15 = 7 * v10;
  v16 = a1[2];
  v17 = (float *)(v14 + 8 * v15);
  v47[0] = *v17;
  v18 = v17[1];
  v19 = v17[2];
  v47[1] = v18;
  v47[2] = v19;
  if ( !v14 || v16 >= (*(_DWORD *)(a3 + 8) - v14) / 56 )
    invalid_parameter_noinfo();
  v20 = *(_DWORD *)(a3 + 4);
  v21 = 7 * v16;
  v22 = *a2;
  v23 = (float *)(v20 + 8 * v21);
  v48[0] = *v23;
  v24 = v23[1];
  v25 = v23[2];
  v48[1] = v24;
  v48[2] = v25;
  if ( !v20 || v22 >= (*(_DWORD *)(a3 + 8) - v20) / 56 )
    invalid_parameter_noinfo();
  v26 = *(_DWORD *)(a3 + 4);
  v27 = 7 * v22;
  v28 = a2[1];
  v29 = (float *)(v26 + 8 * v27);
  v45[0] = *v29;
  v30 = v29[1];
  v31 = v29[2];
  v45[1] = v30;
  v45[2] = v31;
  if ( !v26 || v28 >= (*(_DWORD *)(a3 + 8) - v26) / 56 )
    invalid_parameter_noinfo();
  v32 = *(_DWORD *)(a3 + 4);
  v33 = 7 * v28;
  v34 = a2[2];
  v35 = (float *)(v32 + 8 * v33);
  v44[0] = *v35;
  v36 = v35[1];
  v37 = v35[2];
  v44[1] = v36;
  v44[2] = v37;
  if ( !v32 || v34 >= (*(_DWORD *)(a3 + 8) - v32) / 56 )
    invalid_parameter_noinfo();
  v38 = *(_DWORD *)(a3 + 4);
  v39 = *(float *)(v38 + 56 * v34);
  v40 = v38 + 56 * v34;
  v41 = *(float *)(v40 + 4);
  v42 = *(float *)(v40 + 8);
  v43[0] = v39;
  v43[1] = v41;
  v43[2] = v42;
  return sub_100F90D0(v47, v46, v45, v44, v43)
      || sub_100F90D0(v46, v48, v45, v44, v43)
      || sub_100F90D0(v48, v47, v45, v44, v43);
}
