/*
 * func-name: sub_10005D90
 * func-address: 0x10005d90
 * callers: 0x100064a0
 * callees: 0x10005170, 0x10005510, 0x1000a770
 */

void __thiscall sub_10005D90(
        int this,
        int a2,
        int a3,
        float *a4,
        int a5,
        unsigned int a6,
        int a7,
        int a8,
        unsigned int a9,
        int a10,
        int a11,
        int a12,
        float a13,
        int *a14,
        int a15,
        char a16)
{
  double v17; // st7
  int v18; // ecx
  int v19; // eax
  double v20; // st7
  double v21; // st6
  double v22; // st5
  double v23; // st7
  double v24; // rt1
  double v25; // st5
  double v26; // st6
  double v27; // rt2
  double v28; // st6
  double v29; // st7
  bool v30; // zf
  double v31; // st7
  double v32; // st7
  int v33; // ecx
  double v34; // st6
  double v35; // st6
  double v36; // st6
  double v37; // st5
  int v38; // eax
  int v39; // [esp+4h] [ebp-A8h]
  int v40; // [esp+2Ch] [ebp-80h] BYREF
  float v41; // [esp+30h] [ebp-7Ch]
  int v42[2]; // [esp+34h] [ebp-78h]
  double v43; // [esp+3Ch] [ebp-70h]
  double v44; // [esp+44h] [ebp-68h]
  int v45; // [esp+4Ch] [ebp-60h] BYREF
  float v46; // [esp+50h] [ebp-5Ch]
  float v47; // [esp+54h] [ebp-58h]
  int v48; // [esp+58h] [ebp-54h] BYREF
  float v49; // [esp+5Ch] [ebp-50h]
  float v50; // [esp+60h] [ebp-4Ch]
  int v51; // [esp+64h] [ebp-48h] BYREF
  float v52; // [esp+68h] [ebp-44h]
  float v53; // [esp+6Ch] [ebp-40h]
  int v54; // [esp+70h] [ebp-3Ch] BYREF
  float v55; // [esp+74h] [ebp-38h]
  float v56; // [esp+78h] [ebp-34h]
  double v57[6]; // [esp+7Ch] [ebp-30h] BYREF

  v17 = *(float *)(this + 196);
  v18 = *(_DWORD *)(this + 208);
  v19 = *(_DWORD *)(this + 212);
  v41 = v17;
  *(_BYTE *)(this + 216) = 0;
  v43 = *(double *)&a4[2 * v18 + 2];
  v42[1] = v19;
  v20 = v43 - a4[8];
  v42[0] = 0;
  v44 = v20;
  if ( *(float *)(a5 + 4 * v18) > 0.0 )
    v41 = 0.0;
  *(float *)&v51 = 0.0;
  v52 = 0.0;
  v53 = 0.0;
  *(float *)&v54 = 0.0;
  v55 = 0.0;
  v56 = 0.0;
  if ( *(float *)(a5 + 4 * v18) >= 0.0 )
    *(&v51 + v18) = *(int *)(a5 + 4 * v18);
  else
    *(&v54 + v18) = *(int *)(a5 + 4 * v18);
  v48 = *(int *)a5;
  v49 = *(float *)(a5 + 4);
  v50 = *(float *)(a5 + 8);
  *((float *)&v48 + v18) = 0.0;
  v21 = *(float *)&v48;
  v22 = v50;
  if ( *(float *)&v48 == 0.0 && 0.0 == v49 )
  {
    v23 = v49;
    if ( 0.0 == v22 )
      goto LABEL_12;
  }
  else
  {
    v23 = v49;
  }
  *((float *)&v51 + v18) = *((float *)&v51 + v18) + v41;
LABEL_12:
  v45 = v51;
  if ( *(float *)&v51 >= v21 )
  {
    v26 = v22;
  }
  else
  {
    v24 = v22;
    v25 = v21;
    v26 = v24;
    *(float *)&v45 = v25;
  }
  if ( v52 >= v23 )
    v23 = v52;
  v27 = v26;
  v28 = v23;
  v29 = v27;
  v46 = v28;
  if ( v53 >= v27 )
    v29 = v53;
  v47 = v29;
  if ( *(float *)&v54 > (double)*(float *)&v45 )
    v45 = v54;
  if ( v55 > (double)v46 )
    v46 = v55;
  if ( v56 > (double)v47 )
    v47 = v56;
  (*(void (__thiscall **)(float *, int, double *, float *, int *))(*(_DWORD *)a4 + 4))(a4, this, v57, a4 + 2, &v45);
  sub_10005170((double *)this, a2, (int)a4, a6, a7, a8, a9, a10, a11, a12, v57, a15);
  v30 = *(_BYTE *)(this + 217) == 0;
  *(_DWORD *)(this + 120) = 0;
  v40 = 0;
  *(_BYTE *)(this + 220) = 0;
  if ( v30 )
  {
    if ( sub_10005510(
           this,
           a2,
           a3,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           (double *)a4,
           (float *)&v51,
           v42[1],
           &v40,
           a12,
           a13,
           a15,
           0) )
    {
      if ( v40 )
      {
        v31 = *(double *)&a4[2 * *(_DWORD *)(this + 208) + 2];
        v42[0] = 2;
        v32 = v31 - v43;
        if ( v41 > v32 )
          v41 = v32;
      }
    }
  }
  v39 = v42[1];
  *(_DWORD *)(this + 120) = 1;
  *(_BYTE *)(this + 220) = 1;
  v40 = 0;
  if ( sub_10005510(this, a2, a3, a6, a7, a8, a9, a10, a11, (double *)a4, (float *)&v48, v39, &v40, a12, a13, a15, 0)
    && v40 )
  {
    v42[0] |= 1u;
  }
  *(_DWORD *)(this + 120) = 2;
  v40 = 0;
  if ( 0.0 != *(float *)&v48 || 0.0 != v49 || 0.0 != v50 )
    *((float *)&v54 + *(_DWORD *)(this + 208)) = *((float *)&v54 + *(_DWORD *)(this + 208)) - v41;
  *(_BYTE *)(this + 219) = 0;
  if ( sub_10005510(this, a2, a3, a6, a7, a8, a9, a10, a11, (double *)a4, (float *)&v54, 1, &v40, a12, a13, a15, 1)
    && v40 )
  {
    v42[0] |= 4u;
    if ( !*(_BYTE *)(this + 218) )
    {
LABEL_57:
      *a14 = v42[0];
      return;
    }
    if ( a16 )
    {
      if ( v41 + v44 < *(float *)(this + 204) )
      {
        v30 = *(_BYTE *)(this + 217) == 0;
        *(_BYTE *)(this + 216) = 1;
        if ( v30 )
          return;
      }
    }
  }
  if ( !*(_BYTE *)(this + 218) || !*(_BYTE *)(this + 219) || *(float *)(a5 + 4 * *(_DWORD *)(this + 208)) >= 0.0 )
    goto LABEL_57;
  *(float *)&v51 = *(float *)(this + 176) - *(float *)(this + 152);
  v52 = *(float *)(this + 180) - *(float *)(this + 156);
  v53 = *(float *)(this + 184) - *(float *)(this + 160);
  *(float *)&v48 = *(float *)(this + 164) - *(float *)(this + 152);
  v49 = *(float *)(this + 168) - *(float *)(this + 156);
  v50 = *(float *)(this + 172) - *(float *)(this + 160);
  *(float *)&v54 = v49 * v53 - v50 * v52;
  v55 = v50 * *(float *)&v51 - v53 * *(float *)&v48;
  v56 = v52 * *(float *)&v48 - v49 * *(float *)&v51;
  v51 = v54;
  v52 = v55;
  v53 = v56;
  v41 = v56 * v56 + v55 * v55 + *(float *)&v54 * *(float *)&v54;
  v41 = sqrt(v41);
  if ( v41 != 0.0 )
  {
    v41 = 1.0 / v41;
    *(float *)&v51 = *(float *)&v54 * v41;
    v52 = v55 * v41;
    v53 = v41 * v56;
  }
  v33 = *(_DWORD *)(this + 208);
  if ( *((float *)&v51 + v33) < 0.0 || *(float *)(this + 188) <= (double)*((float *)&v51 + v33) )
    goto LABEL_57;
  v30 = *(_BYTE *)(this + 217) == 0;
  *(_BYTE *)(this + 216) = 1;
  if ( !v30 )
  {
    v34 = v43;
    *(_BYTE *)(this + 221) = 1;
    if ( v34 >= *(double *)&a4[2 * v33 + 2] )
      v35 = 0.0;
    else
      v35 = *(double *)&a4[2 * v33 + 2] - v34;
    v41 = fabs(*(float *)(a5 + 4 * v33));
    v36 = v35 + v41;
    v37 = a13;
    if ( a13 > v36 )
      v37 = v36 / (double)(unsigned int)v42[1];
    *(float *)&v54 = 0.0;
    v55 = 0.0;
    v56 = 0.0;
    v41 = v36;
    *((float *)&v54 + v33) = -v41;
    v41 = v37;
    sub_10005510(this, a2, a3, a6, a7, a8, a9, a10, a11, (double *)a4, (float *)&v54, v42[1], &v40, a12, v41, a15, 0);
    v38 = v42[0];
    *(_BYTE *)(this + 221) = 0;
    *a14 = v38;
  }
}
