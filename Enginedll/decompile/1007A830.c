/*
 * func-name: sub_1007A830
 * func-address: 0x1007a830
 * callers: none
 * callees: 0x1004c3d0, 0x10079660, 0x1017a0b0
 */

char __cdecl sub_1007A830(float *a1, int a2, float *a3, float a4, int a5, int a6)
{
  int v6; // edx
  int v7; // ecx
  float v8; // edx
  float v9; // ecx
  float v10; // edx
  float v11; // ecx
  float v12; // edx
  float v13; // ecx
  int v14; // ebp
  double v15; // st7
  int v16; // esi
  int v17; // eax
  float v18; // edx
  float v19; // ecx
  _DWORD *v20; // eax
  double v21; // st7
  float *v22; // ecx
  float v24; // [esp+Ch] [ebp-4Ch]
  float v25; // [esp+Ch] [ebp-4Ch]
  float v26; // [esp+10h] [ebp-48h]
  float v27; // [esp+10h] [ebp-48h]
  float v28; // [esp+14h] [ebp-44h] BYREF
  float v29; // [esp+18h] [ebp-40h]
  float v30; // [esp+1Ch] [ebp-3Ch]
  float v31; // [esp+20h] [ebp-38h]
  _DWORD v32[4]; // [esp+24h] [ebp-34h] BYREF
  float v33; // [esp+34h] [ebp-24h] BYREF
  float v34; // [esp+38h] [ebp-20h]
  float v35; // [esp+3Ch] [ebp-1Ch]
  float v36; // [esp+40h] [ebp-18h] BYREF
  float v37; // [esp+44h] [ebp-14h]
  float v38; // [esp+48h] [ebp-10h]
  int v39; // [esp+54h] [ebp-4h]

  v6 = *(_DWORD *)(a5 + 776);
  v32[1] = *(_DWORD *)(a5 + 772);
  v7 = *(_DWORD *)(a5 + 780);
  v32[2] = v6;
  v8 = *(float *)(a5 + 784);
  v32[3] = v7;
  v9 = *(float *)(a5 + 788);
  v33 = v8;
  v10 = *(float *)(a5 + 792);
  v34 = v9;
  v11 = *(float *)(a5 + 796);
  v35 = v10;
  v12 = *(float *)(a5 + 800);
  v36 = v11;
  v13 = *(float *)(a5 + 804);
  v32[0] = &BBox::`vftable';
  v37 = v12;
  v38 = v13;
  v33 = *(float *)(a5 + 856) + v33;
  v34 = *(float *)(a5 + 860) + v34;
  v35 = *(float *)(a5 + 864) + v35;
  v36 = *(float *)(a5 + 856) + v36;
  v37 = *(float *)(a5 + 860) + v12;
  v38 = *(float *)(a5 + 864) + v13;
  v14 = sub_10079660((int)&v33, (int)&v36, a1, (int)a3, (float *)&a5, &v28);
  if ( v14 == -1 || (v15 = *(float *)&a5, *(float *)&a5 <= 0.0) || a4 <= v15 )
  {
    v39 = -1;
    sub_1017A0B0(v32);
    return 0;
  }
  else
  {
    v16 = a6;
    *(_DWORD *)(a6 + 72) = 0;
    v24 = *a3 * v15;
    v26 = a3[1] * v15;
    v28 = v15 * a3[2];
    v25 = *a1 + v24;
    v27 = a1[1] + v26;
    v28 = a1[2] + v28;
    v29 = v25;
    v30 = v27;
    v31 = v28;
    v17 = sub_1004C3D0((_DWORD *)(v16 + 32), 0);
    v18 = v30;
    *(float *)v17 = v29;
    v19 = v31;
    *(float *)(v17 + 4) = v18;
    *(float *)(v17 + 8) = v19;
    v20 = (_DWORD *)sub_1004C3D0((_DWORD *)(v16 + 16), 0);
    v21 = *(float *)&a5;
    v22 = &flt_10283280[3 * v14];
    *v20 = *(_DWORD *)v22;
    v20[1] = *((_DWORD *)v22 + 1);
    v20[2] = *((_DWORD *)v22 + 2);
    *(double *)(v16 + 8) = v21;
    v39 = -1;
    sub_1017A0B0(v32);
    return 1;
  }
}
