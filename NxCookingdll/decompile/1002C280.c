/*
 * func-name: sub_1002C280
 * func-address: 0x1002c280
 * callers: 0x1002d0c0
 * callees: 0x10014910, 0x10014950, 0x100149b0, 0x10014b50, 0x100252f0, 0x10025310, 0x10025b00, 0x10034f10, 0x10035300
 */

char __userpurge sub_1002C280@<al>(
        _DWORD *a1@<ecx>,
        int a2@<ebp>,
        int a3@<edi>,
        size_t *a4,
        _DWORD *a5,
        unsigned int *a6,
        _DWORD *a7,
        int a8)
{
  size_t *v8; // esi
  int v11; // ebp
  int (__stdcall ***v12)(size_t, int); // eax
  void *v13; // edi
  unsigned int v14; // edx
  size_t *v15; // ecx
  int v16; // eax
  int (__stdcall ***v17)(size_t, int); // eax
  int v18; // esi
  int (__stdcall ***v19)(size_t, int); // eax
  int (__stdcall **v20)(size_t, int); // edx
  int v21; // eax
  int (__stdcall ***v22)(size_t, int); // eax
  unsigned int v23; // edx
  int v24; // edi
  _DWORD *v25; // ecx
  _DWORD *v26; // eax
  int (__stdcall ***v27)(size_t, int); // eax
  unsigned int v28; // edx
  int v29; // eax
  _DWORD *v30; // ecx
  int (__stdcall ***v31)(size_t, int); // eax
  int (__stdcall ***v32)(size_t, int); // eax
  void *v33; // eax
  void *v34; // ebx
  int (__stdcall ***v35)(size_t, int); // eax
  int (__stdcall ***v36)(size_t, int); // eax
  int (__stdcall ***v37)(size_t, int); // eax
  unsigned int v38; // edx
  int v39; // eax
  int v40; // ebp
  _DWORD *v41; // ecx
  int (__stdcall ***v42)(size_t, int); // eax
  void *v43; // esi
  int (__stdcall ***v44)(size_t, int); // eax
  unsigned int v45; // ebp
  int v46; // edi
  int v47; // eax
  int v48; // edx
  int v49; // esi
  int v50; // ecx
  int v51; // eax
  int v52; // edx
  int v53; // esi
  int v54; // ecx
  int (__stdcall ***v55)(size_t, int); // eax
  int v56; // ebp
  unsigned int v57; // eax
  char *v58; // edx
  const void *v59; // esi
  int (__stdcall ***v60)(size_t, int); // eax
  unsigned int v61; // eax
  int v64; // [esp+2Ch] [ebp-34h]
  _BYTE *v65; // [esp+30h] [ebp-30h]
  int Src; // [esp+34h] [ebp-2Ch]
  int v67; // [esp+38h] [ebp-28h] BYREF
  int v68; // [esp+3Ch] [ebp-24h] BYREF
  unsigned int v69; // [esp+40h] [ebp-20h]
  int v70; // [esp+44h] [ebp-1Ch]
  _DWORD v71[2]; // [esp+4Ch] [ebp-14h] BYREF
  unsigned int v72[3]; // [esp+54h] [ebp-Ch] BYREF

  v8 = a4;
  if ( !*a4 )
    return 1;
  v11 = 0;
  v12 = sub_10014910();
  v13 = (void *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), size_t, int))**v12)(v12, *a4, 1);
  if ( !v13 )
    return 0;
  memset(v13, 0, *a4);
  v14 = 0;
  if ( a1[57] )
  {
    v15 = a4;
    v16 = 0;
    do
    {
      if ( a6 == (unsigned int *)1 )
      {
        v15 = *(size_t **)(v16 + a1[63]);
      }
      else if ( a6 == (unsigned int *)2 )
      {
        v15 = *(size_t **)(a1[63] + v16 + 4);
      }
      else if ( a6 == (unsigned int *)4 )
      {
        v15 = *(size_t **)(a1[63] + v16 + 8);
      }
      ++v14;
      *((_BYTE *)v13 + (_DWORD)v15) = 1;
      v16 += 12;
    }
    while ( v14 < a1[57] );
    v8 = a4;
  }
  v17 = sub_10014910();
  v18 = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), size_t, int, int))**v17)(v17, 4 * *v8, 1, a3);
  v19 = sub_10014910();
  v20 = *v19;
  if ( !v18 )
    goto LABEL_17;
  v21 = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int, int))*v20)(v19, 12 * *a5, 1, a2);
  Src = v21;
  if ( !v21 )
  {
    v22 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), int))(*v22)[3])(v22, v18);
    v19 = sub_10014910();
    v20 = *v19;
