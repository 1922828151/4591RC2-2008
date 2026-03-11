/*
 * func-name: sub_100FCCD0
 * func-address: 0x100fccd0
 * callers: 0x100fd750
 * callees: 0x10076ef0, 0x100ec7b0, 0x100ecea0, 0x100ed6f0, 0x100f95b0, 0x100fb650, 0x100fdc20, 0x100fe320, 0x100fe5f0, 0x100feca0, 0x100fed60, 0x100fee10, 0x100fff70, 0x101a2500, 0x101a2516
 */

void __thiscall sub_100FCCD0(_DWORD *this, int *a2, _DWORD *a3, int a4, float a5, float a6, float a7)
{
  _BYTE *v7; // esi
  int v9; // ecx
  unsigned int v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  unsigned int v14; // esi
  int v15; // eax
  int v16; // ecx
  double v17; // st7
  int v18; // edi
  int v19; // ecx
  int v20; // ecx
  _DWORD *v21; // edx
  unsigned int v22; // edi
  int v23; // eax
  int v24; // edx
  int v25; // ecx
  double v26; // st7
  unsigned int v27; // edx
  char *v28; // esi
  unsigned int v29; // edi
  int v30; // ecx
  unsigned int v31; // eax
  int v32; // edi
  int v33; // eax
  unsigned int v34; // esi
  int v35; // eax
  int v36; // ecx
  double v37; // st7
  int v38; // ecx
  int v39; // eax
  char **v40; // esi
  int v41; // eax
  unsigned int v42; // esi
  int v43; // eax
  _DWORD *v44; // esi
  int v45; // ecx
  char *v46; // eax
  int v47; // edx
  unsigned int v48; // esi
  int v49; // eax
  unsigned int v50; // edi
  unsigned int v51; // eax
  int v52; // ecx
  unsigned int v53; // eax
  unsigned int v54; // edx
  void **v55; // eax
  unsigned int v56; // edx
  unsigned int v57; // ecx
  unsigned int *v58; // eax
  char *v59; // esi
  int v60; // eax
  unsigned int v61; // esi
  int v62; // eax
  int v63; // edx
  _DWORD *v64; // eax
  char *v65; // ecx
  int v66; // eax
  void **v67; // esi
  char *v68; // edi
  void *v69; // eax
  char *v70; // ebx
  char *v71; // esi
  char *v72; // [esp-Ch] [ebp-114h]
  int v73; // [esp-Ch] [ebp-114h]
  unsigned int v74; // [esp+10h] [ebp-F8h]
  unsigned int v75; // [esp+10h] [ebp-F8h]
  unsigned int v76; // [esp+10h] [ebp-F8h]
  unsigned int v77; // [esp+10h] [ebp-F8h]
  unsigned int v78; // [esp+14h] [ebp-F4h]
  unsigned int v79; // [esp+14h] [ebp-F4h]
  _DWORD *v80; // [esp+18h] [ebp-F0h]
  float v81; // [esp+18h] [ebp-F0h]
  float v82; // [esp+18h] [ebp-F0h]
  float v83; // [esp+18h] [ebp-F0h]
  char *v84; // [esp+18h] [ebp-F0h]
  int v85; // [esp+1Ch] [ebp-ECh]
  float v86; // [esp+20h] [ebp-E8h] BYREF
  float v87; // [esp+24h] [ebp-E4h]
  float v88; // [esp+28h] [ebp-E0h]
  char v89[4]; // [esp+2Ch] [ebp-DCh] BYREF
  void *v90; // [esp+30h] [ebp-D8h]
  int v91; // [esp+34h] [ebp-D4h]
  char v92[4]; // [esp+38h] [ebp-D0h] BYREF
  void *v93; // [esp+3Ch] [ebp-CCh]
  int v94; // [esp+40h] [ebp-C8h]
  char v95[4]; // [esp+44h] [ebp-C4h] BYREF
  void *v96; // [esp+48h] [ebp-C0h]
  char *v97; // [esp+4Ch] [ebp-BCh]
  int v98; // [esp+50h] [ebp-B8h]
  void *Source; // [esp+54h] [ebp-B4h] BYREF
  int i; // [esp+58h] [ebp-B0h]
  unsigned int v101; // [esp+5Ch] [ebp-ACh]
  int v102; // [esp+60h] [ebp-A8h] BYREF
  char *v103; // [esp+64h] [ebp-A4h]
  void **j; // [esp+68h] [ebp-A0h] BYREF
  char *v105; // [esp+6Ch] [ebp-9Ch]
  int v106; // [esp+70h] [ebp-98h] BYREF
  void *v107; // [esp+74h] [ebp-94h]
  int v108; // [esp+78h] [ebp-90h]
  int v109; // [esp+7Ch] [ebp-8Ch]
  int v110; // [esp+80h] [ebp-88h]
  void **v111; // [esp+84h] [ebp-84h] BYREF
  char *v112; // [esp+8Ch] [ebp-7Ch]
  int v113; // [esp+90h] [ebp-78h] BYREF
  char v114[8]; // [esp+98h] [ebp-70h] BYREF
  int v115; // [esp+A0h] [ebp-68h] BYREF
  _DWORD v116[14]; // [esp+A8h] [ebp-60h] BYREF
  char v117[12]; // [esp+E0h] [ebp-28h] BYREF
  char v118[16]; // [esp+ECh] [ebp-1Ch] BYREF
  int v119; // [esp+104h] [ebp-4h]

  v7 = 0;
  v96 = 0;
  v97 = 0;
  v98 = 0;
  v119 = 0;
  v74 = 0;
  if ( std::vector<Model *>::size(a2) )
  {
    do
    {
      v9 = a2[1];
      if ( !v9 || v74 >= (a2[2] - v9) >> 2 )
        invalid_parameter_noinfo();
      v10 = *(_DWORD *)(a2[1] + 4 * v74);
      v11 = this[6];
      if ( !v11 || v10 >= (this[7] - v11) / 60 )
        invalid_parameter_noinfo();
      ++v74;
      v12 = this[6] + 60 * v10;
      *(_BYTE *)(v12 + 48) = 0;
      *(_DWORD *)(v12 + 52) = -1;
    }
    while ( v74 < std::vector<Model *>::size(a2) );
    v7 = v96;
  }
  v111 = &CanSmoothBinormalsChecker::`vftable';
  v75 = 0;
  if ( std::vector<Model *>::size(a2) )
  {
    do
    {
      v13 = a2[1];
      if ( !v13 || v75 >= (a2[2] - v13) >> 2 )
        invalid_parameter_noinfo();
      v14 = *(_DWORD *)(a2[1] + 4 * v75);
      v15 = this[6];
      if ( !v15 || v14 >= (this[7] - v15) / 60 )
        invalid_parameter_noinfo();
      v16 = this[6];
      if ( !*(_BYTE *)(v16 + 60 * v14 + 48) )
        sub_100FB650(
          this,
          v16 + 60 * v14,
          a2,
          (int)v95,
          (int)a3,
          (unsigned __int8 (__thiscall ***)(_DWORD, int, int, int))&v111,
          (int)(this + 2));
      ++v75;
    }
    while ( v75 < std::vector<Model *>::size(a2) );
    v7 = v96;
  }
  v107 = 0;
  v108 = 0;
  v109 = 0;
  LOBYTE(v119) = 1;
  v76 = 0;
  if ( sub_100FDC20(v95) )
  {
    while ( 1 )
    {
      v17 = 0.0;
      v18 = 16 * v76;
      v86 = 0.0;
      v87 = 0.0;
      v78 = 0;
      i = 16 * v76;
      while ( 1 )
      {
        v88 = v17;
        if ( !v7 || v76 >= (v97 - v7) >> 4 )
        {
          invalid_parameter_noinfo();
          v7 = v96;
        }
        v19 = *(_DWORD *)&v7[v18 + 4];
        if ( !v19 || v78 >= (*(_DWORD *)&v7[v18 + 8] - v19) >> 2 )
          break;
        if ( !v7 || v76 >= (v97 - v7) >> 4 )
        {
          invalid_parameter_noinfo();
          v7 = v96;
        }
        v20 = *(_DWORD *)&v7[v18 + 4];
        v21 = &v7[v18 + 4];
        v80 = v21;
        if ( !v20 || v78 >= (*(_DWORD *)&v7[v18 + 8] - v20) >> 2 )
        {
          invalid_parameter_noinfo();
          v7 = v96;
          v21 = v80;
        }
        v22 = *(_DWORD *)(*v21 + 4 * v78);
        v23 = this[6];
        if ( !v23 || v22 >= (this[7] - v23) / 60 )
        {
          invalid_parameter_noinfo();
          v7 = v96;
        }
        v24 = this[6];
        v25 = 15 * v22;
        v26 = *(float *)(v24 + 60 * v22 + 36);
        ++v78;
        v18 = i;
        v86 = v26 + v86;
        v87 = *(float *)(v24 + 4 * v25 + 40) + v87;
        v17 = *(float *)(v24 + 4 * v25 + 44) + v88;
      }
      v81 = v88 * v88 + v86 * v86 + v87 * v87;
      v82 = sqrt(v81);
      v83 = 1.0 / v82;
      v86 = v83 * v86;
      v87 = v87 * v83;
      v88 = v83 * v88;
      sub_100FFF70((int)&v106, &v86);
      if ( ++v76 >= sub_100FDC20(v95) )
        break;
      v7 = v96;
    }
  }
  v93 = (void *)sub_100FE5F0(v92);
  *((_BYTE *)v93 + 17) = 1;
  *((_DWORD *)v93 + 1) = v93;
  *(_DWORD *)v93 = v93;
  *((_DWORD *)v93 + 2) = v93;
  v94 = 0;
  v27 = 0;
  LOBYTE(v119) = 2;
  v77 = 0;
  while ( v96 && v27 < (v97 - (_BYTE *)v96) >> 4 )
  {
    v28 = (char *)v96 + 16 * v77;
    v84 = v28;
    v90 = (void *)sub_100FE5F0(v89);
    *((_BYTE *)v90 + 17) = 1;
    *((_DWORD *)v90 + 1) = v90;
    *(_DWORD *)v90 = v90;
    v29 = 0;
    *((_DWORD *)v90 + 2) = v90;
    v91 = 0;
    LOBYTE(v119) = 3;
    for ( i = 0; v29 < std::vector<Model *>::size(v84); v29 = i )
    {
      v30 = *((_DWORD *)v28 + 1);
      if ( !v30 || v29 >= (*((_DWORD *)v28 + 2) - v30) >> 2 )
        invalid_parameter_noinfo();
      v31 = *(_DWORD *)(*((_DWORD *)v28 + 1) + 4 * v29);
      v32 = 60 * v31;
      v79 = v31;
      v85 = 0;
      v110 = 60 * v31;
      do
      {
        v33 = this[6];
        if ( !v33 || v79 >= (this[7] - v33) / 60 )
          invalid_parameter_noinfo();
        v34 = *(_DWORD *)(v32 + this[6] + 4 * v85);
        v35 = a3[1];
        if ( !v35 || v34 >= (a3[2] - v35) / 56 )
          invalid_parameter_noinfo();
        v36 = a3[1];
        v37 = *(float *)(v36 + 56 * v34);
        v38 = v36 + 56 * v34;
        if ( a5 == v37 && a6 == *(float *)(v38 + 4) && a7 == *(float *)(v38 + 8) )
        {
          v39 = this[6];
          v112 = (char *)v93;
          if ( !v39 || v79 >= (this[7] - v39) / 60 )
            invalid_parameter_noinfo();
          v40 = (char **)sub_100FED60(v114, v32 + this[6] + 4 * v85);
          if ( !*v40 || *v40 != v92 )
            invalid_parameter_noinfo();
          if ( v40[1] == v112 )
          {
            v59 = (char *)v107;
            if ( !v107 || v77 >= (v108 - (int)v107) / 12 )
            {
              invalid_parameter_noinfo();
              v59 = (char *)v107;
            }
            v60 = this[6];
            v103 = &v59[12 * v77];
            if ( !v60 || v79 >= (this[7] - v60) / 60 )
              invalid_parameter_noinfo();
            v61 = *(_DWORD *)(v32 + this[6] + 4 * v85);
            v62 = a3[1];
            if ( !v62 || v61 >= (a3[2] - v62) / 56 )
              invalid_parameter_noinfo();
            v63 = 7 * v61;
            v48 = v79;
            v64 = (_DWORD *)(a3[1] + 8 * v63 + 44);
            v65 = v103;
            *v64 = *(_DWORD *)v103;
            v64[1] = *((_DWORD *)v65 + 1);
            v64[2] = *((_DWORD *)v65 + 2);
          }
          else
          {
            v41 = this[6];
            if ( !v41 || v79 >= (this[7] - v41) / 60 )
              invalid_parameter_noinfo();
            v42 = *(_DWORD *)(v32 + this[6] + 4 * v85);
            v43 = a3[1];
            if ( !v43 || v42 >= (a3[2] - v43) / 56 )
              invalid_parameter_noinfo();
            qmemcpy(v116, (const void *)(a3[1] + 56 * v42), sizeof(v116));
            v44 = v107;
            if ( !v107 || v77 >= (v108 - (int)v107) / 12 )
            {
              invalid_parameter_noinfo();
              v44 = v107;
            }
            v45 = v44[3 * v77];
            v46 = (char *)&v44[3 * v77];
            v47 = *((_DWORD *)v46 + 1);
            v48 = v79;
            v116[13] = *((_DWORD *)v46 + 2);
            v49 = this[6];
            v116[11] = v45;
            v116[12] = v47;
            if ( !v49 || v79 >= (this[7] - v49) / 60 )
              invalid_parameter_noinfo();
            v101 = *(_DWORD *)(this[6] + 4 * (v85 + 15 * v79));
            v50 = v101;
            v103 = (char *)sub_100EC7B0(a3);
            sub_100ED6F0(a3, v116);
            v51 = this[12];
            v102 = v50;
            if ( v50 < v51 )
            {
              v56 = *(_DWORD *)(a4 + 4);
              if ( v56 )
                v57 = (int)(*(_DWORD *)(a4 + 8) - v56) >> 2;
              else
                v57 = 0;
              if ( v56 && v57 < (int)(*(_DWORD *)(a4 + 12) - v56) >> 2 )
              {
                v58 = *(unsigned int **)(a4 + 8);
                *v58 = v101;
                *(_DWORD *)(a4 + 8) = v58 + 1;
              }
              else
              {
                Source = *(void **)(a4 + 8);
                if ( v56 > (unsigned int)Source )
                  invalid_parameter_noinfo();
                sub_100ECEA0((_DWORD *)a4, &v115, (_DWORD *)a4, (char *)Source, &v102);
              }
            }
            else
            {
              v52 = *(_DWORD *)(a4 + 4);
              if ( !v52 || v101 >= (*(_DWORD *)(a4 + 8) - v52) >> 2 )
                invalid_parameter_noinfo();
              v53 = *(_DWORD *)(a4 + 4);
              Source = *(void **)(v53 + 4 * v101);
              if ( v53 )
                v54 = (int)(*(_DWORD *)(a4 + 8) - v53) >> 2;
              else
                v54 = 0;
              if ( v53 && v54 < (int)(*(_DWORD *)(a4 + 12) - v53) >> 2 )
              {
                v55 = *(void ***)(a4 + 8);
                *v55 = Source;
                *(_DWORD *)(a4 + 8) = v55 + 1;
              }
              else
              {
                v102 = *(_DWORD *)(a4 + 8);
                if ( v53 > v102 )
                  invalid_parameter_noinfo();
                sub_100ECEA0((_DWORD *)a4, &v113, (_DWORD *)a4, (char *)v102, (int *)&Source);
              }
            }
            sub_100F95B0(this, v101, (int)v103, v84);
          }
          v66 = this[6];
          if ( !v66 || v48 >= (this[7] - v66) / 60 )
            invalid_parameter_noinfo();
          sub_100FECA0(v118, this[6] + 4 * (v85 + 15 * v48));
          v32 = v110;
        }
        ++v85;
      }
      while ( v85 < 3 );
      v28 = v84;
      ++i;
    }
    v67 = (void **)v89;
    v105 = *(char **)v90;
    for ( j = (void **)v89; ; v67 = j )
    {
      v68 = (char *)v90;
      if ( !v67 || v67 != (void **)v89 )
        invalid_parameter_noinfo();
      if ( v105 == v68 )
        break;
      if ( !v67 )
        invalid_parameter_noinfo();
      if ( v105 == v67[1] )
        invalid_parameter_noinfo();
      sub_100FECA0(v117, v105 + 12);
      sub_100FE320(&j);
    }
    v72 = *(char **)v90;
    LOBYTE(v119) = 2;
    sub_100FEE10(&v86, v89, v72, v89, v90);
    operator delete(v90);
    v27 = ++v77;
    v90 = 0;
    v91 = 0;
  }
  v73 = *(_DWORD *)v93;
  LOBYTE(v119) = 1;
  sub_100FEE10(&v86, v92, v73, v92, v93);
  operator delete(v93);
  v93 = 0;
  v94 = 0;
  if ( v107 )
    operator delete(v107);
  v69 = v96;
  v107 = 0;
  v108 = 0;
  v109 = 0;
  if ( v96 )
  {
    v70 = v97;
    if ( v96 != v97 )
    {
      v71 = (char *)v96 + 4;
      do
      {
        if ( *(_DWORD *)v71 )
          operator delete(*(void **)v71);
        *(_DWORD *)v71 = 0;
        *((_DWORD *)v71 + 1) = 0;
        *((_DWORD *)v71 + 2) = 0;
        v71 += 16;
      }
      while ( v71 - 4 != v70 );
      v69 = v96;
    }
    operator delete(v69);
  }
}
