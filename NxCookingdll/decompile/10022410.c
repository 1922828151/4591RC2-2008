/*
 * func-name: sub_10022410
 * func-address: 0x10022410
 * callers: 0x10022410, 0x10022c20
 * callees: 0x10014910, 0x10015980, 0x100159a0, 0x10015a80, 0x10020e00, 0x10022410, 0x10034f10, 0x10035300
 */

char __thiscall sub_10022410(_DWORD *this)
{
  int v2; // eax
  unsigned int v3; // edi
  int v4; // ebx
  int v5; // ebp
  int (__stdcall ***v6)(size_t, int); // eax
  int (__stdcall ***v7)(size_t, int); // eax
  int (__stdcall ***v8)(size_t, int); // eax
  int v9; // ebp
  int (__stdcall ***v10)(size_t, int); // eax
  int v11; // eax
  _DWORD *v12; // ebx
  int v13; // eax
  unsigned int v14; // edi
  int v15; // ecx
  unsigned int v16; // edi
  unsigned int v17; // ebp
  unsigned int v18; // eax
  int v19; // edi
  unsigned int *v20; // eax
  int (__stdcall ***v21)(size_t, int); // eax
  const void *v22; // ebp
  int (__stdcall ***v24)(size_t, int); // eax
  int (__stdcall ***v25)(size_t, int); // eax
  int (__stdcall ***v26)(size_t, int); // eax
  unsigned __int8 *v27; // ecx
  unsigned int v28; // ebx
  int v29; // eax
  int v30; // edx
  int v31; // eax
  int (__stdcall ***v32)(size_t, int); // eax
  int (__stdcall ***v33)(size_t, int); // eax
  int v34; // edx
  int (__stdcall ***v35)(size_t, int); // eax
  unsigned int *v36; // eax
  unsigned int v37; // ebx
  int (__stdcall ***v38)(size_t, int); // eax
  int (__stdcall ***v39)(size_t, int); // eax
  unsigned int i; // eax
  unsigned int v41; // ebp
  int v42; // eax
  int v43; // edx
  int v44; // eax
  int v45; // ecx
  int v46; // ebx
  int (__stdcall ***v47)(size_t, int); // eax
  int (__stdcall ***v48)(size_t, int); // eax
  int (__stdcall ***v49)(size_t, int); // eax
  int (__stdcall ***v50)(size_t, int); // eax
  int (__stdcall ***v51)(size_t, int); // eax
  int (__stdcall ***v52)(size_t, int); // eax
  int v53; // edx
  unsigned __int16 *v54; // ecx
  unsigned int v55; // edx
  unsigned int j; // ecx
  _DWORD *v57; // eax
  int v58; // ebp
  int (__stdcall ***v59)(size_t, int); // eax
  int (__stdcall ***v60)(size_t, int); // eax
  int v61; // eax
  unsigned __int16 *v62; // eax
  unsigned int v63; // ecx
  unsigned int k; // ecx
  int v65; // eax
  int (__stdcall ***v66)(size_t, int); // eax
  int (__stdcall ***v67)(size_t, int); // eax
  int (__stdcall ***v68)(size_t, int); // eax
  int v69; // eax
  int v70; // edi
  int (__stdcall ***v71)(size_t, int); // eax
  int v72; // edx
  unsigned int v73; // ebp
  _DWORD *v74; // ebx
  unsigned __int8 *v75; // edi
  int v76; // ecx
  float *v77; // eax
  float *v78; // ecx
  double v79; // st5
  double v80; // st4
  double v81; // st3
  long double v82; // st2
  long double v83; // st2
  long double v84; // st2
  float *v85; // eax
  unsigned int v86; // [esp+7Ch] [ebp-6Ch]
  unsigned __int8 *v87; // [esp+80h] [ebp-68h]
  unsigned __int8 *v88; // [esp+84h] [ebp-64h]
  int v89; // [esp+88h] [ebp-60h]
  unsigned int v90; // [esp+88h] [ebp-60h]
  unsigned int v91; // [esp+88h] [ebp-60h]
  unsigned int v92; // [esp+88h] [ebp-60h]
  unsigned int v93; // [esp+8Ch] [ebp-5Ch]
  unsigned __int8 *v94; // [esp+8Ch] [ebp-5Ch]
  unsigned int v95; // [esp+90h] [ebp-58h]
  unsigned __int8 *v96; // [esp+94h] [ebp-54h]
  int v97; // [esp+94h] [ebp-54h]
  int v98; // [esp+98h] [ebp-50h]
  unsigned __int8 *v99; // [esp+98h] [ebp-50h]
  unsigned int *v100; // [esp+9Ch] [ebp-4Ch]
  const void *v101; // [esp+9Ch] [ebp-4Ch]
  _DWORD *v102; // [esp+A0h] [ebp-48h]
  int v103; // [esp+A0h] [ebp-48h]
  unsigned int v104; // [esp+A4h] [ebp-44h]
  int v105; // [esp+A4h] [ebp-44h]
  int v106; // [esp+A8h] [ebp-40h]
  int v107; // [esp+ACh] [ebp-3Ch]
  int v108; // [esp+ACh] [ebp-3Ch]
  unsigned int v109; // [esp+B0h] [ebp-38h]
  int v110; // [esp+B4h] [ebp-34h]
  int v111; // [esp+BCh] [ebp-2Ch]
  int v112; // [esp+C0h] [ebp-28h]
  float v113; // [esp+C4h] [ebp-24h]
  float v114; // [esp+C8h] [ebp-20h]
  float v115; // [esp+CCh] [ebp-1Ch]
  unsigned int v116[6]; // [esp+D0h] [ebp-18h] BYREF

  if ( !*(_DWORD *)(this[1] + 36) )
    sub_10020E00(this);
  v2 = this[1];
  v3 = 0;
  v86 = *(_DWORD *)(v2 + 36);
  v95 = 0;
  if ( v86 )
  {
    v4 = 0;
    v5 = *(_DWORD *)(v2 + 36);
    do
    {
      if ( !*(_DWORD *)(v2 + 40) )
        sub_10020E00(this);
      v2 = this[1];
      v3 += *(unsigned __int16 *)(*(_DWORD *)(v2 + 40) + v4);
      v4 += 36;
      --v5;
    }
    while ( v5 );
    v95 = v3;
  }
  v6 = sub_10014910();
  v88 = (unsigned __int8 *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), unsigned int, int))**v6)(
                             v6,
                             4 * v3,
                             1);
  if ( !v88 )
    return 0;
  v7 = sub_10014910();
  v87 = (unsigned __int8 *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), unsigned int, int))**v7)(
                             v7,
                             4 * v3,
                             1);
  if ( !v87 )
    return 0;
  v8 = sub_10014910();
  v9 = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), unsigned int, int))**v8)(v8, 4 * v3, 1);
  v107 = v9;
  if ( !v9 )
    return 0;
  v10 = sub_10014910();
  v11 = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), unsigned int, int))**v10)(v10, 4 * v3, 1);
  v106 = v11;
  if ( !v11 )
    return 0;
  v12 = v88;
  v102 = (_DWORD *)v11;
  v96 = v87;
  v100 = (unsigned int *)v9;
  v93 = 0;
  if ( v86 )
  {
    v89 = 0;
    do
    {
      if ( !*(_DWORD *)(this[1] + 40) )
        sub_10020E00(this);
      v13 = *(_DWORD *)(this[1] + 40);
      v14 = *(unsigned __int16 *)(v13 + v89);
      v104 = v14;
      if ( !v13 )
        sub_10020E00(this);
      v15 = 0;
      v98 = *(_DWORD *)(*(_DWORD *)(this[1] + 40) + v89 + 4);
      if ( v14 )
      {
        do
        {
          v16 = *(unsigned __int8 *)(v98 + v15);
          v17 = v15 + 1;
          v18 = *(unsigned __int8 *)((v15 + 1) % v104 + v98);
          if ( v16 > v18 )
          {
            v19 = v18 ^ v16;
            v18 ^= v19;
            v16 = v18 ^ v19;
          }
          *v12 = v16;
          *(_DWORD *)v96 = v18;
          v96 += 4;
          *v100++ = v93;
          *v102 = v15++;
          ++v12;
          ++v102;
        }
        while ( v17 < v104 );
      }
      v89 += 36;
      ++v93;
    }
    while ( v93 < v86 );
    v3 = v95;
  }
  sub_10015980(v116);
  v20 = sub_10015A80(v116, v87, v3, 0);
  v90 = sub_10015A80(v20, v88, v3, 0)[1];
  *(_DWORD *)(this[1] + 52) = 0;
  v21 = sub_10014910();
  v22 = (const void *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), unsigned int, int))**v21)(v21, 2 * v3, 7);
  v101 = v22;
  if ( !v22 )
    goto LABEL_26;
  v24 = sub_10014910();
  v94 = (unsigned __int8 *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), unsigned int, int))**v24)(
                             v24,
                             4 * v3,
                             1);
  if ( !v94 )
    goto LABEL_26;
  v25 = sub_10014910();
  v99 = (unsigned __int8 *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), unsigned int, int))**v25)(
                             v25,
                             4 * v3,
                             1);
  if ( !v99 )
    goto LABEL_26;
  v26 = sub_10014910();
  v97 = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), unsigned int, int))**v26)(v26, 4 * v3, 1);
  if ( !v97 )
    goto LABEL_26;
  v105 = -1;
  v103 = -1;
  if ( v3 )
  {
    v27 = v94;
    v28 = v90 - (_DWORD)v94;
    v109 = v90 - (_DWORD)v94;
    v91 = v3;
    do
    {
      v29 = *(_DWORD *)&v27[v28];
      v110 = *(_DWORD *)(v107 + 4 * v29);
      v111 = *(_DWORD *)(v106 + 4 * v29);
      v30 = *(_DWORD *)&v88[4 * v29];
      v31 = *(_DWORD *)&v87[4 * v29];
      if ( v30 == v105 && v31 == v103 )
      {
        v22 = v101;
      }
      else
      {
        v22 = v101;
        *((_BYTE *)v101 + 2 * *(_DWORD *)(this[1] + 52)) = v30;
        v28 = v109;
        v105 = v30;
        *((_BYTE *)v101 + 2 * *(_DWORD *)(this[1] + 52) + 1) = v31;
        v103 = v31;
        ++*(_DWORD *)(this[1] + 52);
      }
      *(_DWORD *)v27 = v110;
      *(_DWORD *)&v27[v99 - v94] = v111;
      *(_DWORD *)&v27[v97 - (_DWORD)v94] = *(_DWORD *)(this[1] + 52) - 1;
      v27 += 4;
      --v91;
    }
    while ( v91 );
  }
  if ( *(_DWORD *)(this[1] + 56) )
  {
    v32 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD))(*v32)[3])(v32, *(_DWORD *)(this[1] + 56));
    *(_DWORD *)(this[1] + 56) = 0;
  }
  v33 = sub_10014910();
  *(_DWORD *)(this[1] + 56) = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v33)(
                                v33,
                                2 * *(_DWORD *)(this[1] + 52),
                                7);
  v34 = this[1];
  if ( !*(_DWORD *)(v34 + 56) )
    goto LABEL_26;
  memcpy_0(*(void **)(v34 + 56), v22, 2 * *(_DWORD *)(v34 + 52));
  v35 = sub_10014910();
  ((void (__thiscall *)(int (__stdcall ***)(size_t, int), const void *))(*v35)[3])(v35, v22);
  v36 = sub_10015A80(v116, v99, v3, 0);
  v37 = sub_10015A80(v36, v94, v3, 0)[1];
  v92 = v37;
  if ( *(_DWORD *)(this[1] + 48) )
  {
    v38 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD))(*v38)[3])(v38, *(_DWORD *)(this[1] + 48));
    *(_DWORD *)(this[1] + 48) = 0;
  }
  v39 = sub_10014910();
  *(_DWORD *)(this[1] + 48) = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), unsigned int, int))**v39)(
                                v39,
                                2 * v3,
                                50);
  for ( i = 0; i < v3; ++i )
    *(_WORD *)(*(_DWORD *)(this[1] + 48) + 2 * i) = *(_WORD *)(v97 + 4 * *(_DWORD *)(v37 + 4 * i));
  v41 = v86;
  v42 = this[1];
  v43 = *(_DWORD *)(v42 + 48);
  if ( v86 )
  {
    v44 = *(_DWORD *)(v42 + 40);
    v45 = 0;
    do
    {
      *(_DWORD *)(v44 + v45 + 8) = v43;
      v44 = *(_DWORD *)(this[1] + 40);
      v46 = *(unsigned __int16 *)(v44 + v45);
      v45 += 36;
      --v41;
      v43 += 2 * v46;
    }
    while ( v41 );
    v37 = v92;
  }
  v47 = sub_10014910();
  ((void (__thiscall *)(int (__stdcall ***)(size_t, int), int))(*v47)[3])(v47, v106);
  v48 = sub_10014910();
  ((void (__thiscall *)(int (__stdcall ***)(size_t, int), int))(*v48)[3])(v48, v107);
  v49 = sub_10014910();
  ((void (__thiscall *)(int (__stdcall ***)(size_t, int), unsigned __int8 *))(*v49)[3])(v49, v87);
  v50 = sub_10014910();
  ((void (__thiscall *)(int (__stdcall ***)(size_t, int), unsigned __int8 *))(*v50)[3])(v50, v88);
  if ( *(_DWORD *)(this[1] + 64) )
  {
    v51 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD))(*v51)[3])(v51, *(_DWORD *)(this[1] + 64));
    *(_DWORD *)(this[1] + 64) = 0;
  }
  v52 = sub_10014910();
  *(_DWORD *)(this[1] + 64) = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v52)(
                                v52,
                                8 * *(_DWORD *)(this[1] + 52),
                                8);
  v53 = this[1];
  if ( !*(_DWORD *)(v53 + 64) )
    goto LABEL_26;
  memset(*(void **)(v53 + 64), 0, 8 * *(_DWORD *)(v53 + 52));
  v54 = *(unsigned __int16 **)(this[1] + 48);
  if ( v3 )
  {
    v55 = v3;
    do
    {
      ++*(_WORD *)(*(_DWORD *)(this[1] + 64) + 8 * *v54++ + 2);
      --v55;
    }
    while ( v55 );
  }
  *(_DWORD *)(*(_DWORD *)(this[1] + 64) + 4) = 0;
  for ( j = 1; j < *(_DWORD *)(this[1] + 52); ++j )
    *(_DWORD *)(*(_DWORD *)(this[1] + 64) + 8 * j + 4) = *(_DWORD *)(*(_DWORD *)(this[1] + 64) + 8 * j - 4)
                                                       + *(unsigned __int16 *)(*(_DWORD *)(this[1] + 64) + 8 * j - 6);
  v57 = (_DWORD *)this[1];
  v58 = *(_DWORD *)(v57[16] + 8 * v57[13] - 4) + *(unsigned __int16 *)(v57[16] + 8 * v57[13] - 6);
  if ( v57[17] )
  {
    v59 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD))(*v59)[3])(v59, *(_DWORD *)(this[1] + 68));
    *(_DWORD *)(this[1] + 68) = 0;
  }
  v60 = sub_10014910();
  *(_DWORD *)(this[1] + 68) = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v60)(v60, v58, 52);
  v61 = this[1];
  if ( !*(_DWORD *)(v61 + 68) )
  {
LABEL_26:
    sub_100159A0((int)v116);
    return 0;
  }
  v62 = *(unsigned __int16 **)(v61 + 48);
  v63 = 0;
  if ( v3 )
  {
    while ( 1 )
    {
      *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(this[1] + 64) + 8 * *v62 + 4) + *(_DWORD *)(this[1] + 68)) = v94[4 * *(_DWORD *)(v37 + 4 * v63)];
      ++*(_DWORD *)(*(_DWORD *)(this[1] + 64) + 8 * *v62 + 4);
      ++v63;
      ++v62;
      if ( v63 >= v95 )
        break;
      v37 = v92;
    }
  }
  *(_DWORD *)(*(_DWORD *)(this[1] + 64) + 4) = 0;
  for ( k = 1; k < *(_DWORD *)(this[1] + 52); *(_DWORD *)(v65 + 4) = *(_DWORD *)(v65 - 4)
                                                                   + *(unsigned __int16 *)(v65 - 6) )
    v65 = *(_DWORD *)(this[1] + 64) + 8 * k++;
  v66 = sub_10014910();
  ((void (__thiscall *)(int (__stdcall ***)(size_t, int), int))(*v66)[3])(v66, v97);
  v67 = sub_10014910();
  ((void (__thiscall *)(int (__stdcall ***)(size_t, int), unsigned __int8 *))(*v67)[3])(v67, v99);
  v68 = sub_10014910();
  ((void (__thiscall *)(int (__stdcall ***)(size_t, int), unsigned __int8 *))(*v68)[3])(v68, v94);
  if ( !*(_DWORD *)(this[1] + 56) )
    sub_10022410(this);
  if ( !*(_DWORD *)(this[1] + 64) )
    sub_10022410(this);
  v69 = this[1];
  v70 = *(_DWORD *)(v69 + 64);
  if ( !*(_DWORD *)(v69 + 68) )
    sub_10022410(this);
  v112 = *(_DWORD *)(this[1] + 68);
  v71 = sub_10014910();
  *(_DWORD *)(this[1] + 60) = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v71)(
                                v71,
                                12 * *(_DWORD *)(this[1] + 52),
                                51);
  v72 = this[1];
  v73 = 0;
  if ( *(_DWORD *)(v72 + 52) )
  {
    v108 = 0;
    v74 = (_DWORD *)(v70 + 4);
    do
    {
      v75 = (unsigned __int8 *)(v112 + *v74);
      v76 = *(_DWORD *)(this[1] + 40);
      v77 = (float *)(v76 + 36 * v75[1] + 12);
      v78 = (float *)(v76 + 36 * *v75 + 12);
      v79 = *v77 + *v78;
      v113 = v79;
      v80 = v77[1] + v78[1];
      v114 = v80;
      v81 = v77[2] + v78[2];
      v115 = v81;
      v82 = v81 * v81 + v79 * v79 + v80 * v80;
      if ( 0.0 != v82 )
      {
        v83 = sqrt(v82);
        v113 = v79 * (1.0 / v83);
        v84 = 1.0 / v83;
        v114 = v80 * v84;
        v115 = v84 * v81;
      }
      v85 = (float *)(v108 + *(_DWORD *)(v72 + 60));
      *v85 = v113;
      v85[1] = v114;
      v85[2] = v115;
      v72 = this[1];
      ++v73;
      v74 += 2;
      v108 += 12;
    }
    while ( v73 < *(_DWORD *)(v72 + 52) );
  }
  sub_100159A0((int)v116);
  return 1;
}
