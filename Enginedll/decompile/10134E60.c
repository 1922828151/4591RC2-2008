/*
 * func-name: sub_10134E60
 * func-address: 0x10134e60
 * callers: 0x10076580
 * callees: 0x101a2516, 0x101a28f2
 */

void __thiscall sub_10134E60(float *this, float a2, void (__cdecl *a3)(_DWORD, int), int a4)
{
  unsigned int i; // edi
  int v6; // ecx
  int v7; // ecx
  float *v8; // eax
  unsigned int v9; // ebp
  double j; // st7
  int v11; // ecx
  int v12; // ebx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // ecx
  float ***v18; // ebx
  int v19; // edi
  int v20; // ecx
  int v21; // edi
  int v22; // edx
  float *v23; // eax
  int v24; // ecx
  int v25; // edi
  int v26; // ecx
  int v27; // edi
  int v28; // ecx
  int v29; // eax
  double v30; // st7
  int v31; // ecx
  float *v32; // eax
  double v33; // st7
  int v34; // ecx
  unsigned int k; // edi
  int v36; // ecx
  int v37; // ecx
  int v38; // eax
  double v39; // st6
  int v40; // ecx
  float **v41; // edx
  float *v42; // eax
  unsigned int v43; // [esp+10h] [ebp-44h]
  float v44; // [esp+14h] [ebp-40h]
  float v45; // [esp+14h] [ebp-40h]
  int v46; // [esp+14h] [ebp-40h]
  float v47; // [esp+14h] [ebp-40h]
  float v48; // [esp+14h] [ebp-40h]
  float v49; // [esp+14h] [ebp-40h]
  float v50; // [esp+14h] [ebp-40h]
  float v51; // [esp+18h] [ebp-3Ch]
  float v52; // [esp+1Ch] [ebp-38h]
  float v53; // [esp+20h] [ebp-34h]
  float v54; // [esp+24h] [ebp-30h]
  float v55; // [esp+28h] [ebp-2Ch]
  float v56; // [esp+2Ch] [ebp-28h]
  float v57; // [esp+30h] [ebp-24h]
  float v58; // [esp+34h] [ebp-20h]
  float v59; // [esp+38h] [ebp-1Ch]
  float v60; // [esp+3Ch] [ebp-18h]
  float v61; // [esp+40h] [ebp-14h]
  float v62; // [esp+44h] [ebp-10h]
  float v63; // [esp+48h] [ebp-Ch]
  float v64; // [esp+48h] [ebp-Ch]
  float v65; // [esp+4Ch] [ebp-8h]
  float v66; // [esp+4Ch] [ebp-8h]
  float v67; // [esp+50h] [ebp-4h]
  float v68; // [esp+50h] [ebp-4h]

  for ( i = 0; ; ++i )
  {
    v6 = *((_DWORD *)this + 4);
    v43 = i;
    if ( !v6 || i >= (*((_DWORD *)this + 5) - v6) >> 2 )
      break;
    if ( !*(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 4) + 4 * i) + 40) )
    {
      v44 = pow(0.5, a2);
      v7 = *((_DWORD *)this + 4);
      if ( !v7 || i >= (*((_DWORD *)this + 5) - v7) >> 2 )
        invalid_parameter_noinfo();
      v8 = (float *)(*(_DWORD *)(*((_DWORD *)this + 4) + 4 * i) + 8);
      v9 = 0;
      v45 = v44 * 0.5;
      *v8 = *v8 * v45;
      v8[1] = v45 * v8[1];
      for ( j = v45 * v8[2]; ; j = v62 + v8[2] )
      {
        v8[2] = j;
        v11 = *((_DWORD *)this + 4);
        if ( !v11 || i >= (*((_DWORD *)this + 5) - v11) >> 2 )
          invalid_parameter_noinfo();
        v12 = 4 * i;
        v13 = *(_DWORD *)(4 * i + *((_DWORD *)this + 4));
        v14 = *(_DWORD *)(v13 + 24);
        v15 = v13 + 20;
        v46 = 4 * i;
        if ( !v14 || v9 >= (*(_DWORD *)(v15 + 8) - v14) >> 3 )
          break;
        v16 = *((_DWORD *)this + 4);
        if ( !v16 || i >= (*((_DWORD *)this + 5) - v16) >> 2 )
          invalid_parameter_noinfo();
        v17 = *((_DWORD *)this + 4);
        v18 = (float ***)(v46 + v17);
        if ( !v17 || i >= (*((_DWORD *)this + 5) - v17) >> 2 )
          invalid_parameter_noinfo();
        v19 = *(_DWORD *)(v46 + *((_DWORD *)this + 4));
        v20 = *(_DWORD *)(v19 + 24);
        v21 = v19 + 20;
        if ( !v20 || v9 >= (*(_DWORD *)(v21 + 8) - v20) >> 3 )
          invalid_parameter_noinfo();
        v22 = *(_DWORD *)(*(_DWORD *)(v21 + 4) + 8 * v9);
        v23 = **v18;
        v51 = **(float **)v22 - *v23;
        v52 = *(float *)(*(_DWORD *)v22 + 4) - v23[1];
        v53 = *(float *)(*(_DWORD *)v22 + 8) - v23[2];
        v47 = v52 * v52 + v51 * v51 + v53 * v53;
        v48 = sqrt(v47);
        v24 = *((_DWORD *)this + 4);
        if ( !v24 || v43 >= (*((_DWORD *)this + 5) - v24) >> 2 )
          invalid_parameter_noinfo();
        v25 = *(_DWORD *)(4 * v43 + *((_DWORD *)this + 4));
        v26 = *(_DWORD *)(v25 + 24);
        v27 = v25 + 20;
        if ( !v26 || v9 >= (*(_DWORD *)(v27 + 8) - v26) >> 3 )
          invalid_parameter_noinfo();
        v28 = *((_DWORD *)this + 4);
        v49 = (v48 - *(float *)(*(_DWORD *)(v27 + 4) + 8 * v9 + 4)) / v48;
        v54 = v51 * 3.0;
        v55 = v52 * 3.0;
        v56 = 3.0 * v53;
        v57 = v54 * v49;
        v58 = v55 * v49;
        v59 = v49 * v56;
        v50 = a2 * 350.0;
        if ( !v28 || v43 >= (*((_DWORD *)this + 5) - v28) >> 2 )
          invalid_parameter_noinfo();
        v29 = *(_DWORD *)(4 * v43 + *((_DWORD *)this + 4));
        i = v43;
        v60 = v57 * v50;
        v30 = *(float *)(v29 + 8) + v60;
        v8 = (float *)(v29 + 8);
        ++v9;
        *v8 = v30;
        v61 = v58 * v50;
        v8[1] = v61 + v8[1];
        v62 = v50 * v59;
      }
      v31 = *((_DWORD *)this + 4);
      v63 = *this * a2;
      v65 = this[1] * a2;
      v67 = a2 * this[2];
      if ( !v31 || i >= (*((_DWORD *)this + 5) - v31) >> 2 )
        invalid_parameter_noinfo();
      v32 = *(float **)(v12 + *((_DWORD *)this + 4));
      v33 = v32[2] + v63;
      v32 += 2;
      *v32 = v33;
      v32[1] = v65 + v32[1];
      v32[2] = v67 + v32[2];
      if ( a3 )
      {
        v34 = *((_DWORD *)this + 4);
        if ( !v34 || i >= (*((_DWORD *)this + 5) - v34) >> 2 )
          invalid_parameter_noinfo();
        a3(*(_DWORD *)(v12 + *((_DWORD *)this + 4)), a4);
      }
    }
  }
  for ( k = 0; ; ++k )
  {
    v36 = *((_DWORD *)this + 4);
    if ( !v36 || k >= (*((_DWORD *)this + 5) - v36) >> 2 )
      break;
    v37 = *((_DWORD *)this + 4);
    if ( !*(_BYTE *)(*(_DWORD *)(v37 + 4 * k) + 40) )
    {
      if ( !v37 || k >= (*((_DWORD *)this + 5) - v37) >> 2 )
        invalid_parameter_noinfo();
      v38 = *(_DWORD *)(*((_DWORD *)this + 4) + 4 * k);
      v39 = a2 * *(float *)(v38 + 8);
      v40 = *((_DWORD *)this + 4);
      v38 += 8;
      v66 = *(float *)(v38 + 4) * a2;
      v68 = a2 * *(float *)(v38 + 8);
      if ( !v40 || k >= (*((_DWORD *)this + 5) - v40) >> 2 )
        invalid_parameter_noinfo();
      v41 = *(float ***)(*((_DWORD *)this + 4) + 4 * k);
      v42 = *v41;
      v64 = v39;
      *v42 = v64 + **v41;
      v42[1] = v66 + v42[1];
      v42[2] = v68 + v42[2];
    }
  }
}