LABEL_17:
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int)))v20[3])(v19);
    return 0;
  }
  v23 = 0;
  if ( *a6 )
  {
    v24 = 0;
    v25 = (_DWORD *)v21;
    do
    {
      if ( v65[v23] )
      {
        *(_DWORD *)(v18 + 4 * v23) = v11;
        v26 = (_DWORD *)(v24 + *a7);
        *v25 = *v26;
        v25[1] = v26[1];
        v11 = v64 + 1;
        v25[2] = v26[2];
        ++v64;
        v25 += 3;
      }
      ++v23;
      v24 += 12;
    }
    while ( v23 < *a6 );
    v13 = v65;
  }
  v27 = sub_10014910();
  ((void (__thiscall *)(int (__stdcall ***)(size_t, int), void *))(*v27)[3])(v27, v13);
  v28 = 0;
  if ( a1[57] )
  {
    v29 = 0;
    while ( a8 != 1 )
    {
      if ( a8 == 2 )
      {
        v30 = (_DWORD *)(a1[63] + v29 + 4);
        goto LABEL_32;
      }
      if ( a8 == 4 )
      {
        v30 = (_DWORD *)(a1[63] + v29 + 8);
        goto LABEL_32;
      }
LABEL_33:
      ++v28;
      v29 += 12;
      if ( v28 >= a1[57] )
        goto LABEL_34;
    }
    v30 = (_DWORD *)(v29 + a1[63]);
LABEL_32:
    *v30 = *(_DWORD *)(v18 + 4 * *v30);
    goto LABEL_33;
  }
LABEL_34:
  v31 = sub_10014910();
  ((void (__thiscall *)(int (__stdcall ***)(size_t, int), int))(*v31)[3])(v31, v18);
  sub_100252F0(v72, Src, v11);
  sub_10025310(v72, &v67);
  if ( v68 != v11 )
  {
    v37 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), int))(*v37)[3])(v37, Src);
    v38 = 0;
    if ( !a1[57] )
    {
      v40 = a8;
LABEL_51:
      v42 = sub_10014910();
      v43 = (void *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, _DWORD))**v42)(v42, 12 * v68, 0);
      if ( !v43 )
        goto LABEL_66;
      memcpy_0(v43, v65, 12 * Src);
      *a4 = Src;
      if ( *a5 )
      {
        v44 = sub_10014910();
        ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD))(*v44)[3])(v44, *a5);
        *a5 = 0;
      }
      *a5 = v43;
      if ( v40 == 1 )
      {
        sub_10014950((float *)&v68);
        v45 = 0;
        if ( a1[56] )
        {
          v46 = 0;
          do
          {
            v47 = a1[62];
            v48 = *(_DWORD *)(v47 + v46 + 12);
            v49 = *(_DWORD *)(v47 + v46 + 16);
            v50 = a1[63];
            v51 = *(_DWORD *)(v46 + v47 + 20);
            v52 = *(_DWORD *)(v50 + 12 * v48);
            v53 = *(_DWORD *)(v50 + 12 * v49);
            if ( v52 != v53 )
            {
              v54 = *(_DWORD *)(v50 + 12 * v51);
              if ( v52 != v54 && v53 != v54 )
              {
                if ( v69 == v68 )
                  sub_100149B0(&v68, 1);
                *(_DWORD *)(v70 + 4 * v69++) = v45;
              }
            }
            ++v45;
            v46 += 48;
          }
          while ( v45 < a1[56] );
        }
        v55 = sub_10014910();
        v56 = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, _DWORD))**v55)(v55, 48 * a1[56], 0);
        if ( !v56 )
        {
          sub_10014B50((float *)&v68);
          goto LABEL_66;
        }
        v57 = 0;
        if ( v69 )
        {
          v58 = (char *)v56;
          do
          {
            v59 = (const void *)(a1[62] + 48 * *(_DWORD *)(v70 + 4 * v57++));
            qmemcpy(v58, v59, 0x30u);
            v58 += 48;
          }
          while ( v57 < v69 );
        }
        if ( a1[62] )
        {
          v60 = sub_10014910();
          ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD))(*v60)[3])(v60, a1[62]);
          a1[62] = 0;
        }
        v61 = v69;
        a1[62] = v56;
        a1[56] = v61;
        sub_10014B50((float *)&v68);
      }
      sub_10025B00(v71);
      return 1;
    }
    v39 = 0;
    while ( 1 )
    {
      v40 = a8;
      if ( a8 == 1 )
        break;
      if ( a8 == 2 )
      {
        v41 = (_DWORD *)(a1[63] + v39 + 4);
        goto LABEL_47;
      }
      if ( a8 == 4 )
      {
        v41 = (_DWORD *)(a1[63] + v39 + 8);
        goto LABEL_47;
      }
LABEL_48:
      ++v38;
      v39 += 12;
      if ( v38 >= a1[57] )
        goto LABEL_51;
    }
    v41 = (_DWORD *)(v39 + a1[63]);
LABEL_47:
    *v41 = *(_DWORD *)(v69 + 4 * *v41);
    goto LABEL_48;
  }
  v32 = sub_10014910();
  v33 = (void *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, _DWORD))**v32)(v32, 12 * v11, 0);
  v34 = v33;
  if ( !v33 )
  {
LABEL_66:
    sub_10025B00(v71);
    return 0;
  }
  memcpy_0(v33, (const void *)Src, 12 * v11);
  *a4 = v11;
  if ( *a5 )
  {
    v35 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD))(*v35)[3])(v35, *a5);
    *a5 = 0;
  }
  *a5 = v34;
  v36 = sub_10014910();
  ((void (__thiscall *)(int (__stdcall ***)(size_t, int), int))(*v36)[3])(v36, Src);
  sub_10025B00(v71);
  return 1;
}
