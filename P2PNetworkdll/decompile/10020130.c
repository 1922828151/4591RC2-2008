/*
 * func-name: sub_10020130
 * func-address: 0x10020130
 * callers: 0x1001f4a0
 * callees: 0x100207f0, 0x10021cd0, 0x100225a0, 0x10022690, 0x10022d40, 0x10023030, 0x10023090, 0x10023100, 0x100234ec, 0x10023bb2
 */

int __cdecl sub_10020130(_DWORD *a1, int a2, int a3, int *a4, int *a5)
{
  int v5; // ebx
  int v6; // esi
  int v7; // edi
  int v8; // eax
  int result; // eax
  int v10; // eax
  int v11; // eax
  int v12; // edi
  void *v13; // ecx
  int v14; // eax
  void *v15; // eax
  int v16; // ebx
  int v17; // edi
  int v18; // eax
  _DWORD *v19; // eax
  int v20; // ecx
  int v21; // esi
  int v22; // eax
  int v23; // ebx
  int v24; // edx
  _DWORD *v25; // esi
  _BYTE *v26; // eax
  int v27; // esi
  int v28; // eax
  bool v29; // cc
  int *v30; // ecx
  int v31; // eax
  int v32; // ecx
  int **v33; // eax
  int *v34; // ecx
  int v35; // edx
  int v36; // edi
  int v37; // esi
  int v38; // ebx
  int v39; // eax
  bool v40; // zf
  int v41; // edi
  char *v42; // ebx
  char v43; // al
  int v45; // ecx
  int *v46; // ebx
  int i; // eax
  int v48; // eax
  int v49; // esi
  char *v50; // edi
  char v51; // cl
  size_t v52; // eax
  signed int v54; // ecx
  void *v55; // ebx
  _DWORD *j; // ebp
  const void *v57; // [esp-8h] [ebp-40h]
  size_t v58; // [esp-4h] [ebp-3Ch]
  int v59; // [esp+10h] [ebp-28h]
  int v60; // [esp+10h] [ebp-28h]
  int v61; // [esp+14h] [ebp-24h]
  int v62; // [esp+18h] [ebp-20h]
  int v63; // [esp+18h] [ebp-20h]
  size_t v64; // [esp+18h] [ebp-20h]
  _DWORD *v65; // [esp+1Ch] [ebp-1Ch]
  int v66; // [esp+20h] [ebp-18h]
  int v67; // [esp+24h] [ebp-14h]
  int v68; // [esp+28h] [ebp-10h]
  _DWORD *v69; // [esp+2Ch] [ebp-Ch]
  int v70; // [esp+2Ch] [ebp-Ch]
  int v71; // [esp+30h] [ebp-8h]
  int v72; // [esp+30h] [ebp-8h]
  int v73; // [esp+30h] [ebp-8h]
  void *Src; // [esp+34h] [ebp-4h]

  v5 = a2;
  v6 = 0;
  v7 = 0;
  v65 = 0;
  v68 = 0;
  v59 = 0;
  v66 = 0;
  if ( a4 )
  {
    v65 = (_DWORD *)sub_10022D40(*a4, 0);
    if ( !v65 )
    {
      v8 = sub_10023090(a1 + 89);
      *a4 = v8;
      if ( !v8 )
        return 1;
      v10 = sub_10022D40(v8, 0x18u);
      v65 = (_DWORD *)v10;
      if ( !v10 || a1[52] && !sub_100225A0(v10) )
        return 1;
    }
    v7 = v65[3];
    v5 = a2;
    v68 = v7;
  }
  v71 = (*(int (__cdecl **)(int, int, _DWORD, _DWORD))(v5 + 36))(v5, a3, a1[103], a1[106]);
  v11 = v7 + v71;
  v12 = a1[103];
  if ( v11 > v12 )
  {
    v13 = (void *)a1[106];
    v14 = v11 + 16;
    a1[103] = v14;
    v15 = realloc(v13, 16 * v14);
    a1[106] = v15;
    if ( !v15 )
      return 1;
    if ( v71 > v12 )
      (*(void (__cdecl **)(int, int, int, void *))(v5 + 36))(v5, a3, v71, v15);
  }
  v16 = a1[106];
  v61 = v16;
  v62 = 0;
  if ( v71 > 0 )
  {
    v67 = 0;
    while ( 1 )
    {
      v17 = *(_DWORD *)(v67 + a1[106]);
      v18 = (*(int (__cdecl **)(int, int))(a2 + 28))(a2, v17);
      v19 = (_DWORD *)sub_10022690(a1, a2, v17, v17 + v18);
      v20 = (int)v19;
      v69 = v19;
      if ( !v19 )
        return 1;
      if ( *(_BYTE *)(*v19 - 1) )
      {
        if ( a2 == a1[30] )
          a1[61] = *(_DWORD *)(16 * v62 + a1[106]);
        return 8;
      }
      *(_BYTE *)(*v19 - 1) = 1;
      *(_DWORD *)(v16 + 4 * v6) = *v19;
      v21 = v6 + 1;
      v22 = a1[106] + v67;
      v60 = v21;
      if ( *(_BYTE *)(v22 + 12) )
        break;
      v23 = 1;
      if ( *(_BYTE *)(v20 + 8) )
      {
        v24 = 0;
        if ( v68 > 0 )
        {
          v25 = (_DWORD *)v65[5];
          while ( v20 != *v25 )
          {
            ++v24;
            v25 += 3;
            if ( v24 >= v68 )
              goto LABEL_25;
          }
          v23 = *(char *)(v65[5] + 12 * v24 + 4);
        }
      }
LABEL_25:
      result = sub_10021CD0(a1, a2, v23, *(_DWORD *)(v22 + 4), *(_DWORD *)(v22 + 8), a1 + 109);
      if ( result )
        return result;
      if ( !v23 && a1[112] != a1[113] )
      {
        v26 = (_BYTE *)(a1[112] - 1);
        if ( *v26 == 32 )
          a1[112] = v26;
      }
      if ( a1[112] == a1[111] && !sub_10023100() )
        return 1;
      v21 = v60;
      *(_BYTE *)a1[112]++ = 0;
      if ( a4 )
      {
        *(_DWORD *)(v61 + 4 * v60) = a1[113];
        v16 = v61;
LABEL_44:
        a1[113] = a1[112];
        goto LABEL_45;
      }
      v16 = v61;
      a1[112] = a1[113];
LABEL_45:
      v20 = (int)v69;
LABEL_46:
      v28 = *(_DWORD *)(v20 + 4);
      if ( v28 && a4 )
      {
        if ( *(_BYTE *)(v20 + 9) )
        {
          if ( !sub_100207F0((int)a1, v28, v20, *(void **)(v16 + 4 * v21), (int)a5) )
            return 1;
          v6 = v21 - 1;
        }
        else
        {
          v6 = v21 + 1;
          ++v66;
          *(_BYTE *)(*(_DWORD *)v20 - 1) = 2;
        }
      }
      else
      {
        v6 = v21 + 1;
      }
      v67 += 16;
      v29 = v62 + 1 < v71;
      v59 = v6;
      ++v62;
      if ( !v29 )
        goto LABEL_54;
    }
    if ( !a4 )
      goto LABEL_46;
    if ( sub_10023030(*(_DWORD *)(v22 + 4)) )
    {
      if ( a1[112] != a1[111] || sub_10023100() )
      {
        *(_BYTE *)a1[112]++ = 0;
        v27 = a1[113];
      }
      else
      {
        v27 = 0;
      }
    }
    else
    {
      v27 = 0;
    }
    *(_DWORD *)(v61 + 4 * v60) = v27;
    if ( !v27 )
      return 1;
    v21 = v60;
    v16 = v61;
    goto LABEL_44;
  }
LABEL_54:
  if ( !a4 )
    goto LABEL_81;
  a1[104] = v6;
  v30 = (int *)v65[2];
  if ( v30 && *(_BYTE *)(*v30 - 1) )
  {
    v31 = 0;
    if ( v6 > 0 )
    {
      v32 = *v30;
      while ( *(_DWORD *)(v16 + 4 * v31) != v32 )
      {
        v31 += 2;
        if ( v31 >= v6 )
          goto LABEL_67;
      }
      a1[105] = v31;
    }
  }
  else
  {
    a1[105] = -1;
  }
LABEL_67:
  v70 = 0;
  if ( v68 <= 0 )
    goto LABEL_80;
  v72 = 0;
  do
  {
    v33 = (int **)(v72 + v65[5]);
    v34 = *v33;
    v35 = **v33;
    if ( *(_BYTE *)(v35 - 1) || !v33[2] )
      goto LABEL_78;
    v36 = v34[1];
    if ( !v36 )
    {
      *(_BYTE *)(v35 - 1) = 1;
      goto LABEL_77;
    }
    if ( !*((_BYTE *)v34 + 9) )
    {
      ++v66;
      *(_BYTE *)(v35 - 1) = 2;
LABEL_77:
      *(_DWORD *)(v16 + 4 * v6) = **v33;
      v37 = v6 + 1;
      *(_DWORD *)(v16 + 4 * v37) = v33[2];
      v6 = v37 + 1;
      goto LABEL_78;
    }
    if ( !sub_100207F0((int)a1, v36, (int)v34, v33[2], (int)a5) )
      return 1;
LABEL_78:
    v72 += 12;
    ++v70;
  }
  while ( v70 < v68 );
  v59 = v6;
LABEL_80:
  *(_DWORD *)(v16 + 4 * v6) = 0;
LABEL_81:
  v38 = 0;
  v63 = 0;
  if ( !v66 )
  {
LABEL_97:
    while ( v38 < v6 )
    {
      v45 = *(_DWORD *)(v61 + 4 * v38);
      v38 += 2;
      *(_BYTE *)(v45 - 1) = 0;
    }
LABEL_99:
    v46 = a4;
    if ( a4 )
    {
      for ( i = *a5; i; i = *(_DWORD *)(i + 4) )
        *(_BYTE *)(**(_DWORD **)(i + 12) - 1) = 0;
      v48 = v65[1];
      if ( v48 )
      {
        v49 = *(_DWORD *)(v48 + 4);
        if ( v49 )
        {
          v50 = (char *)*a4;
          do
            v51 = *v50++;
          while ( v51 != 58 );
          goto LABEL_109;
        }
      }
      else
      {
        v49 = a1[97];
        if ( v49 )
        {
          v50 = (char *)*a4;
LABEL_109:
          a4[1] = (int)v50;
          a4[2] = *(_DWORD *)(v49 + 20);
          v52 = 0;
          while ( v50[v52++] )
            ;
          v54 = v52 + *(_DWORD *)(v49 + 20);
          v64 = v52;
          if ( v54 > *(_DWORD *)(v49 + 24) )
          {
            Src = (void *)(v54 + 24);
            v55 = malloc(v54 + 24);
            if ( !v55 )
              return 1;
            v58 = *(_DWORD *)(v49 + 20);
            v57 = *(const void **)(v49 + 16);
            *(_DWORD *)(v49 + 24) = Src;
            memcpy(v55, v57, v58);
            for ( j = (_DWORD *)a1[99]; j; j = (_DWORD *)*j )
            {
              if ( j[3] == *(_DWORD *)(v49 + 16) )
                j[3] = v55;
            }
            free(*(void **)(v49 + 16));
            v52 = v64;
            *(_DWORD *)(v49 + 16) = v55;
            v46 = a4;
          }
          memcpy((void *)(*(_DWORD *)(v49 + 16) + *(_DWORD *)(v49 + 20)), v50, v52);
          *v46 = *(_DWORD *)(v49 + 16);
        }
      }
    }
    return 0;
  }
  if ( v6 <= 0 )
    goto LABEL_99;
  while ( 1 )
  {
    v39 = *(_DWORD *)(v61 + 4 * v38);
    v40 = *(_BYTE *)(v39 - 1) == 2;
    *(_BYTE *)(v39 - 1) = 0;
    if ( v40 )
      break;
LABEL_95:
    v38 += 2;
    v63 = v38;
    if ( v38 >= v6 )
      goto LABEL_99;
  }
  v41 = *(_DWORD *)(*(_DWORD *)(sub_10022D40(*(_DWORD *)(v61 + 4 * v38), 0) + 4) + 4);
  if ( !v41 )
  {
LABEL_94:
    if ( !--v66 )
      goto LABEL_97;
    goto LABEL_95;
  }
  v42 = *(char **)(v61 + 4 * v63);
  v73 = 0;
  if ( *(int *)(v41 + 20) <= 0 )
  {
    do
LABEL_89:
      v43 = *v42++;
    while ( v43 != 58 );
    while ( a1[112] != a1[111] || sub_10023100() )
    {
      *(_BYTE *)a1[112]++ = *v42;
      if ( !*v42++ )
      {
        v6 = v59;
        *(_DWORD *)(v61 + 4 * v63) = a1[113];
        a1[113] = a1[112];
        v38 = v63;
        goto LABEL_94;
      }
    }
  }
  else
  {
    while ( a1[112] != a1[111] || sub_10023100() )
    {
      *(_BYTE *)a1[112]++ = *(_BYTE *)(v73 + *(_DWORD *)(v41 + 16));
      if ( ++v73 >= *(_DWORD *)(v41 + 20) )
        goto LABEL_89;
    }
  }
  return 1;
}
