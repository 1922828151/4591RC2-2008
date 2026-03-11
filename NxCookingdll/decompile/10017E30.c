/*
 * func-name: sub_10017E30
 * func-address: 0x10017e30
 * callers: none
 * callees: 0x10014910, 0x10014950, 0x10014b50, 0x10017150, 0x100171d0, 0x100172e0, 0x10017320, 0x10017360, 0x100173f0, 0x100178f0, 0x10017d60, 0x10017da0, 0x10017de0, 0x10018330, 0x10018350, 0x100183e0, 0x10035300
 */

char __thiscall sub_10017E30(int this, _DWORD *a2)
{
  _DWORD *v2; // edi
  int (__stdcall ***v4)(size_t, int); // eax
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  int (__stdcall ***v7)(size_t, int); // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  int *v14; // ecx
  int *v15; // ecx
  char v16; // al
  bool v17; // zf
  int (__stdcall ***v18)(size_t, int); // eax
  unsigned int v19; // ebx
  int (__stdcall ***v20)(size_t, int); // eax
  int v21; // ecx
  _DWORD *v22; // eax
  _DWORD *v23; // eax
  int *v24; // ecx
  int (__stdcall ***v25)(size_t, int); // eax
  void *v26; // eax
  const void **v27; // edx
  int (__stdcall ***v28)(size_t, int); // eax
  _DWORD *v29; // eax
  unsigned int *v30; // ebp
  int v31; // edx
  int v32; // eax
  int v33; // ecx
  int v34; // edx
  unsigned int v35; // ebp
  unsigned int v36; // ebx
  int (__stdcall ***v37)(size_t, int); // eax
  int v38; // ecx
  unsigned int *v39; // eax
  _DWORD *v40; // edi
  unsigned int i; // eax
  unsigned int *v42; // ecx
  int v43; // edx
  int v44; // ebp
  int (__stdcall ***v45)(size_t, int); // eax
  int (__stdcall ***v46)(size_t, int); // eax
  int v47; // edi
  int (__stdcall ***v48)(size_t, int); // eax
  int (__stdcall ***v49)(size_t, int); // eax
  size_t v50; // [esp+2Eh] [ebp-90h]
  char v51; // [esp+45h] [ebp-79h]
  unsigned int *v52; // [esp+46h] [ebp-78h]
  int v53; // [esp+4Ah] [ebp-74h]
  int v54; // [esp+52h] [ebp-6Ch] BYREF
  int v55; // [esp+56h] [ebp-68h]
  _DWORD *v56; // [esp+5Ah] [ebp-64h]
  int v57; // [esp+5Eh] [ebp-60h]
  int v58; // [esp+62h] [ebp-5Ch] BYREF
  unsigned int v59; // [esp+66h] [ebp-58h]
  int v60; // [esp+6Ah] [ebp-54h]
  int v61; // [esp+72h] [ebp-4Ch] BYREF
  int v62; // [esp+76h] [ebp-48h]
  int v63; // [esp+7Ah] [ebp-44h]
  int v64; // [esp+7Eh] [ebp-40h]
  int v65; // [esp+82h] [ebp-3Ch]
  int v66; // [esp+86h] [ebp-38h]
  int v67; // [esp+8Ah] [ebp-34h]
  int v68; // [esp+BAh] [ebp-4h]

  v2 = a2;
  if ( !*a2 || !(unsigned __int8)sub_10018330() )
    return 0;
  sub_10018350(*a2);
  sub_10017DE0((int *)this);
  *(_DWORD *)(this + 4) = *a2;
  v51 = 0;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  v4 = sub_10014910();
  v5 = (_DWORD *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v4)(v4, 28, 24);
  if ( v5 )
    v6 = sub_10017150(v5);
  else
    v6 = 0;
  *(_DWORD *)(this + 12) = v6;
  if ( !v6 )
  {
    if ( v55 )
    {
      v7 = sub_10014910();
      ((void (__thiscall *)(int (__stdcall ***)(size_t, int), int))(*v7)[3])(v7, v55);
    }
    return 0;
  }
  sub_10017DA0((float *)&v61);
  v9 = a2[1];
  v10 = a2[2];
  v68 = *a2;
  v67 = *(_DWORD *)(v68 + 8);
  v11 = a2[3];
  v62 = v9;
  v12 = a2[4];
  v64 = v11;
  v63 = v10;
  v13 = a2[5];
  v65 = v12;
  v14 = *(int **)(this + 12);
  v66 = v13;
  v62 = 8;
  if ( !sub_100171D0(v14, (int)&v61) )
    goto LABEL_36;
  v15 = *(int **)(this + 12);
  v54 = 0;
  sub_100172E0(v15, (unsigned __int8 (__cdecl *)(int, _DWORD, int))sub_10017920, (int)&v54);
  v16 = v54;
  v17 = v54 == 1;
  *(_DWORD *)(this + 20) = v54;
  if ( v17 )
  {
    *(_DWORD *)(this + 8) |= 4u;
    v51 = v16;
    goto LABEL_36;
  }
  v18 = sub_10014910();
  v55 = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v18)(v18, 24 * v54, 1);
  if ( !v55 )
    goto LABEL_27;
  v19 = v54;
  v53 = v54;
  v20 = sub_10014910();
  v21 = (unsigned __int64)v19 >> 30 != 0 ? -1 : 4 * v19;
  v22 = (_DWORD *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v20)(
                    v20,
                    __CFADD__(v21, 4) ? -1 : v21 + 4,
                    39);
  if ( v22 )
  {
    *v22 = v53;
    v23 = v22 + 1;
  }
  else
  {
    v23 = 0;
  }
  *(_DWORD *)(this + 24) = v23;
  if ( !v23 )
    goto LABEL_27;
  v24 = *(int **)(this + 12);
  v56 = v23;
  v57 = *v24;
  v54 = 0;
  sub_100172E0(v24, (unsigned __int8 (__cdecl *)(int, _DWORD, int))sub_10017940, (int)&v54);
  if ( !*((_BYTE *)a2 + 27)
    || !(unsigned __int8)sub_100183E0(
                           *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 12) + 4) + 36),
                           **(_DWORD **)(this + 12)) )
  {
    *(_DWORD *)(this + 28) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 12) + 4) + 36);
    v25 = sub_10014910();
    v26 = (void *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v25)(
                    v25,
                    4 * *(_DWORD *)(this + 28),
                    62);
    v27 = *(const void ***)(this + 12);
    v50 = 4 * *(_DWORD *)(this + 28);
    *(_DWORD *)(this + 32) = v26;
    memcpy_0(v26, *v27, v50);
  }
  v28 = sub_10014910();
  v29 = (_DWORD *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v28)(v28, 28, 24);
  if ( !v29 || (v30 = sub_10017150(v29), (v52 = v30) == 0) )
  {
LABEL_27:
    sub_100178F0(&v54);
    return 0;
  }
  sub_10017D60((float *)&v61);
  v31 = a2[2];
  v32 = a2[3];
  v62 = a2[1];
  v33 = a2[4];
  v63 = v31;
  v34 = a2[5];
  v65 = v33;
  v66 = v34;
  v64 = v32;
  v68 = v55;
  v62 = 1;
  v67 = v54;
  if ( sub_100171D0((int *)v30, (int)&v61) )
  {
    sub_10014950((float *)&v58);
    sub_10017320(v30, (unsigned __int8 (__cdecl *)(unsigned int, _DWORD, int))sub_100179B0, (int)&v58);
    v35 = v59;
    v36 = v59;
    v37 = sub_10014910();
    v38 = (unsigned __int64)v36 >> 30 != 0 ? -1 : 4 * v36;
    v39 = (unsigned int *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v37)(
                            v37,
                            __CFADD__(v38, 4) ? -1 : v38 + 4,
                            39);
    if ( !v39 || (v40 = v39 + 1, *v39 = v35, v39 == (unsigned int *)-4) )
    {
      sub_10014B50((float *)&v58);
      goto LABEL_27;
    }
    for ( i = 0; i < v35; ++i )
    {
      v42 = *(unsigned int **)(*(_DWORD *)(v60 + 4 * i) + 32);
      v43 = *(_DWORD *)(*(_DWORD *)(this + 24) + 4 * *v42);
      *v42 = i;
      v40[i] = v43;
    }
    v44 = *(_DWORD *)(this + 24);
    if ( v44 )
    {
      v45 = sub_10014910();
      ((void (__thiscall *)(int (__stdcall ***)(size_t, int), int))(*v45)[3])(v45, v44 - 4);
      *(_DWORD *)(this + 24) = 0;
    }
    *(_DWORD *)(this + 24) = v40;
    sub_10014B50((float *)&v58);
    v2 = a2;
    v30 = v52;
    if ( sub_100173F0((_DWORD *)this, *((_BYTE *)a2 + 24), *((_BYTE *)a2 + 25))
      && (*(unsigned __int8 (__thiscall **)(_DWORD, unsigned int *))(**(_DWORD **)(this + 16) + 4))(
           *(_DWORD *)(this + 16),
           v52) )
    {
      v51 = 1;
    }
  }
  sub_10017360((int)v30);
  v46 = sub_10014910();
  ((void (__thiscall *)(int (__stdcall ***)(size_t, int), unsigned int *))(*v46)[3])(v46, v30);
LABEL_36:
  if ( !*((_BYTE *)v2 + 26) )
  {
    v47 = *(_DWORD *)(this + 12);
    if ( v47 )
    {
      sub_10017360(*(_DWORD *)(this + 12));
      v48 = sub_10014910();
      ((void (__thiscall *)(int (__stdcall ***)(size_t, int), int))(*v48)[3])(v48, v47);
      *(_DWORD *)(this + 12) = 0;
    }
  }
  if ( v55 )
  {
    v49 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), int))(*v49)[3])(v49, v55);
  }
  return v51;
}
