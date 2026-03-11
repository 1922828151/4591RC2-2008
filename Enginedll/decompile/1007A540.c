/*
 * func-name: sub_1007A540
 * func-address: 0x1007a540
 * callers: none
 * callees: 0x1004c240, 0x1004c3d0, 0x10079660, 0x1017a0b0, 0x101a2516
 */

char __cdecl sub_1007A540(float a1, float a2, float a3, int a4)
{
  float v4; // eax
  float *v5; // esi
  int v6; // edx
  int v7; // ecx
  float v8; // edx
  float v9; // ecx
  float v10; // edx
  float v11; // ecx
  float v12; // edx
  float v13; // ecx
  int v14; // ebx
  double v15; // st7
  double v16; // st6
  int v17; // edi
  int v18; // eax
  float v19; // edx
  float v20; // ecx
  _DWORD *v21; // eax
  double v22; // st7
  float *v23; // ecx
  float v25; // [esp+8h] [ebp-5Ch]
  float v26; // [esp+14h] [ebp-50h]
  float v27; // [esp+14h] [ebp-50h]
  float v28; // [esp+14h] [ebp-50h]
  float v29; // [esp+14h] [ebp-50h]
  float v30; // [esp+18h] [ebp-4Ch] BYREF
  float v31; // [esp+1Ch] [ebp-48h]
  float v32; // [esp+20h] [ebp-44h]
  float v33; // [esp+24h] [ebp-40h]
  float v34; // [esp+28h] [ebp-3Ch]
  float v35; // [esp+2Ch] [ebp-38h]
  _DWORD v36[4]; // [esp+30h] [ebp-34h] BYREF
  float v37; // [esp+40h] [ebp-24h] BYREF
  float v38; // [esp+44h] [ebp-20h]
  float v39; // [esp+48h] [ebp-1Ch]
  float v40; // [esp+4Ch] [ebp-18h] BYREF
  float v41; // [esp+50h] [ebp-14h]
  float v42; // [esp+54h] [ebp-10h]
  int v43; // [esp+60h] [ebp-4h]

  v4 = a2;
  v5 = (float *)LODWORD(a1);
  a2 = *(float *)LODWORD(a2) - *(float *)LODWORD(a1);
  a1 = *(float *)(LODWORD(v4) + 4) - *(float *)(LODWORD(a1) + 4);
  v25 = *(float *)(LODWORD(v4) + 8) - v5[2];
  v26 = a2 * a2 + a1 * a1 + v25 * v25;
  v27 = sqrt(v26);
  v33 = a2;
  v30 = a2;
  v34 = a1;
  v31 = a1;
  v35 = v25;
  v32 = v25;
  sub_1004C240(&v30);
  v6 = *(_DWORD *)(LODWORD(a3) + 776);
  v36[1] = *(_DWORD *)(LODWORD(a3) + 772);
  v7 = *(_DWORD *)(LODWORD(a3) + 780);
  v36[2] = v6;
  v8 = *(float *)(LODWORD(a3) + 784);
  v36[3] = v7;
  v9 = *(float *)(LODWORD(a3) + 788);
  v37 = v8;
  v10 = *(float *)(LODWORD(a3) + 792);
  v38 = v9;
  v11 = *(float *)(LODWORD(a3) + 796);
  v39 = v10;
  v12 = *(float *)(LODWORD(a3) + 800);
  v40 = v11;
  v13 = *(float *)(LODWORD(a3) + 804);
  v36[0] = &BBox::`vftable';
  v41 = v12;
  v42 = v13;
  v37 = *(float *)(LODWORD(a3) + 856) + v37;
  v38 = *(float *)(LODWORD(a3) + 860) + v38;
  v39 = *(float *)(LODWORD(a3) + 864) + v39;
  v40 = *(float *)(LODWORD(a3) + 856) + v40;
  v41 = *(float *)(LODWORD(a3) + 860) + v12;
  v42 = *(float *)(LODWORD(a3) + 864) + v13;
  v14 = sub_10079660((int)&v37, (int)&v40, v5, (int)&v30, &a2, &a1);
  if ( v14 == -1 || (v15 = a2, a2 <= 0.0) || v27 <= v15 )
  {
    v43 = -1;
    sub_1017A0B0(v36);
    return 0;
  }
  else
  {
    v16 = v30 * v15;
    v17 = a4;
    *(_DWORD *)(a4 + 72) = 0;
    a1 = v16;
    a3 = v31 * v15;
    v28 = v15 * v32;
    a1 = *v5 + a1;
    a3 = a3 + v5[1];
    v29 = v5[2] + v28;
    v33 = a1;
    v34 = a3;
    v35 = v29;
    v18 = sub_1004C3D0((_DWORD *)(v17 + 32), 0);
    v19 = v34;
    *(float *)v18 = v33;
    v20 = v35;
    *(float *)(v18 + 4) = v19;
    *(float *)(v18 + 8) = v20;
    v21 = (_DWORD *)sub_1004C3D0((_DWORD *)(v17 + 16), 0);
    v22 = a2;
    v23 = &flt_10283280[3 * v14];
    *v21 = *(_DWORD *)v23;
    v21[1] = *((_DWORD *)v23 + 1);
    v21[2] = *((_DWORD *)v23 + 2);
    *(double *)(v17 + 8) = v22;
    v43 = -1;
    sub_1017A0B0(v36);
    return 1;
  }
}
