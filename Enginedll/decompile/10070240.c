/*
 * func-name: sub_10070240
 * func-address: 0x10070240
 * callers: 0x10070eb0
 * callees: 0x10057590, 0x10057780, 0x10057a50, 0x10058580, 0x1006cf70, 0x1006e0b0, 0x1006fc60, 0x1006fce0, 0x101a2522
 */

_DWORD *__thiscall sub_10070240(
        _DWORD *this,
        int a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6,
        _DWORD *a7,
        int a8,
        int a9,
        unsigned int a10,
        int a11)
{
  unsigned int v12; // edi
  unsigned int v13; // eax
  int *v14; // ecx
  _DWORD *v15; // ebx
  unsigned int v16; // edi
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // eax
  unsigned int v20; // edx
  int v21; // ecx
  unsigned int v22; // edi
  bool v23; // cf
  unsigned int v24; // eax
  int v25; // edx
  unsigned int v26; // ebx
  unsigned int v27; // eax
  unsigned int v28; // edi
  unsigned int v29; // ebx
  unsigned int v30; // eax
  unsigned int v31; // ecx
  unsigned int v32; // eax
  unsigned int v33; // edi
  bool v35; // zf
  unsigned int v36; // edi
  unsigned int v37; // ecx
  _DWORD *v38; // eax
  unsigned int v39; // eax
  unsigned int v40; // edi
  unsigned int v41; // edx
  int *v42; // eax
  int v43; // ecx
  unsigned int v44; // eax
  unsigned int v45; // edi
  unsigned int v46; // edx
  unsigned int v47; // eax
  unsigned int v48; // eax
  unsigned int v49; // ecx
  unsigned int v50; // eax
  unsigned int v51; // ecx
  bool v52; // cc
  unsigned int v53; // eax
  char *v54; // edi
  unsigned int v55; // ecx
  unsigned int v56; // ecx
  unsigned int v57; // edi
  unsigned int v58; // eax
  unsigned int v59; // edi
  unsigned int v60; // ebx
  unsigned int v61; // eax
  unsigned int v62; // edi
  unsigned int v63; // ebx
  unsigned int v64; // eax
  unsigned int v65; // edi
  unsigned int v66; // eax
  unsigned int v67; // edi
  unsigned int v68; // edi
  unsigned int v69; // ecx
  _DWORD *v70; // eax
  unsigned int v71; // eax
  unsigned int v72; // edi
  unsigned int v73; // edx
  unsigned int v74; // ecx
  unsigned int v75; // edi
  unsigned int v76; // edx
  int *v77; // eax
  unsigned int v78; // eax
  unsigned int v79; // ecx
  unsigned int v80; // edx
  int v81[3]; // [esp-24h] [ebp-60h] BYREF
  int v82[2]; // [esp-18h] [ebp-54h] BYREF
  unsigned int v83; // [esp-10h] [ebp-4Ch]
  _DWORD *v84; // [esp-Ch] [ebp-48h] BYREF
  _DWORD *v85; // [esp-8h] [ebp-44h]
  _DWORD *v86; // [esp-4h] [ebp-40h]
  int v87; // [esp+0h] [ebp-3Ch] BYREF
  int v88; // [esp+Ch] [ebp-30h] BYREF
  _DWORD *v89; // [esp+10h] [ebp-2Ch]
  unsigned int i; // [esp+14h] [ebp-28h]
  int *v91; // [esp+18h] [ebp-24h]
  _DWORD *v92; // [esp+1Ch] [ebp-20h]
  unsigned int v93; // [esp+20h] [ebp-1Ch]
  int v94; // [esp+24h] [ebp-18h]
  unsigned int v95; // [esp+28h] [ebp-14h]
  int *v96; // [esp+2Ch] [ebp-10h]
  int v97; // [esp+38h] [ebp-4h]

  v12 = this[3];
  v13 = v12 + this[4];
  v96 = &v87;
  v92 = this;
  if ( v12 > v13 )
    invalid_parameter_noinfo();
  if ( !a3 || a3 != this )
    invalid_parameter_noinfo();
  v14 = (int *)this[4];
  v15 = a6;
  v95 = a4 - v12;
  v93 = (unsigned int)v14 - (a4 - v12);
  v91 = v14;
  if ( !a9 || (_DWORD *)a9 != a6 )
    invalid_parameter_noinfo();
  v16 = a10 - (_DWORD)a7;
  v94 = a10 - (_DWORD)a7;
  if ( v95 >= v93 )
  {
    v97 = 2;
    if ( v93 >= v16 )
    {
      a4 = 0;
      while ( 1 )
      {
        v23 = a4 < v16;
        v68 = this[3];
        if ( !v23 )
          break;
        v69 = v68 + this[4];
        v88 = 0;
        if ( v68 > v69 )
          invalid_parameter_noinfo();
        v89 = this;
        i = v68;
        v70 = (_DWORD *)sub_10057780(&v88, v95 + v93 + a4 - v94);
        sub_1006FCE0((int)this, v70);
        ++a4;
        v16 = v94;
      }
      if ( v68 > v68 + this[4] )
        invalid_parameter_noinfo();
      v71 = this[3];
      v72 = v95 + v68;
      v73 = v71 + this[4];
      a4 = v72;
      if ( v72 > v73 || v72 < v71 )
        invalid_parameter_noinfo();
      v74 = this[3];
      v75 = v93 + v72;
      v76 = v74 + this[4];
      v77 = (int *)&v84;
      v91 = (int *)&v84;
      v92 = (_DWORD *)v75;
      if ( v75 > v76 || v75 < v74 )
      {
        invalid_parameter_noinfo();
        v77 = v91;
      }
      *v77 = 0;
      v77[1] = (int)this;
      v77[2] = v75;
      v78 = this[3];
      if ( v75 > v78 + this[4] || v75 < v78 )
        invalid_parameter_noinfo();
      v79 = this[3];
      v80 = v79 + this[4];
      v91 = (_DWORD *)((char *)v92 - v94);
      if ( (unsigned int)v92 - v94 > v80 || (unsigned int)v92 - v94 < v79 )
        invalid_parameter_noinfo();
      v83 = (unsigned int)v91;
      v91 = v81;
      sub_1006E0B0(&v88, 0, (int)this, a4, 0, this, v83, (int)v84, v85, (unsigned int)v86);
      v86 = (_DWORD *)a4;
      v91 = (int *)&v84;
      v83 = a10;
      a4 = (unsigned int)v82;
      a10 = (unsigned int)v81;
      return sub_10058580(&a5, 0, v15, (unsigned int)a7, 0, a9, v83, 0, this, (unsigned int)v86);
    }
    else
    {
      if ( !v15 )
        invalid_parameter_noinfo();
      v53 = v15[3];
      v54 = (char *)a7 + v93;
      v55 = v53 + v15[4];
      v94 = (int)a7 + v93;
      if ( (unsigned int)a7 + v93 > v55 || (unsigned int)v54 < v53 )
        invalid_parameter_noinfo();
      for ( i = (unsigned int)v54; ; ++i )
      {
        if ( !v15 || v15 != (_DWORD *)a9 )
          invalid_parameter_noinfo();
        if ( i == a10 )
          break;
        v56 = i;
        v57 = i >> 2;
        a4 = i & 3;
        if ( !v15 )
        {
          invalid_parameter_noinfo();
          v56 = i;
        }
        if ( v56 >= v15[4] + v15[3] )
          invalid_parameter_noinfo();
        v58 = v15[2];
        if ( v58 <= v57 )
          v57 -= v58;
        sub_1006FCE0((int)this, (_DWORD *)(*(_DWORD *)(v15[1] + 4 * v57) + 4 * a4));
        if ( i >= v15[4] + v15[3] )
          invalid_parameter_noinfo();
      }
      v59 = 0;
      a4 = 0;
      while ( v59 < v93 )
      {
        v60 = this[3];
        if ( v60 > v60 + this[4] )
          invalid_parameter_noinfo();
        v61 = this[3];
        v62 = v60 + v59 + v95;
        if ( v62 > v61 + this[4] || v62 < v61 )
          invalid_parameter_noinfo();
        a10 = v62 & 3;
        v63 = v62 >> 2;
        if ( v62 >= this[3] + this[4] )
          invalid_parameter_noinfo();
        v64 = this[2];
        if ( v64 <= v63 )
          v63 -= v64;
        sub_1006FCE0((int)this, (_DWORD *)(*(_DWORD *)(this[1] + 4 * v63) + 4 * a10));
        ++a4;
        v15 = a6;
        v59 = a4;
      }
      v65 = this[3];
      if ( v65 > v65 + this[4] )
        invalid_parameter_noinfo();
      v66 = this[3];
      v67 = v95 + v65;
      if ( v67 > v66 + this[4] || v67 < v66 )
        invalid_parameter_noinfo();
      v86 = a7;
      v85 = a7;
      v84 = a7;
      return sub_10057A50(&a5, 0, v15, (unsigned int)a7, 0, (int)v15, v94, 0, this, v67);
    }
  }
  else
  {
    v97 = 0;
    if ( v95 >= v16 )
    {
      while ( 1 )
      {
        a4 = v16;
        v35 = v16 == 0;
        v36 = this[3];
        if ( v35 )
          break;
        v37 = v36 + this[4];
        v88 = 0;
        if ( v36 > v37 )
          invalid_parameter_noinfo();
        v89 = this;
        i = v36;
        v38 = (_DWORD *)sub_10057780(&v88, v94 - 1);
        sub_1006FC60((int)this, v38);
        v16 = a4 - 1;
      }
      if ( v36 > v36 + this[4] )
        invalid_parameter_noinfo();
      v39 = this[3];
      v40 = v94 + v36;
      if ( v40 > v39 + this[4] || v40 < v39 )
        invalid_parameter_noinfo();
      v84 = 0;
      v85 = this;
      v86 = (_DWORD *)v40;
      v41 = this[3] + this[4];
      v42 = v82;
      a4 = (unsigned int)v82;
      if ( v40 + v95 > v41 || v40 + v95 < this[3] )
      {
        invalid_parameter_noinfo();
        v42 = (int *)a4;
      }
      v42[2] = v40 + v95;
      v43 = v94;
      *v42 = 0;
      v42[1] = (int)this;
      v44 = this[3];
      v45 = v43 + v40;
      v46 = v44 + this[4];
      a4 = (unsigned int)v81;
      if ( v45 > v46 || v45 < v44 )
        invalid_parameter_noinfo();
      v47 = a4;
      *(_DWORD *)a4 = 0;
      *(_DWORD *)(v47 + 4) = this;
      *(_DWORD *)(v47 + 8) = v45;
      sub_10058580(&a2, v81[0], (_DWORD *)v81[1], v81[2], v82[0], v82[1], v83, (int)v84, v85, (unsigned int)v86);
      v48 = this[3];
      v49 = v48 + this[4];
      a4 = v48;
      if ( v48 > v49 )
        invalid_parameter_noinfo();
      v50 = this[3];
      v51 = v95 + a4;
      v52 = v95 + a4 <= v50 + this[4];
      v91 = (int *)&v84;
      a4 += v95;
      if ( !v52 || v51 < v50 )
        invalid_parameter_noinfo();
      v86 = (_DWORD *)a4;
      v83 = a10;
      a4 = (unsigned int)v82;
      a10 = (unsigned int)v81;
      return sub_10058580(&a5, 0, v15, (unsigned int)a7, 0, a9, v83, 0, this, (unsigned int)v86);
    }
    else
    {
      v17 = v16 - v95;
      a4 = v16 - v95;
      if ( !v15 )
      {
        invalid_parameter_noinfo();
        v17 = a4;
      }
      v18 = v15[3];
      v19 = (unsigned int)a7 + v17;
      v20 = v18 + v15[4];
      v93 = v19;
      if ( v19 > v20 || v19 < v18 )
      {
        invalid_parameter_noinfo();
        v19 = v93;
      }
      i = v19;
      while ( 1 )
      {
        if ( !v15 )
          invalid_parameter_noinfo();
        if ( a7 == (_DWORD *)i )
          break;
        if ( !v15 )
          invalid_parameter_noinfo();
        if ( i <= v15[3] )
          invalid_parameter_noinfo();
        v21 = ((_BYTE)i - 1) & 3;
        v22 = (i - 1) >> 2;
        v23 = --i < v15[3] + v15[4];
        a4 = v21;
        if ( !v23 )
          invalid_parameter_noinfo();
        v24 = v15[2];
        if ( v24 <= v22 )
          v22 -= v24;
        sub_1006FC60((int)this, (_DWORD *)(*(_DWORD *)(v15[1] + 4 * v22) + 4 * a4));
        v16 = v94;
      }
      a4 = v95;
      while ( 1 )
      {
        v25 = this[4];
        if ( !a4 )
          break;
        v26 = this[3];
        if ( v26 > v26 + v25 )
          invalid_parameter_noinfo();
        v27 = this[3];
        v28 = v26 + v94 - 1;
        if ( v28 > v27 + this[4] || v28 < v27 )
          invalid_parameter_noinfo();
        v95 = v28 & 3;
        v29 = v28 >> 2;
        if ( v28 >= this[3] + this[4] )
          invalid_parameter_noinfo();
        v30 = this[2];
        if ( v30 <= v29 )
          v29 -= v30;
        sub_1006FC60((int)this, (_DWORD *)(*(_DWORD *)(this[1] + 4 * v29) + 4 * v95));
        --a4;
        v15 = a6;
        v16 = v94;
      }
      a7 = (_DWORD *)this[3];
      v31 = (unsigned int)a7;
      if ( v31 > v31 + v25 )
      {
        invalid_parameter_noinfo();
        v31 = (unsigned int)a7;
      }
      v32 = this[3];
      v33 = v31 + v16;
      if ( v33 > v32 + this[4] || v33 < v32 )
        invalid_parameter_noinfo();
      v86 = a7;
      v85 = a7;
      v84 = a7;
      return sub_10057A50(&a5, 0, v15, v93, 0, a9, a10, 0, this, v33);
    }
  }
}
