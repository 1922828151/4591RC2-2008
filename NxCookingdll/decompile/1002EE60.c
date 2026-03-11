/*
 * func-name: sub_1002EE60
 * func-address: 0x1002ee60
 * callers: 0x1002f150
 * callees: 0x10001160
 */

void __thiscall sub_1002EE60(_DWORD *this, int a2)
{
  unsigned int v2; // esi
  unsigned int v3; // edx
  unsigned int v4; // ebp
  int v5; // edx
  int v6; // esi
  int v7; // ebp
  int v8; // ebx
  _DWORD *v9; // edi
  float *v10; // eax
  int v11; // ecx
  int v12; // edi
  double v13; // st7
  int v14; // edi
  double v15; // st7
  float *v16; // ecx
  double v17; // st6
  double v18; // st5
  double v19; // st4
  double v20; // st3
  double v21; // st2
  double v22; // st1
  double v23; // st2
  long double v24; // rtt
  double v25; // st2
  long double v26; // st6
  double v27; // st5
  long double v28; // st7
  long double v29; // st4
  long double v30; // rt1
  long double v31; // st4
  int v32; // ecx
  int v33; // edx
  float *v34; // eax
  float *v35; // edi
  double v36; // st4
  double v37; // st3
  double v38; // st2
  float *v39; // edi
  double v40; // st2
  double v41; // st1
  double v42; // st0
  double v43; // st3
  double v44; // st2
  double v45; // st4
  long double v46; // st1
  long double v47; // st1
  int v48; // ebx
  int v49; // edx
  int v50; // eax
  int v51; // ecx
  float *v52; // eax
  unsigned int v53; // [esp+0h] [ebp-30h]
  unsigned int v54; // [esp+8h] [ebp-28h]
  float v55; // [esp+Ch] [ebp-24h]
  float v56; // [esp+10h] [ebp-20h]
  float v57; // [esp+14h] [ebp-1Ch]
  float v58; // [esp+18h] [ebp-18h]
  float v59; // [esp+1Ch] [ebp-14h]
  float v60; // [esp+20h] [ebp-10h]
  float v61; // [esp+28h] [ebp-8h]

  if ( this[3] != -1 )
  {
    v2 = this[2];
    v53 = v2 >> 30;
    v3 = this[3];
    v4 = v3 >> 30;
    v5 = v3 & 0x3FFFFFFF;
    v6 = v2 & 0x3FFFFFFF;
    v54 = v4;
    *(_BYTE *)(*(_DWORD *)(*(_DWORD *)a2 + 40) + v5) |= 1 << v4;
    v7 = *(_DWORD *)a2;
    v8 = *(_DWORD *)(*(_DWORD *)a2 + 8);
    v9 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)a2 + 12) + 12 * v6);
    v10 = (float *)(v8 + 12 * *v9);
    v11 = v9[1];
    v12 = 3 * v9[2];
    v13 = *(float *)(v8 + 4 * v12);
    v14 = v8 + 4 * v12;
    v15 = v13 - *v10;
    v16 = (float *)(v8 + 12 * v11);
    v17 = *(float *)(v14 + 4) - v10[1];
    v18 = *(float *)(v14 + 8) - v10[2];
    v19 = *v16 - *v10;
    v20 = v16[1] - v10[1];
    v21 = v16[2] - v10[2];
    v22 = v20 * v18 - v21 * v17;
    v55 = v22;
    v23 = v21 * v15 - v18 * v19;
    v56 = v23;
    v24 = v23;
    v25 = v17;
    v26 = v24;
    v27 = v19 * v25 - v15 * v20;
    v28 = v22;
    v57 = v27;
    v29 = sqrt(v27 * v27 + v24 * v24 + v28 * v28);
    if ( 0.0 != v29 )
    {
      v30 = 1.0 / v29;
      v31 = v22 * v30;
      v55 = v31;
      v56 = v26 * v30;
      v27 = v30 * v27;
      v57 = v27;
      v28 = v31;
      v26 = v26 * v30;
    }
    v32 = *(_DWORD *)(v7 + 12);
    v33 = 12 * v5;
    v34 = (float *)(v8 + 12 * *(_DWORD *)(v33 + v32));
    v35 = (float *)(v8 + 12 * *(_DWORD *)(v33 + v32 + 8));
    v36 = *v35 - *v34;
    v37 = v35[1] - v34[1];
    v61 = v37;
    v38 = v35[2];
    v39 = (float *)(v8 + 12 * *(_DWORD *)(v33 + v32 + 4));
    v40 = v38 - v34[2];
    v58 = *v39 - *v34;
    v41 = v39[1] - v34[1];
    v59 = v41;
    v42 = v39[2] - v34[2];
    v60 = v42;
    v43 = v41 * v40 - v37 * v42;
    v44 = v60 * v36 - v40 * v58;
    v45 = v58 * v61 - v36 * v59;
    v46 = sqrt(v45 * v45 + v44 * v44 + v43 * v43);
    if ( 0.0 != v46 )
    {
      v47 = 1.0 / v46;
      v43 = v43 * v47;
      v44 = v44 * v47;
      v45 = v45 * v47;
    }
    if ( 1.0 - *(float *)(v7 + 96) >= v45 * v27 + v44 * v26 + v43 * v28 )
    {
      v48 = v33 + v32;
      if ( v54 )
      {
        if ( v54 == 1 )
        {
          v50 = 0;
          v49 = 1;
        }
        else if ( v54 == 2 )
        {
          v50 = 1;
          v49 = 0;
        }
        else
        {
          if ( !byte_1005B480 )
          {
            if ( !dword_100580A4
              || (v26 = v56,
                  v27 = v57,
                  v28 = v55,
                  sub_10001160(
                    (_DWORD *)dword_100580A4,
                    107,
                    (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Cooking\\src\\InternalTriangleMeshBuilder.cpp",
                    960,
                    &byte_1005B480,
                    "0",
                    0)) )
            {
              __debugbreak();
            }
          }
          v49 = a2;
          v50 = a2;
        }
      }
      else
      {
        v50 = 0;
        v49 = 2;
      }
      v51 = *(_DWORD *)(*(_DWORD *)a2 + 8);
      v52 = (float *)(v51 + 12 * *(_DWORD *)(v48 + 4 * v50));
      if ( v28 * (*(float *)(v51 + 12 * *(_DWORD *)(v48 + 4 * v49)) - *v52)
         + v26 * (*(float *)(v51 + 12 * *(_DWORD *)(v48 + 4 * v49) + 4) - v52[1])
         + v27 * (*(float *)(v51 + 12 * *(_DWORD *)(v48 + 4 * v49) + 8) - v52[2]) > 0.0 )
        *(_BYTE *)(v6 + *(_DWORD *)(*(_DWORD *)a2 + 40)) |= 1 << v53;
    }
    else
    {
      *(_BYTE *)(*(_DWORD *)(v7 + 40) + v6) |= 1 << v53;
    }
  }
}
