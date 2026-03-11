/*
 * func-name: sub_10078E80
 * func-address: 0x10078e80
 * callers: none
 * callees: none
 */

int __cdecl sub_10078E80(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6, float *a7, float *a8)
{
  double v8; // st6
  double v9; // st7
  double v10; // st5
  double v11; // st3
  double v12; // st6
  double v13; // st4
  double v14; // st7
  float *v15; // edx
  double v16; // st4
  double v17; // st7
  double v18; // st5
  float *v19; // ecx
  double v20; // st3
  double v21; // st6
  bool v22; // c0
  bool v23; // c3
  double v24; // st7
  int result; // eax
  double v26; // st4
  double v27; // st7
  bool v28; // c0
  float v29; // [esp+0h] [ebp-30h]
  float v30; // [esp+4h] [ebp-2Ch]
  float v31; // [esp+8h] [ebp-28h]
  float v32; // [esp+Ch] [ebp-24h]
  float v33; // [esp+Ch] [ebp-24h]
  float v34; // [esp+10h] [ebp-20h]
  float v35; // [esp+10h] [ebp-20h]
  float v36; // [esp+14h] [ebp-1Ch]
  float v37; // [esp+14h] [ebp-1Ch]
  float v38; // [esp+18h] [ebp-18h]
  float v39; // [esp+1Ch] [ebp-14h]
  float v40; // [esp+20h] [ebp-10h]
  float v41; // [esp+24h] [ebp-Ch]
  float v42; // [esp+28h] [ebp-8h]
  float v43; // [esp+2Ch] [ebp-4h]
  float v44; // [esp+3Ch] [ebp+Ch]
  float v45; // [esp+40h] [ebp+10h]
  float v46; // [esp+40h] [ebp+10h]
  float v47; // [esp+40h] [ebp+10h]
  float v48; // [esp+40h] [ebp+10h]
  float v49; // [esp+40h] [ebp+10h]

  v32 = *a4 - *a3;
  v34 = a4[1] - a3[1];
  v36 = a4[2] - a3[2];
  v38 = *a5 - *a3;
  v39 = a5[1] - a3[1];
  v40 = a5[2] - a3[2];
  v29 = a2[1] * v40 - a2[2] * v39;
  v30 = a2[2] * v38 - v40 * *a2;
  v31 = v39 * *a2 - v38 * a2[1];
  v8 = v34;
  v9 = v32;
  v45 = v31 * v36 + v29 * v32 + v30 * v34;
  v41 = *a1 - *a3;
  v42 = a1[1] - a3[1];
  v43 = a1[2] - a3[2];
  v44 = 1.0 / v45;
  v33 = v42 * v36 - v43 * v34;
  v10 = v41;
  v35 = v43 * v9 - v36 * v41;
  v11 = v8 * v41;
  v12 = v43;
  v13 = v11 - v9 * v42;
  v14 = v42;
  v37 = v13;
  if ( v45 <= 0.000001 )
  {
    if ( v45 < -0.000001 )
    {
      v15 = a7;
      v26 = v14 * v30;
      v27 = v45;
      v48 = v12 * v31 + v10 * v29 + v26;
      *a7 = v48;
      if ( v48 <= 0.0 && v48 >= v27 )
      {
        v18 = v35;
        v19 = a8;
        v49 = a2[2] * v37 + a2[1] * v35 + *a2 * v33;
        *a8 = v49;
        if ( v49 <= 0.0 )
        {
          v21 = v37;
          v28 = v49 + *a7 < v27;
          v24 = v33;
          if ( v28 )
            return 0;
LABEL_13:
          *a6 = (v24 * v38 + v18 * v39 + v21 * v40) * v44;
          result = 1;
          *v15 = *v15 * v44;
          *v19 = v44 * *v19;
          return result;
        }
        return 0;
      }
    }
  }
  else
  {
    v15 = a7;
    v16 = v14 * v30;
    v17 = v45;
    v46 = v12 * v31 + v10 * v29 + v16;
    *a7 = v46;
    if ( v46 >= 0.0 && v46 <= v17 )
    {
      v18 = v35;
      v19 = a8;
      v47 = a2[2] * v37 + a2[1] * v35 + *a2 * v33;
      *a8 = v47;
      if ( v47 >= 0.0 )
      {
        v20 = v47 + *a7;
        v21 = v37;
        v22 = v20 < v17;
        v23 = v20 == v17;
        v24 = v33;
        if ( !v22 && !v23 )
          return 0;
        goto LABEL_13;
      }
      return 0;
    }
  }
  return 0;
}
