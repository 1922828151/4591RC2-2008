/*
 * func-name: sub_10005D30
 * func-address: 0x10005d30
 * callers: 0x10006360
 * callees: none
 */

int __thiscall sub_10005D30(int *this)
{
  unsigned int v2; // ebp
  int v3; // edx
  _BYTE *v4; // ecx
  int v5; // ebx
  _DWORD *v6; // edx
  unsigned int v7; // eax
  _DWORD *v8; // edi
  unsigned int v9; // ecx
  unsigned int v10; // eax
  int v11; // eax
  _DWORD *v12; // ecx
  _DWORD *v13; // ebx
  _DWORD *v14; // eax
  _DWORD *i; // edx
  int v16; // ecx
  _DWORD *v17; // ecx
  int v18; // edx
  _DWORD *v19; // eax
  unsigned int v20; // eax
  int v21; // edi
  int v22; // eax
  int v23; // eax
  signed int j; // eax
  int v25; // edx
  int v26; // eax
  int v27; // ecx
  _DWORD *v28; // eax
  int v29; // ecx
  int v30; // ecx
  int v31; // eax
  _DWORD *v32; // edi
  int v33; // ecx
  unsigned int v34; // eax
  unsigned int v35; // ebx
  unsigned int v36; // edx
  unsigned int v37; // eax
  int v38; // eax
  _DWORD *v39; // ecx
  _DWORD *v40; // ebx
  _DWORD *v41; // eax
  _DWORD *k; // edx
  _DWORD *v43; // edi
  _DWORD *v44; // edx
  _DWORD *v45; // ecx
  int v46; // edx
  _DWORD *v47; // eax
  int v48; // eax
  unsigned int v49; // eax
  int v50; // edx
  int v51; // edi
  int v52; // eax
  int v53; // eax
  unsigned int v54; // eax
  signed int m; // ecx
  _DWORD *v56; // edx
  _DWORD *v57; // edi
  int v58; // edx
  unsigned int v59; // ecx
  unsigned int v60; // ebp
  unsigned int v61; // eax
  unsigned int v62; // ecx
  unsigned int v63; // ecx
  unsigned int v64; // eax
  int v65; // edi
  int v66; // eax
  _DWORD *v67; // ecx
  _DWORD *v68; // ebx
  _DWORD *v69; // eax
  _DWORD *v70; // edx
  int v71; // ecx
  _DWORD *v72; // ecx
  int v73; // ebx
  _DWORD *v74; // eax
  int v75; // eax
  unsigned int v76; // eax
  int v77; // edx
  int v78; // edi
  int v79; // eax
  int v80; // eax
  int result; // eax
  int *v82; // edx
  int v83; // ecx
  int v84; // ebx
  _DWORD *v85; // edi
  int v86; // ecx
  int v87; // ecx
  int v88; // ebx
  _DWORD *v89; // edi
  int v90; // ecx
  int v91; // ecx
  int v92; // ebx
  _DWORD *v93; // edi
  int v94; // ecx
  int v95; // edx
  int v96; // ebx
  int v97; // ecx
  int v98; // [esp+24h] [ebp-10h]
  unsigned int v99; // [esp+28h] [ebp-Ch]
  unsigned int v100; // [esp+28h] [ebp-Ch]
  int v101; // [esp+28h] [ebp-Ch]
  unsigned int v102; // [esp+2Ch] [ebp-8h]
  int v103; // [esp+30h] [ebp-4h]
  int v104; // [esp+30h] [ebp-4h]
  int v105; // [esp+30h] [ebp-4h]

  v2 = (*(_DWORD *)(this[179] + 4) - *(_DWORD *)this[179]) / 12;
  v3 = (unsigned __int64)(2021161081LL * (*(_DWORD *)(this[180] + 4) - *(_DWORD *)this[180])) >> 32;
  v4 = (_BYTE *)this[1];
  v5 = (v3 >> 5) + ((unsigned int)v3 >> 31);
  v6 = (_DWORD *)*this;
  v7 = (int)&v4[-*this] >> 2;
  v98 = v5;
  if ( v2 <= v7 )
  {
    if ( v2 < v7 )
      this[1] = (int)&v4[-4 * ((v4 - (_BYTE *)&v6[v2]) >> 2)];
  }
  else
  {
    v99 = v2 - v7;
    v8 = v4;
    if ( v2 != v7 )
    {
      if ( v6 )
        v9 = (this[2] - (int)v6) >> 2;
      else
        v9 = 0;
      if ( v9 < v2 )
      {
        v103 = v8 - v6;
        if ( v6 )
          v10 = (this[2] - (int)v6) >> 2;
        else
          v10 = 0;
        if ( v10 < 2 * v2 )
        {
          v11 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                  dword_100580A0,
                  8 * v2,
                  289);
          v12 = (_DWORD *)this[1];
          v13 = (_DWORD *)v11;
          v14 = (_DWORD *)*this;
          for ( i = v13; v14 != v12; ++i )
            *i = *v14++;
          if ( *this )
            (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, *this);
          v16 = (this[1] - *this) >> 2;
          this[2] = (int)&v13[2 * v2];
          this[1] = (int)&v13[v16];
          *this = (int)v13;
        }
        v8 = (_DWORD *)(*this + 4 * v103);
      }
      v17 = (_DWORD *)this[1];
      v18 = 4 * v99;
      v19 = v8;
      if ( v8 != v17 )
      {
        do
        {
          v19[v99] = *v19;
          ++v19;
        }
        while ( v19 != v17 );
        v18 = 4 * v99;
      }
      if ( v99 )
        memset(v8, 0, 4 * v99);
      this[1] += v18;
      v5 = v98;
    }
  }
  if ( *this == this[1] )
  {
    if ( *this )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, *this);
    *this = 0;
    this[1] = 0;
    this[2] = 0;
  }
  v20 = this[1];
  if ( this[2] > v20 )
  {
    v21 = (int)(v20 - *this) >> 2;
    v22 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 16))(
            dword_100580A0,
            *this,
            4 * ((this[1] - *this) >> 2));
    v5 = v98;
    *this = v22;
    v23 = v22 + 4 * v21;
    this[1] = v23;
    this[2] = v23;
  }
  for ( j = 0; j < (int)v2; ++j )
    *(_DWORD *)(*this + 4 * j) = 0;
  if ( v5 > 0 )
  {
    v25 = 0;
    do
    {
      v26 = *(_DWORD *)this[180];
      v27 = *(_DWORD *)(v26 + v25);
      v28 = (_DWORD *)(v25 + v26);
      if ( v27 >= 0 )
        ++*(_DWORD *)(*this + 4 * v27);
      v29 = v28[1];
      if ( v29 >= 0 )
        ++*(_DWORD *)(*this + 4 * v29);
      v30 = v28[2];
      if ( v30 >= 0 )
        ++*(_DWORD *)(*this + 4 * v30);
      v31 = v28[3];
      if ( v31 >= 0 )
        ++*(_DWORD *)(*this + 4 * v31);
      v25 += 68;
      --v5;
    }
    while ( v5 );
  }
  v32 = (_DWORD *)this[6];
  v33 = this[5];
  v34 = ((int)v32 - v33) >> 2;
  if ( v2 <= v34 )
  {
    if ( v2 < v34 )
      this[6] = (int)&v32[-((int)((int)v32 - v33 + -4 * v2) >> 2)];
  }
  else
  {
    v35 = v2 - v34;
    v100 = v2 - v34;
    if ( v2 != v34 )
    {
      if ( v33 )
        v36 = (this[7] - v33) >> 2;
      else
        v36 = 0;
      if ( v36 < v2 )
      {
        v104 = ((int)v32 - v33) >> 2;
        if ( v33 )
          v37 = (this[7] - v33) >> 2;
        else
          v37 = 0;
        if ( v37 < 2 * v2 )
        {
          v38 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                  dword_100580A0,
                  8 * v2,
                  289);
          v39 = (_DWORD *)this[6];
          v40 = (_DWORD *)v38;
          v41 = (_DWORD *)this[5];
          for ( k = v40; v41 != v39; ++k )
            *k = *v41++;
          if ( this[5] )
            (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[5]);
          v43 = &v40[2 * v2];
          v44 = &v40[(this[6] - this[5]) >> 2];
          this[5] = (int)v40;
          v35 = v100;
          this[7] = (int)v43;
          this[6] = (int)v44;
        }
        v32 = (_DWORD *)(this[5] + 4 * v104);
      }
      v45 = (_DWORD *)this[6];
      v46 = 4 * v35;
      v47 = v32;
      if ( v32 != v45 )
      {
        do
        {
          v47[v35] = *v47;
          ++v47;
        }
        while ( v47 != v45 );
        v46 = 4 * v35;
        v35 = v100;
      }
      if ( v35 )
        memset(v32, 0, 4 * v35);
      this[6] += v46;
    }
  }
  v48 = this[5];
  if ( v48 == this[6] )
  {
    if ( v48 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[5]);
    this[5] = 0;
    this[6] = 0;
    this[7] = 0;
  }
  v49 = this[6];
  if ( this[7] > v49 )
  {
    v50 = this[5];
    v51 = (int)(v49 - v50) >> 2;
    v52 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 16))(
            dword_100580A0,
            v50,
            4 * ((this[6] - v50) >> 2));
    this[5] = v52;
    v53 = v52 + 4 * v51;
    this[6] = v53;
    this[7] = v53;
  }
  v54 = 0;
  for ( m = 0; m < (int)v2; *v56 = 0 )
  {
    *(_DWORD *)(this[5] + 4 * m) = v54;
    v54 += *(_DWORD *)(*this + 4 * m);
    v56 = (_DWORD *)(*this + 4 * m++);
  }
  v57 = (_DWORD *)this[11];
  v58 = this[10];
  v59 = ((int)v57 - v58) >> 2;
  if ( v54 <= v59 )
  {
    if ( v54 < v59 )
      this[11] = (int)&v57[-((int)((int)v57 - v58 + -4 * v54) >> 2)];
  }
  else
  {
    v60 = v54 - v59;
    v102 = v54 - v59;
    if ( v54 != v59 )
    {
      if ( v58 )
        v61 = (this[12] - v58) >> 2;
      else
        v61 = 0;
      v62 = v60 + v59;
      if ( v61 < v62 )
      {
        v63 = 2 * v62;
        v105 = ((int)v57 - v58) >> 2;
        if ( v58 )
          v64 = (this[12] - v58) >> 2;
        else
          v64 = 0;
        if ( v64 < v63 )
        {
          v65 = v63;
          v66 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                  dword_100580A0,
                  4 * v63,
                  289);
          v67 = (_DWORD *)this[11];
          v68 = (_DWORD *)v66;
          v69 = (_DWORD *)this[10];
          v70 = v68;
          if ( v69 != v67 )
          {
            do
              *v70++ = *v69++;
            while ( v69 != v67 );
            v60 = v102;
          }
          if ( this[10] )
            (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[10]);
          v71 = (this[11] - this[10]) >> 2;
          this[12] = (int)&v68[v65];
          this[11] = (int)&v68[v71];
          this[10] = (int)v68;
        }
        v57 = (_DWORD *)(this[10] + 4 * v105);
      }
      v72 = (_DWORD *)this[11];
      v73 = 4 * v60;
      v74 = v57;
      if ( v57 != v72 )
      {
        do
        {
          v74[v60] = *v74;
          ++v74;
        }
        while ( v74 != v72 );
        v60 = v102;
      }
      if ( v60 )
        memset(v57, 0, 4 * v60);
      this[11] += v73;
    }
  }
  v75 = this[10];
  if ( v75 == this[11] )
  {
    if ( v75 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[10]);
    this[10] = 0;
    this[11] = 0;
    this[12] = 0;
  }
  v76 = this[11];
  if ( this[12] > v76 )
  {
    v77 = this[10];
    v78 = (int)(v76 - v77) >> 2;
    v79 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 16))(
            dword_100580A0,
            v77,
            4 * ((this[11] - v77) >> 2));
    this[10] = v79;
    v80 = v79 + 4 * v78;
    this[11] = v80;
    this[12] = v80;
  }
  result = 0;
  if ( v98 > 0 )
  {
    v101 = 0;
    do
    {
      v82 = (int *)(v101 + *(_DWORD *)this[180]);
      v83 = *v82;
      if ( *v82 >= 0 )
      {
        v84 = *(_DWORD *)(*this + 4 * v83);
        v85 = (_DWORD *)(*this + 4 * v83);
        v86 = v84 + *(_DWORD *)(this[5] + 4 * v83);
        *v85 = v84 + 1;
        *(_DWORD *)(this[10] + 4 * v86) = result;
      }
      v87 = v82[1];
      if ( v87 >= 0 )
      {
        v88 = *(_DWORD *)(*this + 4 * v87);
        v89 = (_DWORD *)(*this + 4 * v87);
        v90 = v88 + *(_DWORD *)(this[5] + 4 * v87);
        *v89 = v88 + 1;
        *(_DWORD *)(this[10] + 4 * v90) = result;
      }
      v91 = v82[2];
      if ( v91 >= 0 )
      {
        v92 = *(_DWORD *)(*this + 4 * v91);
        v93 = (_DWORD *)(*this + 4 * v91);
        v94 = v92 + *(_DWORD *)(this[5] + 4 * v91);
        *v93 = v92 + 1;
        *(_DWORD *)(this[10] + 4 * v94) = result;
      }
      v95 = v82[3];
      if ( v95 >= 0 )
      {
        v96 = *(_DWORD *)(*this + 4 * v95);
        v97 = v96 + *(_DWORD *)(this[5] + 4 * v95);
        *(_DWORD *)(*this + 4 * v95) = v96 + 1;
        *(_DWORD *)(this[10] + 4 * v97) = result;
      }
      v101 += 68;
      ++result;
    }
    while ( result < v98 );
  }
  return result;
}
