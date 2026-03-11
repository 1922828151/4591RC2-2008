/*
 * func-name: sub_1001ECA0
 * func-address: 0x1001eca0
 * callers: 0x1001efc0
 * callees: none
 */

void __thiscall sub_1001ECA0(_DWORD *this, unsigned int a2, int a3, int a4, int a5)
{
  unsigned int v5; // ecx
  unsigned int v6; // edi
  int v7; // esi
  int v8; // eax
  int v9; // ebp
  int v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // ecx
  int v14; // ebp
  int v15; // esi
  int v16; // ecx
  float *v17; // edi
  float *v18; // edi
  float *v19; // eax
  double v20; // st6
  double v21; // st4
  float *v22; // eax
  double v23; // st7
  float v24; // esi
  double v25; // st5
  float *v26; // eax
  double v27; // st3
  float *v28; // eax
  long double v29; // st2
  double v30; // st7
  double v31; // st5
  long double v32; // st6
  long double v33; // st4
  long double v34; // st4
  double v35; // st3
  double v36; // st1
  double v37; // st4
  double v38; // rt1
  double v39; // st1
  double v40; // st0
  double v41; // st2
  double v42; // st4
  double v43; // st3
  long double v44; // st1
  long double v45; // st1
  int v46; // [esp+4h] [ebp-94h]
  int v47; // [esp+8h] [ebp-90h]
  int v49; // [esp+10h] [ebp-88h]
  float v50; // [esp+14h] [ebp-84h]
  float v51; // [esp+1Ch] [ebp-7Ch]
  float v52; // [esp+20h] [ebp-78h]
  float v53; // [esp+24h] [ebp-74h]
  float v54; // [esp+28h] [ebp-70h]
  int v55; // [esp+38h] [ebp-60h]
  float v56; // [esp+3Ch] [ebp-5Ch]
  float v57; // [esp+40h] [ebp-58h]
  float v58; // [esp+44h] [ebp-54h]
  float v59; // [esp+48h] [ebp-50h]
  float v60; // [esp+4Ch] [ebp-4Ch]
  float v61; // [esp+50h] [ebp-48h]
  float v62; // [esp+68h] [ebp-30h]
  _DWORD *v63; // [esp+6Ch] [ebp-2Ch]
  int v64; // [esp+70h] [ebp-28h]
  float v65; // [esp+7Ch] [ebp-1Ch]
  float v66; // [esp+84h] [ebp-14h]
  float v67; // [esp+8Ch] [ebp-Ch]

  v5 = a2;
  v6 = 0;
  v49 = 0;
  if ( a2 )
  {
    v7 = a4;
    do
    {
      v8 = *(_DWORD *)(a3 + 4 * v6);
      v55 = v8;
      v47 = *(_DWORD *)(this[12] + 4 * v8);
      v46 = v6;
      if ( v6 < v5 )
      {
        do
        {
          v9 = *(_DWORD *)(a3 + 4 * v6);
          v63 = (_DWORD *)(this[12] + 4 * v9);
          if ( v47 != *v63 )
          {
            v10 = 3 * v8;
            v11 = *(_DWORD *)(v7 + 4 * v10);
            v12 = v7 + 4 * v10;
            v13 = 3 * v9;
            v14 = *(_DWORD *)(v7 + 12 * v9);
            v15 = v7 + 4 * v13;
            v16 = *(_DWORD *)(v15 + 4);
            v64 = *(_DWORD *)(v15 + 8);
            v17 = (float *)(a5 + 12 * v11);
            v59 = *v17;
            v60 = v17[1];
            v61 = v17[2];
            v18 = (float *)(a5 + 12 * *(_DWORD *)(v12 + 4));
            v19 = (float *)(a5 + 12 * *(_DWORD *)(v12 + 8));
            v20 = v59 - *v19;
            v62 = v19[2];
            v21 = v60 - v19[1];
            v22 = (float *)(a5 + 12 * v14);
            v50 = *v22;
            v23 = v61 - v62;
            v24 = v22[1];
            v25 = v59 - *v18;
            v51 = v22[2];
            v26 = (float *)(a5 + 12 * v16);
            v27 = v60 - v18[1];
            v52 = *v26;
            v54 = v26[2];
            v53 = v26[1];
            v28 = (float *)(a5 + 12 * v64);
            v29 = v27 * v23 - (v61 - v18[2]) * v21;
            v30 = (v61 - v18[2]) * v20 - v23 * v25;
            v31 = v25 * v21 - v20 * v27;
            v32 = v29;
            v65 = v31;
            v33 = v31 * v31 + v30 * v30 + v32 * v32;
            if ( 0.0 != v33 )
            {
              v34 = 1.0 / sqrt(v33);
              v32 = v29 * v34;
              v30 = v30 * v34;
              v31 = v31 * v34;
              v65 = v31;
            }
            v35 = v50 - *v28;
            v36 = v24 - v28[1];
            v66 = v36;
            v37 = v51 - v28[2];
            v56 = v50 - v52;
            v38 = v36;
            v39 = v24 - v53;
            v57 = v39;
            v40 = v51 - v54;
            v58 = v40;
            v41 = v39 * v37 - v38 * v40;
            v42 = v58 * v35 - v37 * v56;
            v43 = v56 * v66 - v35 * v57;
            v44 = v43 * v43 + v42 * v42 + v41 * v41;
            if ( 0.0 != v44 )
            {
              v45 = 1.0 / sqrt(v44);
              v41 = v41 * v45;
              v42 = v42 * v45;
              v43 = v43 * v45;
            }
            v67 = v43 * v30 - v42 * v31;
            if ( fabs(
                   atan2(
                     sqrt(
                       (v31 * v41 - v43 * v32) * (v31 * v41 - v43 * v32)
                     + (v42 * v32 - v30 * v41) * (v42 * v32 - v30 * v41)
                     + v67 * v67),
                     v32 * v41 + v30 * v42 + v43 * v65)) < 0.0099999998 )
              *v63 = v47;
            v6 = v46;
            v7 = a4;
            v8 = v55;
          }
          v5 = a2;
          v46 = ++v6;
        }
        while ( v6 < a2 );
        v6 = v49;
      }
      v49 = ++v6;
    }
    while ( v6 < v5 );
  }
}
