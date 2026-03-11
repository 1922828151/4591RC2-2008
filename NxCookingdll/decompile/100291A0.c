/*
 * func-name: sub_100291A0
 * func-address: 0x100291a0
 * callers: 0x100295d0
 * callees: 0x10025b50, 0x10025b80, 0x10025ba0, 0x10025be0, 0x10026070, 0x100278e0
 */

int *__cdecl sub_100291A0(int *a1, int a2, int a3, _DWORD *a4)
{
  int v5; // edi
  int v6; // eax
  float *v7; // ecx
  float *v8; // ebp
  double v9; // st7
  double v10; // st6
  double v11; // st5
  double v12; // st5
  double v13; // st2
  double v14; // st1
  double v15; // rt0
  double v16; // st1
  double v17; // rt2
  double v18; // st1
  double v19; // st3
  float *v20; // eax
  float *v21; // eax
  float v22; // ecx
  float v23; // edx
  float v24; // eax
  int v25; // eax
  int v26; // ebx
  double v27; // st7
  double v28; // st7
  float *v29; // eax
  float *v30; // eax
  float v31; // ecx
  float v32; // edx
  int v33; // edi
  float *v34; // eax
  float *v35; // eax
  int v36; // eax
  int *result; // eax
  float *v38; // [esp-10h] [ebp-74h]
  float *v39; // [esp-10h] [ebp-74h]
  int v40; // [esp+4h] [ebp-60h]
  float v41; // [esp+8h] [ebp-5Ch]
  float *v42; // [esp+8h] [ebp-5Ch]
  float *v43; // [esp+Ch] [ebp-58h]
  float v44; // [esp+10h] [ebp-54h] BYREF
  float v45; // [esp+14h] [ebp-50h]
  float v46; // [esp+18h] [ebp-4Ch]
  float v47; // [esp+1Ch] [ebp-48h] BYREF
  float v48; // [esp+20h] [ebp-44h]
  float v49; // [esp+24h] [ebp-40h]
  float v50[3]; // [esp+28h] [ebp-3Ch] BYREF
  float v51[3]; // [esp+34h] [ebp-30h] BYREF
  float v52; // [esp+40h] [ebp-24h] BYREF
  float v53; // [esp+44h] [ebp-20h]
  float v54; // [esp+48h] [ebp-1Ch]
  float v55; // [esp+4Ch] [ebp-18h] BYREF
  float v56; // [esp+50h] [ebp-14h]
  float v57; // [esp+54h] [ebp-10h]
  float v58; // [esp+58h] [ebp-Ch] BYREF
  float v59; // [esp+5Ch] [ebp-8h]
  float v60; // [esp+60h] [ebp-4h]
  int v61; // [esp+6Ch] [ebp+8h]

  v55 = 0.0;
  v56 = 0.0;
  v57 = 0.0;
  v58 = 0.0;
  v59 = 0.0;
  v60 = 0.0;
  v44 = 0.0099999998;
  v45 = 0.02;
  v52 = 0.0099999998;
  v46 = 1.0;
  v53 = 0.02;
  v54 = 1.0;
  v47 = -0.0099999998;
  v48 = -0.02;
  v5 = sub_100278E0(a2, a3, &v52, a4);
  v49 = -1.0;
  v40 = v5;
  v6 = sub_100278E0(a2, a3, &v47, a4);
  v7 = (float *)(a2 + 12 * v6);
  v8 = (float *)(a2 + 12 * v5);
  v9 = *v8 - *v7;
  v43 = v7;
  v44 = v9;
  v61 = v6;
  v10 = v8[1] - v7[1];
  v45 = v10;
  v11 = v8[2];
  v53 = v45;
  v12 = v11 - v7[2];
  v52 = v44;
  v46 = v12;
  v54 = v46;
  if ( v5 == v6 || 0.0 == v9 && 0.0 == v10 && 0.0 == v12 )
    goto LABEL_23;
  v13 = v12 * 0.02 - v10 * 0.0;
  v44 = v13;
  v55 = v44;
  v41 = v12;
  v45 = 0.0 * v9 - v12;
  v56 = v45;
  v14 = v10 - v9 * 0.02;
  v46 = v14;
  v57 = v46;
  v15 = v14;
  v16 = v41 - v10 * 0.0;
  v47 = v16;
  v58 = v47;
  v17 = v16;
  v18 = 0.0 * v9 - v12 * -0.02;
  v48 = v18;
  v59 = v48;
  v19 = -0.02 * v10 - v9;
  v49 = v19;
  v60 = v49;
  v20 = &v55;
  if ( sqrt(v18 * v18 + v19 * v19 + v17 * v17) >= sqrt(v13 * v13 + v15 * v15 + v45 * v45) )
    v20 = &v58;
  v21 = sub_10025BE0(&v47, v20);
  v22 = *v21;
  v23 = v21[1];
  v24 = v21[2];
  v55 = v22;
  v56 = v23;
  v57 = v24;
  v25 = sub_100278E0(a2, a3, &v55, a4);
  v26 = v25;
  if ( v25 == v5 || v25 == v61 )
  {
    v47 = -v55;
    v48 = -v56;
    v49 = -v57;
    v26 = sub_100278E0(a2, a3, &v47, a4);
  }
  if ( v26 == v5 || v26 == v61 )
    goto LABEL_23;
  v42 = (float *)(a2 + 12 * v26);
  v47 = *v42 - *v8;
  v27 = v42[1];
  v55 = v47;
  v48 = v27 - v8[1];
  v28 = v42[2];
  v56 = v48;
  v49 = v28 - v8[2];
  v57 = v49;
  v29 = sub_10025BA0(&v47, &v55, &v52);
  v30 = sub_10025BE0(&v44, v29);
  v31 = v30[1];
  v58 = *v30;
  v32 = v30[2];
  v59 = v31;
  v60 = v32;
  v33 = sub_100278E0(a2, a3, &v58, a4);
  if ( v33 == v40 || v33 == v61 || v33 == v26 || !sub_10026070(a2, v40, v61, v26, v33) )
  {
    v47 = -v58;
    v48 = -v59;
    v49 = -v60;
    v33 = sub_100278E0(a2, a3, &v47, a4);
  }
  if ( v33 == v40 || v33 == v61 || v33 == v26 )
  {
LABEL_23:
    result = a1;
    *a1 = -1;
    a1[2] = -1;
    a1[3] = -1;
    a1[1] = -1;
  }
  else
  {
    v38 = sub_10025B50(&v47, v42, v8);
    v34 = sub_10025B50(&v44, v43, v8);
    v39 = sub_10025BA0(v50, v34, v38);
    v35 = sub_10025B50(v51, (float *)(a2 + 12 * v33), v8);
    if ( sub_10025B80(v35, v39) < 0.0 )
    {
      v36 = v26;
      v26 = v33;
      v33 = v36;
    }
    result = a1;
    a1[3] = v33;
    a1[2] = v26;
    *a1 = v40;
    a1[1] = v61;
  }
  return result;
}
