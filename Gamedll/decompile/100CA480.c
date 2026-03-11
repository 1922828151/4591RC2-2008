/*
 * func-name: sub_100CA480
 * func-address: 0x100ca480
 * callers: 0x10002cac
 * callees: none
 */

void __thiscall sub_100CA480(int this, int a2, int a3)
{
  int v4; // edx
  int v5; // edi
  int v6; // ecx
  int v7; // eax
  double v8; // st7
  int v9; // ebp
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // edx
  int v13; // ecx
  unsigned int v14; // edi
  unsigned int v15; // ebx
  int v16; // ecx
  int v17; // ecx
  int v19; // ecx
  unsigned int v20; // edi
  void (__cdecl *v21)(); // ebp
  float *v22; // edi
  int v23; // ecx
  unsigned int v24; // edi
  float *v25; // eax
  int v26; // ecx
  unsigned int v27; // edi
  int v28; // edx
  unsigned int v29; // edi
  int v30; // eax
  int v31; // ecx
  unsigned int v32; // edi
  float *v33; // eax
  int v34; // ecx
  unsigned int v35; // edi
  float *v36; // eax
  int v37; // edx
  unsigned int v38; // ecx
  int v39; // edx
  int v40; // ecx
  int v41; // [esp+10h] [ebp-20h]
  float v42; // [esp+10h] [ebp-20h]
  float v43; // [esp+14h] [ebp-1Ch]
  float v44; // [esp+14h] [ebp-1Ch]
  float v45; // [esp+14h] [ebp-1Ch]
  float v46; // [esp+14h] [ebp-1Ch]
  float v47; // [esp+18h] [ebp-18h]
  float v48; // [esp+18h] [ebp-18h]
  float v49; // [esp+18h] [ebp-18h]
  float v50; // [esp+18h] [ebp-18h]
  float v51; // [esp+1Ch] [ebp-14h]
  float v52; // [esp+1Ch] [ebp-14h]
  float v53; // [esp+1Ch] [ebp-14h]
  float v54; // [esp+1Ch] [ebp-14h]
  float v55; // [esp+20h] [ebp-10h]
  float v56; // [esp+20h] [ebp-10h]
  float v57; // [esp+20h] [ebp-10h]
  float v58; // [esp+20h] [ebp-10h]
  float v59; // [esp+24h] [ebp-Ch]
  float v60; // [esp+24h] [ebp-Ch]
  float v61; // [esp+24h] [ebp-Ch]
  float v62; // [esp+24h] [ebp-Ch]
  float v63; // [esp+28h] [ebp-8h]
  float v64; // [esp+28h] [ebp-8h]
  float v65; // [esp+28h] [ebp-8h]
  float v66; // [esp+28h] [ebp-8h]
  float v67; // [esp+38h] [ebp+8h]
  float v68; // [esp+38h] [ebp+8h]
  float v69; // [esp+38h] [ebp+8h]
  float v70; // [esp+38h] [ebp+8h]
  float v71; // [esp+38h] [ebp+8h]
  float v72; // [esp+38h] [ebp+8h]

  v4 = *(_DWORD *)(this + 116);
  v5 = *(_DWORD *)(this + 120);
  v41 = v5;
  if ( v4 > v5 )
  {
    v6 = *(_DWORD *)(this + 104);
    if ( v6 )
      v7 = (*(_DWORD *)(this + 108) - v6) >> 6;
    else
      v7 = 0;
    v5 += v7;
    v41 = v5;
  }
  v8 = 0.0;
  v9 = v4;
  if ( v4 < v5 )
  {
    do
    {
      v10 = *(_DWORD *)(this + 104);
      if ( v10 )
        v11 = (*(_DWORD *)(this + 108) - v10) >> 6;
      else
        v11 = 0;
      v12 = v9 % v11;
      v13 = *(_DWORD *)(this + 104);
      v14 = v12;
      if ( !v13 || v12 >= (*(_DWORD *)(this + 108) - v13) >> 6 )
        _invalid_parameter_noinfo();
      v15 = v14 << 6;
      *(float *)((v14 << 6) + *(_DWORD *)(this + 104) + 60) = *(float *)((v14 << 6) + *(_DWORD *)(this + 104) + 60)
                                                            - *(float *)(this + 96) * GDeltaTime;
      v16 = *(_DWORD *)(this + 104);
      if ( !v16 || v14 >= (*(_DWORD *)(this + 108) - v16) >> 6 )
        _invalid_parameter_noinfo();
      v8 = 0.0;
      if ( *(float *)(v15 + *(_DWORD *)(this + 104) + 60) <= 0.0 )
      {
        *(_DWORD *)(this + 116) = v14;
        v17 = *(_DWORD *)(this + 104);
        if ( !v17 || v14 >= (*(_DWORD *)(this + 108) - v17) >> 6 )
          _invalid_parameter_noinfo();
        v8 = 0.0;
        *(float *)(v15 + *(_DWORD *)(this + 104) + 60) = 0.0;
      }
      ++v9;
    }
    while ( v9 < v41 );
  }
  v42 = *(float *)(this + 124) + GDeltaTime;
  *(float *)(this + 124) = v42;
  if ( (!*(_BYTE *)(a3 + 304) || 1.0 / *(float *)(this + 96) * 1000.0 <= *(float *)(this + 64))
    && (*(float *)(this + 128) != *(float *)(this + 140)
     || *(float *)(this + 132) != *(float *)(this + 144)
     || *(float *)(this + 136) != *(float *)(this + 148))
    && v42 > 0.0099999998 )
  {
    *(float *)(this + 124) = v8;
    v67 = GDeltaTime;
    if ( GDeltaTime > 0.1000000014901161 )
      v67 = 0.1;
    v68 = *(float *)(a3 + 320) * v67 + *(float *)(this + 68);
    *(float *)(this + 68) = v68;
    if ( v68 < v8 )
      *(float *)(this + 68) = v8;
    v19 = *(_DWORD *)(this + 104);
    v69 = *(float *)(this + 68);
    v20 = *(_DWORD *)(this + 120);
    v43 = *(float *)(this + 152) * v69;
    v47 = *(float *)(this + 156) * v69;
    v51 = v69 * *(float *)(this + 160);
    v55 = *(float *)(this + 140) - v43;
    v59 = *(float *)(this + 144) - v47;
    v63 = *(float *)(this + 148) - v51;
    if ( v19 && v20 < (*(_DWORD *)(this + 108) - v19) >> 6 )
    {
      v21 = _invalid_parameter_noinfo;
    }
    else
    {
      v21 = _invalid_parameter_noinfo;
      _invalid_parameter_noinfo();
    }
    v22 = (float *)(*(_DWORD *)(this + 104) + (v20 << 6));
    *v22 = v55;
    v22[1] = v59;
    v22[2] = v63;
    v70 = *(float *)(this + 68);
    v23 = *(_DWORD *)(this + 104);
    v24 = *(_DWORD *)(this + 120);
    v56 = *(float *)(this + 152) * v70;
    v60 = *(float *)(this + 156) * v70;
    v64 = v70 * *(float *)(this + 160);
    v44 = v56 + *(float *)(this + 140);
    v48 = *(float *)(this + 144) + v60;
    v52 = *(float *)(this + 148) + v64;
    if ( !v23 || v24 >= (*(_DWORD *)(this + 108) - v23) >> 6 )
      v21();
    v25 = (float *)((v24 << 6) + *(_DWORD *)(this + 104) + 12);
    *v25 = v44;
    v25[1] = v48;
    v25[2] = v52;
    if ( *(_BYTE *)(a3 + 316) )
    {
      v26 = *(_DWORD *)(this + 104);
      v71 = *(float *)(this + 68);
      v27 = *(_DWORD *)(this + 120);
      v57 = v71 * *(float *)(this + 164);
      v61 = *(float *)(this + 168) * v71;
      v65 = v71 * *(float *)(this + 172);
      v45 = *(float *)(this + 140) - v57;
      v49 = *(float *)(this + 144) - v61;
      v53 = *(float *)(this + 148) - v65;
      if ( !v26 || v27 >= (*(_DWORD *)(this + 108) - v26) >> 6 )
        v21();
      v28 = *(_DWORD *)(this + 104);
      v29 = v27 << 6;
      *(float *)(v29 + v28 + 24) = v45;
      v30 = v29 + v28 + 24;
      *(float *)(v30 + 4) = v49;
      *(float *)(v30 + 8) = v53;
      v72 = *(float *)(this + 68);
      v31 = *(_DWORD *)(this + 104);
      v32 = *(_DWORD *)(this + 120);
      v58 = *(float *)(this + 164) * v72;
      v62 = *(float *)(this + 168) * v72;
      v66 = v72 * *(float *)(this + 172);
      v46 = *(float *)(this + 140) + v58;
      v50 = *(float *)(this + 144) + v62;
      v54 = *(float *)(this + 148) + v66;
      if ( !v31 || v32 >= (*(_DWORD *)(this + 108) - v31) >> 6 )
        v21();
      v33 = (float *)((v32 << 6) + *(_DWORD *)(this + 104) + 36);
      *v33 = v46;
      v33[1] = v50;
      v33[2] = v54;
    }
    v34 = *(_DWORD *)(this + 104);
    v35 = *(_DWORD *)(this + 120);
    if ( !v34 || v35 >= (*(_DWORD *)(this + 108) - v34) >> 6 )
      v21();
    v36 = (float *)((v35 << 6) + *(_DWORD *)(this + 104) + 48);
    *v36 = 1.0;
    v36[1] = 1.0;
    v36[2] = 1.0;
    v36[3] = 1.0;
    ++*(_DWORD *)(this + 120);
    v37 = *(_DWORD *)(this + 104);
    if ( v37 )
      v38 = (*(_DWORD *)(this + 108) - v37) >> 6;
    else
      v38 = 0;
    v39 = *(_DWORD *)(this + 120) % v38;
    v40 = *(_DWORD *)(this + 144);
    *(_DWORD *)(this + 128) = *(_DWORD *)(this + 140);
    *(_DWORD *)(this + 132) = v40;
    *(_DWORD *)(this + 120) = v39;
    *(_DWORD *)(this + 136) = *(_DWORD *)(this + 148);
  }
}
