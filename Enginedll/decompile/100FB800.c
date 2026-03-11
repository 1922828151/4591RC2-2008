/*
 * func-name: sub_100FB800
 * func-address: 0x100fb800
 * callers: 0x100fd750
 * callees: 0x10076ef0, 0x100ec7b0, 0x100ecea0, 0x100ed6f0, 0x100f95b0, 0x100fb650, 0x100fdc20, 0x100fe320, 0x100fe5f0, 0x100feca0, 0x100fed60, 0x100fee10, 0x100fff70, 0x101a2500, 0x101a2516
 */

void __thiscall sub_100FB800(_DWORD *this, int *a2, _DWORD *a3, int a4, float a5, float a6, float a7)
{
  _BYTE *v7; // edi
  int v9; // ecx
  unsigned int v10; // edi
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  unsigned int v14; // edi
  int v15; // eax
  int v16; // ecx
  char *v17; // eax
  double v18; // st7
  char *v19; // edi
  int v20; // ecx
  unsigned int v21; // esi
  int v22; // eax
  int v23; // edx
  unsigned int v24; // edx
  char *v25; // esi
  unsigned int v26; // edi
  int v27; // ecx
  unsigned int v28; // eax
  int v29; // edi
  int v30; // eax
  unsigned int v31; // esi
  int v32; // eax
  int v33; // ecx
  double v34; // st7
  int v35; // ecx
  int v36; // eax
  char **v37; // esi
  int v38; // eax
  unsigned int v39; // esi
  int v40; // eax
  _DWORD *v41; // esi
  int v42; // ecx
  char *v43; // eax
  int v44; // edx
  unsigned int v45; // esi
  int v46; // eax
  unsigned int v47; // edi
  unsigned int v48; // eax
  int v49; // ecx
  unsigned int v50; // eax
  unsigned int v51; // edx
  void **v52; // eax
  unsigned int v53; // edx
  unsigned int v54; // ecx
  unsigned int *v55; // eax
  char *v56; // esi
  int v57; // eax
  unsigned int v58; // esi
  int v59; // eax
  int v60; // edx
  _DWORD *v61; // eax
  char *v62; // ecx
  int v63; // eax
  void **v64; // esi
  char *v65; // edi
  void *v66; // eax
  char *v67; // ebx
  char *v68; // esi
  char *v69; // [esp-8h] [ebp-114h]
  int v70; // [esp-8h] [ebp-114h]
  unsigned int v71; // [esp+14h] [ebp-F8h]
  unsigned int v72; // [esp+14h] [ebp-F8h]
  unsigned int v73; // [esp+14h] [ebp-F8h]
  unsigned int v74; // [esp+14h] [ebp-F8h]
  unsigned int i; // [esp+18h] [ebp-F4h]
  unsigned int v76; // [esp+18h] [ebp-F4h]
  float v77; // [esp+1Ch] [ebp-F0h]
  float v78; // [esp+1Ch] [ebp-F0h]
  float v79; // [esp+1Ch] [ebp-F0h]
  char *v80; // [esp+1Ch] [ebp-F0h]
  int v81; // [esp+20h] [ebp-ECh]
  int v82; // [esp+24h] [ebp-E8h]
  float v83; // [esp+28h] [ebp-E4h] BYREF
  float v84; // [esp+2Ch] [ebp-E0h]
  float v85; // [esp+30h] [ebp-DCh]
  char v86[4]; // [esp+34h] [ebp-D8h] BYREF
  void *v87; // [esp+38h] [ebp-D4h]
  int v88; // [esp+3Ch] [ebp-D0h]
  char v89[4]; // [esp+40h] [ebp-CCh] BYREF
  void *v90; // [esp+44h] [ebp-C8h]
  int v91; // [esp+48h] [ebp-C4h]
  void *Source; // [esp+4Ch] [ebp-C0h] BYREF
  char v93[4]; // [esp+50h] [ebp-BCh] BYREF
  void *v94; // [esp+54h] [ebp-B8h]
  _BYTE *v95; // [esp+58h] [ebp-B4h]
  int v96; // [esp+5Ch] [ebp-B0h]
  char *v97; // [esp+60h] [ebp-ACh]
  int v98; // [esp+64h] [ebp-A8h] BYREF
  void **k; // [esp+68h] [ebp-A4h] BYREF
  char *v100; // [esp+6Ch] [ebp-A0h]
  int v101; // [esp+70h] [ebp-9Ch] BYREF
  void *v102; // [esp+74h] [ebp-98h]
  int v103; // [esp+78h] [ebp-94h]
  int v104; // [esp+7Ch] [ebp-90h]
  unsigned int j; // [esp+80h] [ebp-8Ch]
  void **v106; // [esp+84h] [ebp-88h] BYREF
  int v107; // [esp+88h] [ebp-84h]
  char *v108; // [esp+90h] [ebp-7Ch]
  char v109[8]; // [esp+94h] [ebp-78h] BYREF
  int v110; // [esp+9Ch] [ebp-70h] BYREF
  int v111; // [esp+A4h] [ebp-68h] BYREF
  _DWORD v112[14]; // [esp+ACh] [ebp-60h] BYREF
  char v113[12]; // [esp+E4h] [ebp-28h] BYREF
  char v114[16]; // [esp+F0h] [ebp-1Ch] BYREF
  int v115; // [esp+108h] [ebp-4h]

  v7 = 0;
  v94 = 0;
  v95 = 0;
  v96 = 0;
  v115 = 0;
  v71 = 0;
  if ( std::vector<Model *>::size(a2) )
  {
    do
    {
      v9 = a2[1];
      if ( !v9 || v71 >= (a2[2] - v9) >> 2 )
        invalid_parameter_noinfo();
      v10 = *(_DWORD *)(a2[1] + 4 * v71);
      v11 = this[6];
      if ( !v11 || v10 >= (this[7] - v11) / 60 )
        invalid_parameter_noinfo();
      ++v71;
      v12 = this[6] + 60 * v10;
      *(_BYTE *)(v12 + 48) = 0;
      *(_DWORD *)(v12 + 52) = -1;
    }
    while ( v71 < std::vector<Model *>::size(a2) );
    v7 = v95;
  }
  v106 = &CanSmoothNormalsChecker::`vftable';
  v72 = 0;
  if ( std::vector<Model *>::size(a2) )
  {
    do
    {
      v13 = a2[1];
      if ( !v13 || v72 >= (a2[2] - v13) >> 2 )
        invalid_parameter_noinfo();
      v14 = *(_DWORD *)(a2[1] + 4 * v72);
      v15 = this[6];
      if ( !v15 || v14 >= (this[7] - v15) / 60 )
        invalid_parameter_noinfo();
      v16 = this[6];
      if ( !*(_BYTE *)(v16 + 60 * v14 + 48) )
        sub_100FB650(
          this,
          v16 + 60 * v14,
          a2,
          (int)v93,
          (int)a3,
          (unsigned __int8 (__thiscall ***)(_DWORD, int, int, int))&v106,
          (int)this);
      ++v72;
    }
    while ( v72 < std::vector<Model *>::size(a2) );
    v7 = v95;
  }
  v102 = 0;
  v103 = 0;
  v104 = 0;
  LOBYTE(v115) = 1;
  v73 = 0;
  if ( sub_100FDC20(v93) )
  {
    v81 = 0;
    while ( 1 )
    {
      v17 = (char *)v94;
      v18 = 0.0;
      if ( !v94 || v73 >= (v7 - (_BYTE *)v94) >> 4 )
      {
        invalid_parameter_noinfo();
        v18 = 0.0;
        v17 = (char *)v94;
      }
      v83 = v18;
      v19 = &v17[v81];
      v84 = v18;
      v85 = v18;
      for ( i = 0; i < std::vector<Model *>::size(v19); v85 = *(float *)(v23 + 60 * v21 + 20) + v85 )
      {
        v20 = *((_DWORD *)v19 + 1);
        if ( !v20 || i >= (*((_DWORD *)v19 + 2) - v20) >> 2 )
          invalid_parameter_noinfo();
        v21 = *(_DWORD *)(*((_DWORD *)v19 + 1) + 4 * i);
        v22 = this[6];
        if ( !v22 || v21 >= (this[7] - v22) / 60 )
          invalid_parameter_noinfo();
        v23 = this[6];
        ++i;
        v83 = *(float *)(v23 + 60 * v21 + 12) + v83;
        v84 = *(float *)(v23 + 60 * v21 + 16) + v84;
      }
      v77 = v85 * v85 + v83 * v83 + v84 * v84;
      v78 = sqrt(v77);
      v79 = 1.0 / v78;
      v83 = v79 * v83;
      v84 = v84 * v79;
      v85 = v79 * v85;
      sub_100FFF70((int)&v101, &v83);
      v81 += 16;
      if ( ++v73 >= sub_100FDC20(v93) )
        break;
      v7 = v95;
    }
  }
  v90 = (void *)sub_100FE5F0(v89);
  *((_BYTE *)v90 + 17) = 1;
  *((_DWORD *)v90 + 1) = v90;
  *(_DWORD *)v90 = v90;
  *((_DWORD *)v90 + 2) = v90;
  v91 = 0;
  v24 = 0;
  LOBYTE(v115) = 2;
  v74 = 0;
  while ( v94 && v24 < (v95 - (_BYTE *)v94) >> 4 )
  {
    v25 = (char *)v94 + 16 * v74;
    v80 = v25;
    v87 = (void *)sub_100FE5F0(v86);
    *((_BYTE *)v87 + 17) = 1;
    *((_DWORD *)v87 + 1) = v87;
    *(_DWORD *)v87 = v87;
    v26 = 0;
    *((_DWORD *)v87 + 2) = v87;
    v88 = 0;
    LOBYTE(v115) = 3;
    for ( j = 0; v26 < std::vector<Model *>::size(v80); v26 = j )
    {
      v27 = *((_DWORD *)v25 + 1);
      if ( !v27 || v26 >= (*((_DWORD *)v25 + 2) - v27) >> 2 )
        invalid_parameter_noinfo();
      v28 = *(_DWORD *)(*((_DWORD *)v25 + 1) + 4 * v26);
      v29 = 60 * v28;
      v76 = v28;
      v82 = 0;
      v107 = 60 * v28;
      do
      {
        v30 = this[6];
        if ( !v30 || v76 >= (this[7] - v30) / 60 )
          invalid_parameter_noinfo();
        v31 = *(_DWORD *)(v29 + this[6] + 4 * v82);
        v32 = a3[1];
        if ( !v32 || v31 >= (a3[2] - v32) / 56 )
          invalid_parameter_noinfo();
        v33 = a3[1];
        v34 = *(float *)(v33 + 56 * v31);
        v35 = v33 + 56 * v31;
        if ( a5 == v34 && a6 == *(float *)(v35 + 4) && a7 == *(float *)(v35 + 8) )
        {
          v36 = this[6];
          v108 = (char *)v90;
          if ( !v36 || v76 >= (this[7] - v36) / 60 )
            invalid_parameter_noinfo();
          v37 = (char **)sub_100FED60(v109, v29 + this[6] + 4 * v82);
          if ( !*v37 || *v37 != v89 )
            invalid_parameter_noinfo();
          if ( v37[1] == v108 )
          {
            v56 = (char *)v102;
            if ( !v102 || v74 >= (v103 - (int)v102) / 12 )
            {
              invalid_parameter_noinfo();
              v56 = (char *)v102;
            }
            v57 = this[6];
            v97 = &v56[12 * v74];
            if ( !v57 || v76 >= (this[7] - v57) / 60 )
              invalid_parameter_noinfo();
            v58 = *(_DWORD *)(v29 + this[6] + 4 * v82);
            v59 = a3[1];
            if ( !v59 || v58 >= (a3[2] - v59) / 56 )
              invalid_parameter_noinfo();
            v60 = 7 * v58;
            v45 = v76;
            v61 = (_DWORD *)(a3[1] + 8 * v60 + 12);
            v62 = v97;
            *v61 = *(_DWORD *)v97;
            v61[1] = *((_DWORD *)v62 + 1);
            v61[2] = *((_DWORD *)v62 + 2);
          }
          else
          {
            v38 = this[6];
            if ( !v38 || v76 >= (this[7] - v38) / 60 )
              invalid_parameter_noinfo();
            v39 = *(_DWORD *)(v29 + this[6] + 4 * v82);
            v40 = a3[1];
            if ( !v40 || v39 >= (a3[2] - v40) / 56 )
              invalid_parameter_noinfo();
            qmemcpy(v112, (const void *)(a3[1] + 56 * v39), sizeof(v112));
            v41 = v102;
            if ( !v102 || v74 >= (v103 - (int)v102) / 12 )
            {
              invalid_parameter_noinfo();
              v41 = v102;
            }
            v42 = v41[3 * v74];
            v43 = (char *)&v41[3 * v74];
            v44 = *((_DWORD *)v43 + 1);
            v45 = v76;
            v112[5] = *((_DWORD *)v43 + 2);
            v46 = this[6];
            v112[3] = v42;
            v112[4] = v44;
            if ( !v46 || v76 >= (this[7] - v46) / 60 )
              invalid_parameter_noinfo();
            v47 = *(_DWORD *)(this[6] + 4 * (v82 + 15 * v76));
            v97 = (char *)sub_100EC7B0(a3);
            sub_100ED6F0(a3, v112);
            v48 = this[12];
            v98 = v47;
            if ( v47 < v48 )
            {
              v53 = *(_DWORD *)(a4 + 4);
              if ( v53 )
                v54 = (int)(*(_DWORD *)(a4 + 8) - v53) >> 2;
              else
                v54 = 0;
              if ( v53 && v54 < (int)(*(_DWORD *)(a4 + 12) - v53) >> 2 )
              {
                v55 = *(unsigned int **)(a4 + 8);
                *v55 = v47;
                *(_DWORD *)(a4 + 8) = v55 + 1;
              }
              else
              {
                Source = *(void **)(a4 + 8);
                if ( v53 > (unsigned int)Source )
                  invalid_parameter_noinfo();
                sub_100ECEA0((_DWORD *)a4, &v111, (_DWORD *)a4, (char *)Source, &v98);
              }
            }
            else
            {
              v49 = *(_DWORD *)(a4 + 4);
              if ( !v49 || v47 >= (*(_DWORD *)(a4 + 8) - v49) >> 2 )
                invalid_parameter_noinfo();
              v50 = *(_DWORD *)(a4 + 4);
              Source = *(void **)(v50 + 4 * v47);
              if ( v50 )
                v51 = (int)(*(_DWORD *)(a4 + 8) - v50) >> 2;
              else
                v51 = 0;
              if ( v50 && v51 < (int)(*(_DWORD *)(a4 + 12) - v50) >> 2 )
              {
                v52 = *(void ***)(a4 + 8);
                *v52 = Source;
                *(_DWORD *)(a4 + 8) = v52 + 1;
              }
              else
              {
                v98 = *(_DWORD *)(a4 + 8);
                if ( v50 > v98 )
                  invalid_parameter_noinfo();
                sub_100ECEA0((_DWORD *)a4, &v110, (_DWORD *)a4, (char *)v98, (int *)&Source);
              }
            }
            sub_100F95B0(this, v47, (int)v97, v80);
          }
          v63 = this[6];
          if ( !v63 || v45 >= (this[7] - v63) / 60 )
            invalid_parameter_noinfo();
          sub_100FECA0(v113, this[6] + 4 * (v82 + 15 * v45));
          v29 = v107;
        }
        ++v82;
      }
      while ( v82 < 3 );
      v25 = v80;
      ++j;
    }
    v64 = (void **)v86;
    v100 = *(char **)v87;
    for ( k = (void **)v86; ; v64 = k )
    {
      v65 = (char *)v87;
      if ( !v64 || v64 != (void **)v86 )
        invalid_parameter_noinfo();
      if ( v100 == v65 )
        break;
      if ( !v64 )
        invalid_parameter_noinfo();
      if ( v100 == v64[1] )
        invalid_parameter_noinfo();
      sub_100FECA0(v114, v100 + 12);
      sub_100FE320(&k);
    }
    v69 = *(char **)v87;
    LOBYTE(v115) = 2;
    sub_100FEE10(&v83, v86, v69, v86, v87);
    operator delete(v87);
    v24 = ++v74;
    v87 = 0;
    v88 = 0;
  }
  v70 = *(_DWORD *)v90;
  LOBYTE(v115) = 1;
  sub_100FEE10(&v83, v89, v70, v89, v90);
  operator delete(v90);
  v90 = 0;
  v91 = 0;
  if ( v102 )
    operator delete(v102);
  v66 = v94;
  v102 = 0;
  v103 = 0;
  v104 = 0;
  if ( v94 )
  {
    v67 = v95;
    if ( v94 != v95 )
    {
      v68 = (char *)v94 + 4;
      do
      {
        if ( *(_DWORD *)v68 )
          operator delete(*(void **)v68);
        *(_DWORD *)v68 = 0;
        *((_DWORD *)v68 + 1) = 0;
        *((_DWORD *)v68 + 2) = 0;
        v68 += 16;
      }
      while ( v68 - 4 != v67 );
      v66 = v94;
    }
    operator delete(v66);
  }
}
