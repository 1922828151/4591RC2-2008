/*
 * func-name: sub_1001F4A0
 * func-address: 0x1001f4a0
 * callers: 0x1001f470, 0x1001f4a0, 0x10020910
 * callees: 0x1001e520, 0x1001f4a0, 0x10020130, 0x10020960, 0x10021ad0, 0x10022290, 0x100223b0, 0x10022450, 0x100228d0, 0x10022d40, 0x10022fa0, 0x10023030, 0x10023100, 0x100234ec, 0x10023bb2
 */

int __cdecl sub_1001F4A0(int a1, int a2, int a3, int a4, int a5, _DWORD *a6)
{
  int v6; // ebx
  _DWORD *v7; // esi
  int v8; // edi
  int (__cdecl *v9)(int, int, int, int *); // edx
  int v10; // eax
  int v11; // ecx
  void (__cdecl *v12)(_DWORD, char *, int); // eax
  bool v13; // zf
  _DWORD *v14; // esi
  int v15; // esi
  int v16; // eax
  int v17; // ebx
  int v18; // ecx
  int v19; // eax
  int v20; // edx
  int result; // eax
  int v22; // ecx
  int v23; // eax
  int v24; // eax
  _DWORD *v25; // ecx
  char *v26; // edi
  char *v27; // eax
  int v28; // eax
  void *v29; // ecx
  int v30; // ebx
  char *v31; // eax
  int v32; // ecx
  unsigned __int8 *v33; // ebx
  unsigned __int8 *v34; // eax
  void *v35; // eax
  size_t v36; // ebx
  char *v37; // eax
  _DWORD *v38; // edi
  int v39; // edi
  int (__cdecl *v40)(int, int); // edx
  _DWORD *v41; // esi
  int v42; // eax
  void (__cdecl *v43)(_DWORD, int, _DWORD); // eax
  int v44; // ebx
  _DWORD **v45; // esi
  void (__cdecl *v46)(_DWORD, _DWORD); // eax
  _DWORD *v47; // ebx
  _DWORD *v48; // eax
  _DWORD *v49; // edi
  int v50; // ecx
  int v51; // eax
  int (__cdecl *v52)(int, _DWORD *); // ecx
  unsigned int v53; // eax
  unsigned __int8 *v54; // edx
  unsigned __int8 *v55; // ecx
  int v56; // eax
  int v57; // ecx
  char *v58; // edx
  _BYTE *v59; // eax
  char v60; // cl
  int v61; // ecx
  unsigned int v62; // eax
  unsigned int v63; // eax
  void (__cdecl *v64)(_DWORD, _DWORD); // eax
  _DWORD *v65; // ebx
  int v66; // eax
  void (__cdecl *v67)(_DWORD, int, int); // edi
  int v68; // eax
  int v69; // ecx
  void (__cdecl *v70)(int, char *, int); // eax
  void (__cdecl *v71)(_DWORD); // eax
  void (__cdecl *v72)(_DWORD, int, int); // eax
  unsigned __int8 *v73; // ecx
  int v74; // eax
  int v75; // ecx
  _DWORD *v76; // ebx
  unsigned __int8 *v77; // ecx
  _DWORD *v78; // eax
  void (__cdecl *v79)(int, char *, int); // eax
  int v80; // ecx
  _DWORD *v81; // eax
  void (__cdecl *v82)(_DWORD, int, int); // eax
  void (__cdecl *v83)(int, int *, int, _DWORD **, int); // ecx
  int v84; // [esp-14h] [ebp-64h]
  int v85; // [esp-Ch] [ebp-5Ch]
  int v86; // [esp-Ch] [ebp-5Ch]
  int v87; // [esp-8h] [ebp-58h]
  int v88; // [esp-8h] [ebp-58h]
  int v89; // [esp-4h] [ebp-54h]
  int v90; // [esp-4h] [ebp-54h]
  int v91; // [esp-4h] [ebp-54h]
  _DWORD *v92; // [esp-4h] [ebp-54h]
  int v93; // [esp-4h] [ebp-54h]
  int v94; // [esp-4h] [ebp-54h]
  int v95; // [esp-4h] [ebp-54h]
  char v96; // [esp+12h] [ebp-3Eh] BYREF
  char v97; // [esp+13h] [ebp-3Dh] BYREF
  int v98; // [esp+14h] [ebp-3Ch] BYREF
  unsigned __int8 *v99; // [esp+18h] [ebp-38h] BYREF
  unsigned __int8 *v100; // [esp+1Ch] [ebp-34h] BYREF
  _DWORD *v101; // [esp+20h] [ebp-30h]
  _DWORD *v102; // [esp+24h] [ebp-2Ch]
  _DWORD *v103; // [esp+28h] [ebp-28h] BYREF
  _DWORD *v104; // [esp+2Ch] [ebp-24h]
  char v105[4]; // [esp+30h] [ebp-20h] BYREF
  int v106[3]; // [esp+34h] [ebp-1Ch] BYREF
  _DWORD v107[2]; // [esp+40h] [ebp-10h] BYREF
  int v108; // [esp+48h] [ebp-8h]
  int v109; // [esp+4Ch] [ebp-4h]

  v6 = a3;
  v7 = (_DWORD *)a1;
  if ( a3 == *(_DWORD *)(a1 + 120) )
  {
    v101 = (_DWORD *)(a1 + 244);
    v102 = (_DWORD *)(a1 + 248);
  }
  else
  {
    v101 = *(_DWORD **)(a1 + 256);
    v102 = v101 + 1;
  }
  *v101 = a4;
  while ( 2 )
  {
    v8 = a5;
    v9 = *(int (__cdecl **)(int, int, int, int *))(v6 + 4);
    v98 = a4;
    v10 = v9(v6, a4, a5, &v98);
    v11 = v98;
    *v102 = v98;
    switch ( v10 )
    {
      case -5:
        v78 = a6;
        if ( a6 )
          goto LABEL_144;
        v82 = (void (__cdecl *)(_DWORD, int, int))v7[12];
        if ( v82 )
        {
          if ( *(_BYTE *)(v6 + 68) )
          {
            v82(v7[1], a4, v8 - a4);
          }
          else
          {
            v95 = v7[9];
            v83 = *(void (__cdecl **)(int, int *, int, _DWORD **, int))(v6 + 56);
            v103 = (_DWORD *)v7[8];
            v83(v6, &a4, v8, &v103, v95);
            ((void (__cdecl *)(_DWORD, _DWORD, int))v7[12])(v7[1], v7[8], (int)v103 - v7[8]);
          }
        }
        else if ( v7[17] )
        {
          sub_10022450(a4);
        }
        if ( !a2 )
        {
          *v101 = v8;
          return 3;
        }
        if ( v7[66] == a2 )
          return 0;
        *v101 = v8;
        return 13;
      case -4:
        v81 = a6;
        if ( a6 )
          goto LABEL_153;
        v80 = a2;
        if ( a2 > 0 )
          return v80 != v7[66] ? 0xD : 0;
        return 3;
      case -3:
        v78 = a6;
        if ( a6 )
          goto LABEL_144;
        *v102 = v8;
        v79 = (void (__cdecl *)(int, char *, int))v7[12];
        if ( v79 )
        {
          v86 = v7[1];
          v97 = 10;
          v79(v86, &v97, 1);
        }
        else if ( v7[17] )
        {
          sub_10022450(a4);
        }
        v80 = a2;
        if ( a2 )
          return v80 != v7[66] ? 0xD : 0;
        else
          return 3;
      case -2:
        v78 = a6;
        if ( !a6 )
          return 6;
LABEL_144:
        *v78 = a4;
        return 0;
      case -1:
        v81 = a6;
        if ( !a6 )
          return 5;
LABEL_153:
        *v81 = a4;
        return 0;
      case 0:
        *v101 = v11;
        return 4;
      case 1:
        if ( v7[10] )
          goto LABEL_35;
        result = sub_10020130(v7, v6, a4, 0, 0);
        if ( !result )
          goto LABEL_35;
        return result;
      case 2:
LABEL_35:
        v26 = (char *)v7[100];
        if ( v26 )
        {
          v7[100] = *(_DWORD *)v26;
        }
        else
        {
          v26 = (char *)malloc(0x24u);
          if ( !v26 )
            return 1;
          v27 = (char *)malloc(0x20u);
          *((_DWORD *)v26 + 6) = v27;
          if ( !v27 )
            return 1;
          *((_DWORD *)v26 + 7) = v27 + 32;
        }
        *((_DWORD *)v26 + 8) = 0;
        v103 = v26 + 32;
        *(_DWORD *)v26 = v7[99];
        v7[99] = v26;
        *((_DWORD *)v26 + 4) = 0;
        v90 = *(_DWORD *)(a3 + 64) + a4;
        *((_DWORD *)v26 + 1) = v90;
        v28 = (*(int (__cdecl **)(int, int))(a3 + 28))(a3, v90);
        v13 = a6 == 0;
        *((_DWORD *)v26 + 2) = v28;
        if ( !v13 )
        {
          v29 = (void *)*((_DWORD *)v26 + 6);
          if ( v28 + 1 > *((_DWORD *)v26 + 7) - (int)v29 )
          {
            v30 = 4 * v28;
            v31 = (char *)realloc(v29, 4 * v28);
            *((_DWORD *)v26 + 6) = v31;
            if ( !v31 )
              return 1;
            *((_DWORD *)v26 + 7) = &v31[v30];
          }
          memcpy(*((void **)v26 + 6), *((const void **)v26 + 1), *((_DWORD *)v26 + 2));
          *((_DWORD *)v26 + 1) = *((_DWORD *)v26 + 6);
        }
        ++v7[66];
        if ( v7[10] )
        {
          while ( 1 )
          {
            v32 = *((_DWORD *)v26 + 2);
            v33 = (unsigned __int8 *)(v32 + *((_DWORD *)v26 + 1));
            v99 = (unsigned __int8 *)*((_DWORD *)v26 + 1);
            v34 = (unsigned __int8 *)*((_DWORD *)v26 + 6);
            if ( a6 )
              v34 += v32;
            *((_DWORD *)v26 + 3) = v34;
            v104 = v26 + 12;
            v91 = *((_DWORD *)v26 + 7) - 1;
            v100 = v34;
            (*(void (__cdecl **)(int, unsigned __int8 **, unsigned __int8 *, unsigned __int8 **, int))(a3 + 56))(
              a3,
              &v99,
              v33,
              &v100,
              v91);
            if ( v99 == v33 )
              break;
            v35 = (void *)*((_DWORD *)v26 + 6);
            v36 = 2 * (*((_DWORD *)v26 + 7) - (_DWORD)v35);
            v37 = (char *)realloc(v35, v36);
            *((_DWORD *)v26 + 6) = v37;
            if ( !v37 )
              return 1;
            v13 = a6 == 0;
            *((_DWORD *)v26 + 7) = &v37[v36];
            if ( !v13 )
              *((_DWORD *)v26 + 1) = v37;
          }
          v38 = v104;
          v92 = v103;
          *v100 = 0;
          result = sub_10020130(v7, a3, a4, v38, v92);
          if ( result )
            return result;
          ((void (__cdecl *)(_DWORD, _DWORD, _DWORD))v7[10])(v7[1], *v38, v7[106]);
          sub_10022FA0(v7 + 109);
          v6 = a3;
          a4 = v98;
          *v101 = v98;
          continue;
        }
        *((_DWORD *)v26 + 3) = 0;
        if ( !v7[17] )
          goto LABEL_142;
        v89 = a4;
        goto LABEL_141;
      case 3:
        if ( v7[10] )
          goto LABEL_62;
        result = sub_10020130(v7, v6, a4, 0, 0);
        if ( result )
          return result;
LABEL_58:
        if ( !v7[10] && !v7[11] )
        {
          if ( v7[17] )
            sub_10022450(a4);
          goto LABEL_79;
        }
LABEL_62:
        v39 = a4 + *(_DWORD *)(a3 + 64);
        v40 = *(int (__cdecl **)(int, int))(a3 + 28);
        v100 = 0;
        v41 = v7 + 109;
        v40(a3, v39);
        v42 = sub_10023030(v39);
        if ( v42 )
        {
          if ( v41[3] != v41[2] || (v42 = sub_10023100()) != 0 )
          {
            *(_BYTE *)v41[3]++ = 0;
            v42 = v41[4];
          }
        }
        v106[0] = v42;
        if ( v42 )
        {
          *(_DWORD *)(a1 + 452) = *(_DWORD *)(a1 + 448);
          result = sub_10020130(a1, a3, a4, v106, &v100);
          if ( result )
            return result;
          v43 = *(void (__cdecl **)(_DWORD, int, _DWORD))(a1 + 40);
          v44 = v106[0];
          *(_DWORD *)(a1 + 452) = *(_DWORD *)(a1 + 448);
          if ( v43 )
            v43(*(_DWORD *)(a1 + 4), v44, *(_DWORD *)(a1 + 424));
          if ( *(_DWORD *)(a1 + 44) )
          {
            if ( *(_DWORD *)(a1 + 40) )
              *v101 = *v102;
            (*(void (__cdecl **)(_DWORD, int))(a1 + 44))(*(_DWORD *)(a1 + 4), v44);
          }
          sub_10022FA0(v41);
          v45 = (_DWORD **)v100;
          if ( v100 )
          {
            do
            {
              v46 = *(void (__cdecl **)(_DWORD, _DWORD))(a1 + 100);
              v47 = v45;
              if ( v46 )
                v46(*(_DWORD *)(a1 + 4), **v45);
              v48 = v45 + 1;
              v45 = (_DWORD **)v45[1];
              *v48 = *(_DWORD *)(a1 + 408);
              *(_DWORD *)(a1 + 408) = v47;
              *(_DWORD *)(*v47 + 4) = v47[2];
            }
            while ( v45 );
          }
          v7 = (_DWORD *)a1;
LABEL_79:
          if ( !v7[66] )
            return sub_10021AD0(v7, v98, a5, a6);
LABEL_142:
          v6 = a3;
          a4 = v98;
          *v101 = v98;
          continue;
        }
        return 1;
      case 4:
        goto LABEL_58;
      case 5:
        if ( v7[66] == a2 )
          return 13;
        v49 = (_DWORD *)v7[99];
        v50 = v7[100];
        v7[99] = *v49;
        *v49 = v50;
        v51 = a4;
        v7[100] = v49;
        v52 = *(int (__cdecl **)(int, _DWORD *))(v6 + 28);
        v103 = (_DWORD *)(v51 + 2 * *(_DWORD *)(v6 + 64));
        v53 = v52(v6, v103);
        if ( v53 != v49[2] )
          goto LABEL_165;
        v54 = (unsigned __int8 *)v103;
        v55 = (unsigned __int8 *)v49[1];
        v99 = (unsigned __int8 *)v103;
        v100 = v55;
        if ( v53 < 4 )
        {
LABEL_87:
          if ( !v53 )
            goto LABEL_88;
        }
        else
        {
          while ( *(_DWORD *)v100 == *(_DWORD *)v54 )
          {
            v100 += 4;
            v53 -= 4;
            v54 += 4;
            if ( v53 < 4 )
            {
              v99 = v54;
              goto LABEL_87;
            }
          }
          v99 = v54;
        }
        v61 = *v100 - *v54;
        if ( !v61 )
        {
          ++v99;
          ++v100;
          v62 = v53 - 1;
          if ( !v62
            || (v61 = *v100 - *v99) == 0
            && ((++v99, ++v100, (v63 = v62 - 1) == 0)
             || (v61 = *v100 - *v99) == 0 && (v63 == 1 || (v61 = v100[1] - v99[1]) == 0)) )
          {
LABEL_88:
            v56 = 0;
            goto LABEL_89;
          }
        }
        v56 = 1;
        if ( v61 <= 0 )
          v56 = -1;
LABEL_89:
        if ( v56 )
        {
LABEL_165:
          *v101 = v103;
          return 7;
        }
        --v7[66];
        if ( v7[11] && (v57 = v49[3]) != 0 )
        {
          v58 = (char *)v49[4];
          if ( v58 )
          {
            v59 = (_BYTE *)(v57 + v49[5]);
            do
            {
              v60 = *v58;
              *v59++ = *v58++;
            }
            while ( v60 );
          }
          ((void (__cdecl *)(_DWORD, _DWORD))v7[11])(v7[1], v49[3]);
        }
        else if ( v7[17] )
        {
          sub_10022450(a4);
        }
        for ( ; v49[8]; *(_DWORD *)(*v65 + 4) = v65[2] )
        {
          v64 = (void (__cdecl *)(_DWORD, _DWORD))v7[25];
          v65 = (_DWORD *)v49[8];
          if ( v64 )
            v64(v7[1], *(_DWORD *)*v65);
          v49[8] = *(_DWORD *)(v49[8] + 4);
          v65[1] = v7[102];
          v7[102] = v65;
        }
        if ( !v7[66] )
          return sub_10021AD0(v7, v98, a5, a6);
        v6 = a3;
        a4 = v98;
        *v101 = v98;
        continue;
      case 6:
        v72 = (void (__cdecl *)(_DWORD, int, int))v7[12];
        if ( !v72 )
          goto LABEL_139;
        if ( *(_BYTE *)(v6 + 68) )
        {
          v72(v7[1], a4, v11 - a4);
          v6 = a3;
          a4 = v98;
          *v101 = v98;
        }
        else
        {
          v93 = v7[9];
          v100 = (unsigned __int8 *)v7[8];
          (*(void (__cdecl **)(int, int *, int, unsigned __int8 **, int))(v6 + 56))(v6, &a4, v11, &v100, v93);
          v73 = v100;
          *v102 = a4;
          ((void (__cdecl *)(_DWORD, _DWORD, unsigned __int8 *))v7[12])(v7[1], v7[8], &v73[-v7[8]]);
          v74 = a4;
          v75 = v98;
          if ( a4 == v98 )
            goto LABEL_142;
          v76 = v101;
          do
          {
            *v76 = v74;
            v94 = v7[9];
            v100 = (unsigned __int8 *)v7[8];
            (*(void (__cdecl **)(int, int *, int, unsigned __int8 **, int))(a3 + 56))(a3, &a4, v75, &v100, v94);
            v77 = v100;
            *v102 = a4;
            ((void (__cdecl *)(_DWORD, _DWORD, unsigned __int8 *))v7[12])(v7[1], v7[8], &v77[-v7[8]]);
            v74 = a4;
            v75 = v98;
          }
          while ( a4 != v98 );
          v6 = a3;
          a4 = v98;
          *v101 = v98;
        }
        continue;
      case 7:
        v70 = (void (__cdecl *)(int, char *, int))v7[12];
        if ( v70 )
        {
          v85 = v7[1];
          v97 = 10;
          v70(v85, &v97, 1);
          v6 = a3;
          a4 = v98;
          *v101 = v98;
          continue;
        }
        if ( !v7[17] )
          goto LABEL_142;
        v89 = a4;
        goto LABEL_141;
      case 8:
        v71 = (void (__cdecl *)(_DWORD))v7[15];
        if ( v71 )
        {
          v71(v7[1]);
        }
        else if ( v7[17] )
        {
          sub_10022450(a4);
        }
        result = sub_10020960(&v98, v8, a6);
        if ( v98 )
          goto LABEL_142;
        v7[59] = sub_10020910;
        return result;
      case 9:
        v96 = (*(int (__cdecl **)(int, int, int))(v6 + 44))(v6, a4 + *(_DWORD *)(v6 + 64), v11 - *(_DWORD *)(v6 + 64));
        if ( v96 )
        {
          v12 = (void (__cdecl *)(_DWORD, char *, int))v7[12];
          if ( !v12 )
            goto LABEL_9;
          v12(v7[1], &v96, 1);
          v6 = a3;
          a4 = v98;
          *v101 = v98;
          continue;
        }
        v14 = v7 + 89;
        if ( !sub_10023030(a4 + *(_DWORD *)(a3 + 64)) || v14[3] == v14[2] && !sub_10023100() )
          return 1;
        *(_BYTE *)v14[3]++ = 0;
        v15 = v14[4];
        if ( !v15 )
          return 1;
        v87 = v15;
        v7 = (_DWORD *)a1;
        v16 = sub_10022D40(v87, 0);
        v17 = v16;
        *(_DWORD *)(a1 + 368) = *(_DWORD *)(a1 + 372);
        if ( !v16 )
        {
          if ( *(_DWORD *)(a1 + 376) || *(_DWORD *)(a1 + 380) )
            return 11;
          if ( *(_DWORD *)(a1 + 68) )
          {
LABEL_140:
            v89 = a4;
            goto LABEL_141;
          }
          goto LABEL_142;
        }
        if ( *(_BYTE *)(v16 + 28) )
          return 12;
        if ( *(_DWORD *)(v16 + 24) )
          return 15;
        if ( *(_DWORD *)(v16 + 4) )
        {
          if ( *(_DWORD *)(a1 + 68) && !*(_DWORD *)(a1 + 260) )
            goto LABEL_11;
          *(_BYTE *)(v16 + 28) = 1;
          v18 = *(_DWORD *)(a1 + 256);
          *(_DWORD *)(a1 + 256) = v107;
          v19 = *(_DWORD *)(v16 + 4);
          v20 = *(_DWORD *)(a1 + 200);
          v108 = v18;
          v88 = v19 + *(_DWORD *)(v17 + 8);
          v84 = *(_DWORD *)(a1 + 264);
          v109 = v17;
          v107[0] = 0;
          v107[1] = 0;
          result = sub_1001F4A0(a1, v84, v20, v19, v88, 0);
          v22 = v108;
          *(_BYTE *)(v17 + 28) = 0;
          *(_DWORD *)(a1 + 256) = v22;
          if ( result )
            return result;
          v6 = a3;
          a4 = v98;
          *v101 = v98;
        }
        else
        {
          if ( !*(_DWORD *)(a1 + 108) )
          {
            v13 = *(_DWORD *)(a1 + 68) == 0;
            goto LABEL_10;
          }
          *(_BYTE *)(v16 + 28) = 1;
          v23 = sub_100228D0();
          *(_BYTE *)(v17 + 28) = 0;
          if ( !v23 )
            return 1;
          if ( !(*(int (__cdecl **)(_DWORD, int, _DWORD, _DWORD, _DWORD))(a1 + 108))(
                  *(_DWORD *)(a1 + 112),
                  v23,
                  *(_DWORD *)(v17 + 16),
                  *(_DWORD *)(v17 + 12),
                  *(_DWORD *)(v17 + 20)) )
            return 21;
          v24 = v98;
          v25 = v101;
          v6 = a3;
          *(_DWORD *)(a1 + 448) = *(_DWORD *)(a1 + 452);
          a4 = v24;
          *v25 = v24;
        }
        continue;
      case 10:
        v66 = (*(int (__cdecl **)(int, int))(v6 + 40))(v6, a4);
        if ( v66 < 0 )
          return 14;
        v67 = (void (__cdecl *)(_DWORD, int, int))v7[12];
        if ( v67 )
        {
          v68 = sub_1001E520(v66, v105);
          v67(v7[1], v69, v68);
          v6 = a3;
          a4 = v98;
          *v101 = v98;
          continue;
        }
LABEL_9:
        v13 = v7[17] == 0;
LABEL_10:
        if ( !v13 )
        {
LABEL_11:
          v89 = a4;
LABEL_141:
          sub_10022450(v89);
        }
        goto LABEL_142;
      case 11:
        if ( !sub_10022290(v7, a4, v11) )
          return 1;
        goto LABEL_142;
      case 12:
        return 17;
      case 13:
        if ( !sub_100223B0(v7) )
          return 1;
        v6 = a3;
        a4 = v98;
        *v101 = v98;
        continue;
      default:
LABEL_139:
        if ( v7[17] )
          goto LABEL_140;
        goto LABEL_142;
    }
  }
}
