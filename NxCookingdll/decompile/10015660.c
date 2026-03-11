/*
 * func-name: sub_10015660
 * func-address: 0x10015660
 * callers: 0x10020e00, 0x10021fa0
 * callees: none
 */

char __cdecl sub_10015660(float *a1, int a2, unsigned __int8 *a3, int a4)
{
  unsigned int v4; // ebx
  double v5; // st6
  unsigned int v6; // ebp
  double v7; // st5
  double v8; // st4
  double v9; // st3
  unsigned __int8 *v10; // esi
  double v11; // st2
  double v12; // st7
  unsigned int v13; // ebx
  unsigned __int8 *v14; // ecx
  double v15; // rt1
  double v16; // st2
  double v17; // rt2
  double v18; // st2
  double v19; // rtt
  double v20; // st2
  double v21; // rt1
  float *v22; // esi
  float *v23; // eax
  double v24; // st3
  double v25; // st7
  double v26; // st1
  double v27; // st0
  float *v28; // esi
  double v29; // rt2
  double v30; // st2
  double v31; // st5
  double v32; // st4
  float *v33; // eax
  double v34; // st3
  double v35; // st7
  double v36; // st1
  double v37; // st0
  float *v38; // esi
  double v39; // st6
  double v40; // st2
  double v41; // st5
  double v42; // st4
  float *v43; // eax
  double v44; // st3
  double v45; // st7
  double v46; // st1
  float *v47; // esi
  double v48; // st4
  float *v49; // eax
  double v50; // st5
  double v51; // st6
  double v52; // st4
  double v53; // st3
  double v54; // st2
  double v55; // rt0
  double v56; // rt1
  double v57; // rtt
  float *v58; // eax
  float *v59; // ecx
  long double v60; // st1
  long double v61; // st0
  double v62; // st7
  float v64; // [esp+Ch] [ebp-18h]
  float v65; // [esp+10h] [ebp-14h]
  float v66; // [esp+14h] [ebp-10h]
  float v67; // [esp+18h] [ebp-Ch]
  float v68; // [esp+1Ch] [ebp-8h]
  float v69; // [esp+20h] [ebp-4h]

  v4 = a2;
  if ( !a2 || !a3 || !a4 )
    return 0;
  v5 = 0.0;
  v6 = 0;
  v7 = 0.0;
  v8 = 0.0;
  v9 = 0.0;
  v10 = (unsigned __int8 *)(a2 - 1);
  v64 = 0.0;
  v11 = 0.0;
  v65 = 0.0;
  v12 = 0.0;
  v66 = 0.0;
  if ( a2 >= 4 )
  {
    v13 = ((unsigned int)(a2 - 4) >> 2) + 1;
    v14 = a3;
    v6 = 4 * v13;
    while ( 1 )
    {
      v22 = (float *)(a4 + 12 * a3[(_DWORD)v10]);
      v23 = (float *)(a4 + 12 * *v14);
      v24 = v9 + (v22[1] - v23[1]) * (v23[2] + v22[2]);
      v25 = v12 + (*v22 + *v23) * (v22[2] - v23[2]);
      v26 = *v22 - *v23;
      v27 = v23[1] + v22[1];
      v28 = v23;
      v29 = v11 + v26 * v27;
      v30 = v5 + *v23;
      v31 = v7 + v23[1];
      v32 = v8 + v23[2];
      v33 = (float *)(a4 + 12 * v14[1]);
      v34 = v24 + (v28[2] + v33[2]) * (v28[1] - v33[1]);
      v35 = v25 + (v28[2] - v33[2]) * (*v28 + *v33);
      v36 = v33[1] + v28[1];
      v37 = *v28;
      v38 = v33;
      v39 = v29 + v36 * (v37 - *v33);
      v40 = v30 + *v33;
      v41 = v31 + v33[1];
      v42 = v32 + v33[2];
      v43 = (float *)(a4 + 12 * v14[2]);
      v44 = v34 + (v38[1] - v43[1]) * (v43[2] + v38[2]);
      v45 = v35 + (*v43 + *v38) * (v38[2] - v43[2]);
      v46 = (*v38 - *v43) * (v43[1] + v38[1]);
      v47 = v43;
      v67 = v40 + *v43;
      v68 = v41 + v43[1];
      v48 = v42 + v43[2];
      v49 = (float *)(a4 + 12 * v14[3]);
      v69 = v48;
      v50 = v44 + (v47[2] + v49[2]) * (v47[1] - v49[1]);
      v12 = v45 + (v47[2] - v49[2]) * (*v49 + *v47);
      v51 = v39 + v46 + (*v47 - *v49) * (v49[1] + v47[1]);
      v52 = v67 + *v49;
      v53 = v49[1] + v68;
      v54 = v49[2] + v69;
      v10 = &v14[3 - (_DWORD)a3];
      v14 += 4;
      if ( !--v13 )
        break;
      v15 = v54;
      v16 = v52;
      v8 = v15;
      v17 = v16;
      v18 = v51;
      v5 = v17;
      v19 = v18;
      v20 = v50;
      v7 = v53;
      v21 = v20;
      v11 = v19;
      v9 = v21;
    }
    v4 = a2;
    v55 = v54;
    v66 = v51;
    v56 = v51;
    v65 = v12;
    v64 = v50;
    v57 = v50;
    v5 = v52;
    v7 = v53;
    v9 = v57;
    v11 = v56;
    v8 = v55;
  }
  if ( v6 < v4 )
  {
    do
    {
      v58 = (float *)(a4 + 12 * a3[v6]);
      v59 = (float *)(a4 + 12 * a3[(_DWORD)v10]);
      v10 = (unsigned __int8 *)v6++;
      v9 = v9 + (v59[1] - v58[1]) * (v58[2] + v59[2]);
      v12 = v12 + (*v58 + *v59) * (v59[2] - v58[2]);
      v7 = v7 + v58[1];
      v8 = v8 + v58[2];
      v11 = v11 + (v58[1] + v59[1]) * (*v59 - *v58);
      v5 = v5 + *v58;
    }
    while ( v6 < a2 );
    v66 = v11;
    v65 = v12;
    v64 = v9;
  }
  v60 = v11 * v11 + v12 * v12 + v9 * v9;
  if ( 0.0 == v60 )
  {
    v62 = v8;
  }
  else
  {
    v61 = 1.0 / sqrt(v60);
    v64 = v9 * v61;
    v65 = v12 * v61;
    v62 = v8;
    v66 = v11 * v61;
  }
  *a1 = v64;
  a1[1] = v65;
  a1[2] = v66;
  a1[3] = -((v62 * a1[2] + v7 * a1[1] + v5 * *a1) / (double)(unsigned int)a2);
  return 1;
}
