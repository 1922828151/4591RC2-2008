/*
 * func-name: sub_1005A2A0
 * func-address: 0x1005a2a0
 * callers: 0x1005b3f0
 * callees: 0x10057590, 0x10057780, 0x100577f0, 0x10058580, 0x10059a50, 0x10059ad0, 0x1006cf70, 0x1006e0b0, 0x101a2522
 */

void __thiscall sub_1005A2A0(_DWORD *this, int a2, _DWORD *a3, unsigned int i, unsigned int a5, unsigned int *a6)
{
  unsigned int v7; // edi
  unsigned int v8; // eax
  unsigned int v9; // ebx
  int *v10; // ecx
  unsigned int m; // edi
  unsigned int v12; // edi
  unsigned int v13; // edx
  unsigned int v14; // eax
  unsigned int v15; // edi
  unsigned int v16; // ebx
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // edi
  unsigned int v20; // eax
  unsigned int *v21; // ebx
  unsigned int k; // ebx
  unsigned int v23; // edi
  unsigned int v24; // eax
  _DWORD *v25; // eax
  unsigned int v26; // eax
  unsigned int *v27; // edi
  unsigned int v28; // ecx
  unsigned int v29; // eax
  int v30; // edx
  unsigned int v31; // ecx
  unsigned int v32; // eax
  unsigned int v33; // edi
  unsigned int v34; // edx
  unsigned int v35; // eax
  unsigned int *v36; // ebx
  unsigned int v37; // edi
  unsigned int v38; // eax
  unsigned int v39; // edi
  unsigned int v40; // ebx
  unsigned int v41; // edi
  unsigned int j; // ebx
  unsigned int v43; // ebx
  unsigned int v44; // edi
  unsigned int v45; // eax
  unsigned int v46; // edi
  unsigned int v47; // edx
  unsigned int v48; // ebx
  unsigned int v49; // eax
  unsigned int v50; // ebx
  unsigned int v51; // eax
  unsigned int v52; // ebx
  unsigned int v53; // eax
  unsigned int *v54; // edi
  unsigned int *v55; // eax
  unsigned int v56; // edi
  unsigned int v57; // ecx
  _DWORD *v58; // eax
  unsigned int v59; // eax
  unsigned int v60; // edx
  unsigned int v61; // eax
  unsigned int *v62; // ebx
  unsigned int v63; // edx
  unsigned int v64; // eax
  unsigned int v65; // ecx
  unsigned int v66; // ebx
  unsigned int v67; // edx
  unsigned int v68; // eax
  _BYTE v69[12]; // [esp-24h] [ebp-5Ch] BYREF
  int v70; // [esp-18h] [ebp-50h] BYREF
  unsigned int v71; // [esp-14h] [ebp-4Ch]
  unsigned int v72; // [esp-10h] [ebp-48h]
  _DWORD *v73; // [esp-Ch] [ebp-44h] BYREF
  unsigned int *v74; // [esp-8h] [ebp-40h]
  unsigned int *p_i; // [esp-4h] [ebp-3Ch]
  int v76; // [esp+0h] [ebp-38h] BYREF
  _DWORD v77[3]; // [esp+Ch] [ebp-2Ch] BYREF
  int *v78; // [esp+18h] [ebp-20h]
  _DWORD *v79; // [esp+1Ch] [ebp-1Ch]
  unsigned int v80; // [esp+20h] [ebp-18h]
  unsigned int v81; // [esp+24h] [ebp-14h]
  int *v82; // [esp+28h] [ebp-10h]
  int v83; // [esp+34h] [ebp-4h]

  v7 = this[3];
  v8 = v7 + this[4];
  v82 = &v76;
  v79 = this;
  if ( v7 > v8 )
    invalid_parameter_noinfo();
  if ( !a3 || a3 != this )
    invalid_parameter_noinfo();
  v9 = i - v7;
  v81 = i - v7;
  v10 = (int *)this[4];
  v80 = (unsigned int)v10 - (i - v7);
  v78 = v10;
  if ( i - v7 >= v80 )
  {
    v40 = a5;
    v41 = v80;
    v83 = 2;
    if ( v80 >= a5 )
    {
      for ( i = 0; ; ++i )
      {
        v56 = this[3];
        if ( i >= v40 )
          break;
        v57 = v56 + this[4];
        v77[0] = 0;
        if ( v56 > v57 )
          invalid_parameter_noinfo();
        v77[1] = this;
        v77[2] = v56;
        v58 = (_DWORD *)sub_10057780(v77, v81 + v80 + i - v40);
        sub_10059AD0((int)this, v58);
      }
      if ( v56 > v56 + this[4] )
        invalid_parameter_noinfo();
      v59 = this[3];
      v60 = v59 + this[4];
      i = v56 + v81;
      if ( v56 + v81 > v60 || v56 + v81 < v59 )
        invalid_parameter_noinfo();
      v61 = this[3];
      a6 = (unsigned int *)*a6;
      v62 = (unsigned int *)(i + v80);
      v63 = v61 + this[4];
      v78 = (int *)&v73;
      if ( i + v80 > v63 || (unsigned int)v62 < v61 )
        invalid_parameter_noinfo();
      v73 = 0;
      v74 = this;
      p_i = v62;
      v64 = this[3];
      if ( (unsigned int)v62 > v64 + this[4] || (unsigned int)v62 < v64 )
        invalid_parameter_noinfo();
      v65 = this[3];
      v66 = (unsigned int)v62 - a5;
      v67 = v65 + this[4];
      v78 = &v70;
      if ( v66 > v67 || v66 < v65 )
        invalid_parameter_noinfo();
      v72 = v66;
      v52 = i;
      v78 = (int *)v69;
      sub_1006E0B0(&a2, 0, this, i, 0, this, v72, v73, v74, p_i);
      v68 = this[3];
      v54 = (unsigned int *)(v52 + a5);
      if ( v52 + a5 > v68 + this[4] || (unsigned int)v54 < v68 )
        invalid_parameter_noinfo();
      v55 = (unsigned int *)&a6;
    }
    else
    {
      for ( j = a5 - v80; j; --j )
        sub_10059AD0((int)this, a6);
      v43 = 0;
      i = 0;
      while ( v43 < v41 )
      {
        v44 = this[3];
        if ( v44 > v44 + this[4] )
          invalid_parameter_noinfo();
        v45 = this[3];
        v46 = v43 + v81 + v44;
        if ( v46 > v45 + this[4] || v46 < v45 )
          invalid_parameter_noinfo();
        v47 = this[3] + this[4];
        v48 = v46 >> 2;
        a5 = v46 & 3;
        if ( v46 >= v47 )
          invalid_parameter_noinfo();
        v49 = this[2];
        if ( v49 <= v48 )
          v48 -= v49;
        sub_10059AD0((int)this, (_DWORD *)(*(_DWORD *)(this[1] + 4 * v48) + 4 * a5));
        v43 = ++i;
        v41 = v80;
      }
      v50 = this[3];
      if ( v50 > v50 + this[4] )
        invalid_parameter_noinfo();
      v51 = this[3];
      v52 = v81 + v50;
      if ( v52 > v51 + this[4] || v52 < v51 )
        invalid_parameter_noinfo();
      v53 = this[3];
      v54 = (unsigned int *)(v52 + v41);
      if ( (unsigned int)v54 > v53 + this[4] || (unsigned int)v54 < v53 )
        invalid_parameter_noinfo();
      v55 = a6;
    }
    p_i = v55;
    v72 = 0;
    v73 = this;
    v74 = v54;
    v71 = v52;
  }
  else
  {
    v83 = 0;
    if ( v9 >= a5 )
    {
      for ( k = a5; ; --k )
      {
        v23 = this[3];
        if ( !k )
          break;
        v24 = v23 + this[4];
        a2 = 0;
        if ( v23 > v24 )
          invalid_parameter_noinfo();
        a3 = this;
        i = v23;
        v25 = (_DWORD *)sub_10057780(&a2, a5 - 1);
        sub_10059A50((int)this, v25);
      }
      if ( v23 > v23 + this[4] )
        invalid_parameter_noinfo();
      v26 = this[3];
      v27 = (unsigned int *)(a5 + v23);
      if ( (unsigned int)v27 > v26 + this[4] || (unsigned int)v27 < v26 )
        invalid_parameter_noinfo();
      v28 = *a6;
      v73 = 0;
      v74 = this;
      p_i = v27;
      v29 = (unsigned int)v27 + v81;
      v30 = this[4];
      i = v28;
      v31 = this[3];
      a6 = (unsigned int *)((char *)v27 + v81);
      if ( (unsigned int)v27 + v81 > v31 + v30 || v29 < v31 )
      {
        invalid_parameter_noinfo();
        v29 = (unsigned int)a6;
      }
      v70 = 0;
      v71 = (unsigned int)this;
      v72 = v29;
      v32 = this[3];
      v33 = (unsigned int)v27 + a5;
      v34 = v32 + this[4];
      v78 = (int *)v69;
      if ( v33 > v34 || v33 < v32 )
        invalid_parameter_noinfo();
      sub_10058580(v77, 0, this, v33, v70, v71, v72, (int)v73, v74, (unsigned int)p_i);
      v35 = this[3];
      v36 = a6;
      if ( (unsigned int)a6 > v35 + this[4] || (unsigned int)a6 < v35 )
        invalid_parameter_noinfo();
      v37 = this[3];
      if ( v37 > v37 + this[4] )
        invalid_parameter_noinfo();
      v38 = this[3];
      v39 = v81 + v37;
      if ( v39 > v38 + this[4] || v39 < v38 )
        invalid_parameter_noinfo();
      p_i = &i;
      v72 = 0;
      v73 = this;
      v74 = v36;
      v71 = v39;
    }
    else
    {
      for ( m = a5 - v9; m; --m )
        sub_10059A50((int)this, a6);
      i = v9;
      while ( 1 )
      {
        v12 = this[3];
        v13 = v12 + this[4];
        if ( !i )
          break;
        if ( v12 > v13 )
          invalid_parameter_noinfo();
        v14 = this[3];
        v15 = v12 + a5 - 1;
        if ( v15 > v14 + this[4] || v15 < v14 )
          invalid_parameter_noinfo();
        v80 = v15 & 3;
        v16 = v15 >> 2;
        if ( v15 >= this[3] + this[4] )
          invalid_parameter_noinfo();
        v17 = this[2];
        if ( v17 <= v16 )
          v16 -= v17;
        sub_10059A50((int)this, (_DWORD *)(*(_DWORD *)(this[1] + 4 * v16) + 4 * v80));
        --i;
        v9 = v81;
      }
      if ( v12 > v13 )
        invalid_parameter_noinfo();
      v18 = this[3];
      v19 = a5 + v12;
      if ( v19 > v18 + this[4] || v19 < v18 )
        invalid_parameter_noinfo();
      v20 = this[3];
      v21 = (unsigned int *)(v19 + v9);
      if ( (unsigned int)v21 > v20 + this[4] || (unsigned int)v21 < v20 )
        invalid_parameter_noinfo();
      p_i = a6;
      v72 = 0;
      v73 = this;
      v74 = v21;
      v71 = v19;
    }
  }
  sub_100577F0(0, this, v71, v72, (int)v73, (int)v74, p_i);
}
