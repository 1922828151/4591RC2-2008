/*
 * func-name: sub_100F9920
 * func-address: 0x100f9920
 * callers: 0x100fb120
 * callees: 0x100f8fa0, 0x100f93e0
 */

float *__thiscall sub_100F9920(float *this, int a2, int a3, int a4)
{
  int v4; // eax
  unsigned int v5; // esi
  int v6; // eax
  unsigned int v7; // ebx
  float *v8; // esi
  int v9; // edx
  int v10; // eax
  double v11; // st7
  unsigned int v12; // ebx
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  unsigned int v16; // ebx
  float *v17; // esi
  int v18; // eax
  double v19; // st7
  int v20; // eax
  float *v21; // ebx
  double v22; // st7
  double v23; // st5
  double v24; // st4
  double v25; // st6
  double v26; // st3
  double v27; // st2
  double v28; // st6
  double v29; // st7
  double v30; // st7
  int v31; // eax
  unsigned int v32; // ebx
  int v33; // eax
  int v34; // edx
  unsigned int v35; // ebx
  int v36; // eax
  int v37; // edx
  unsigned int v38; // ebx
  float *v39; // esi
  float v42; // [esp+14h] [ebp-24h] BYREF
  float v43; // [esp+18h] [ebp-20h]
  float v44; // [esp+1Ch] [ebp-1Ch]
  float v45; // [esp+20h] [ebp-18h]
  float v46; // [esp+24h] [ebp-14h]
  float v47; // [esp+28h] [ebp-10h]
  float v48; // [esp+2Ch] [ebp-Ch]
  float v49; // [esp+30h] [ebp-8h]
  float v50; // [esp+34h] [ebp-4h]
  float v51; // [esp+44h] [ebp+Ch]
  float v52; // [esp+44h] [ebp+Ch]
  float *v53; // [esp+44h] [ebp+Ch]

  if ( a4 == 1 )
  {
    v4 = *(_DWORD *)(a3 + 4);
    v5 = *(_DWORD *)a2;
    if ( !v4 || v5 >= (*(_DWORD *)(a3 + 8) - v4) / 56 )
      invalid_parameter_noinfo();
    v6 = *(_DWORD *)(a3 + 4);
    v7 = *(_DWORD *)(a2 + 4);
    v8 = (float *)(v6 + 56 * v5);
    if ( !v6 || v7 >= (*(_DWORD *)(a3 + 8) - v6) / 56 )
      invalid_parameter_noinfo();
    v9 = *(_DWORD *)(a3 + 4);
    v10 = 7 * v7;
    v11 = *(float *)(v9 + 56 * v7) - *v8;
    v12 = *(_DWORD *)a2;
    v13 = v9 + 8 * v10;
    v45 = v11;
    v46 = *(float *)(v13 + 4) - v8[1];
    v47 = *(float *)(v13 + 8) - v8[2];
    if ( !v9 || v12 >= (*(_DWORD *)(a3 + 8) - v9) / 56 )
      invalid_parameter_noinfo();
    v14 = *(_DWORD *)(a3 + 4);
    v15 = 7 * v12;
    v16 = *(_DWORD *)(a2 + 8);
    v17 = (float *)(v14 + 8 * v15);
    if ( !v14 || v16 >= (*(_DWORD *)(a3 + 8) - v14) / 56 )
      invalid_parameter_noinfo();
    v18 = *(_DWORD *)(a3 + 4);
    v19 = *(float *)(v18 + 56 * v16);
    v20 = v18 + 56 * v16;
    v21 = (float *)(a2 + 12);
    v42 = v19 - *v17;
    v43 = *(float *)(v20 + 4) - v17[1];
    v44 = *(float *)(v20 + 8) - v17[2];
    v22 = v44;
    v23 = v46;
    v24 = v43;
    v25 = v47;
    v48 = v44 * v46 - v43 * v47;
    v26 = v42;
    *(float *)(a2 + 12) = v48;
    v27 = v25 * v26;
    v28 = v45;
    v49 = v27 - v22 * v45;
    *(float *)(a2 + 16) = v49;
    v50 = v28 * v24 - v26 * v23;
    *(float *)(a2 + 20) = v50;
    if ( this[3] < 1.0 )
    {
      sub_100F8FA0((float *)(a2 + 12), &v42);
      v51 = this[3];
      v45 = *v21 * v51;
      v46 = *(float *)(a2 + 16) * v51;
      v47 = v51 * *(float *)(a2 + 20);
      v52 = 1.0 - this[3];
      v48 = v42 * v52;
      v49 = v43 * v52;
      v50 = v52 * v44;
      v42 = v48 + v45;
      v29 = v49;
      *v21 = v42;
      v43 = v29 + v46;
      v30 = v50;
      *(float *)(a2 + 16) = v43;
      v44 = v30 + v47;
      *(float *)(a2 + 20) = v44;
    }
  }
  v31 = *(_DWORD *)(a3 + 4);
  v32 = *(_DWORD *)(a2 + 8);
  if ( !v31 || v32 >= (*(_DWORD *)(a3 + 8) - v31) / 56 )
    invalid_parameter_noinfo();
  v33 = *(_DWORD *)(a3 + 4);
  v34 = 7 * v32;
  v35 = *(_DWORD *)(a2 + 4);
  v53 = (float *)(v33 + 8 * v34);
  if ( !v33 || v35 >= (*(_DWORD *)(a3 + 8) - v33) / 56 )
    invalid_parameter_noinfo();
  v36 = *(_DWORD *)(a3 + 4);
  v37 = 7 * v35;
  v38 = *(_DWORD *)a2;
  v39 = (float *)(v36 + 8 * v37);
  if ( !v36 || v38 >= (*(_DWORD *)(a3 + 8) - v36) / 56 )
    invalid_parameter_noinfo();
  return sub_100F93E0((float *)(*(_DWORD *)(a3 + 4) + 56 * v38), v39, v53, (float *)(a2 + 24), (float *)(a2 + 36));
}
