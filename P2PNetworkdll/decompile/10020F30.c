/*
 * func-name: sub_10020F30
 * func-address: 0x10020f30
 * callers: 0x10020e70, 0x10020ef0
 * callees: 0x1001f470, 0x10020c10, 0x10021c70, 0x10022080, 0x10022290, 0x100223b0, 0x10022450, 0x100224f0, 0x100225a0, 0x10022690, 0x10022be0, 0x10022d40, 0x10022fa0, 0x10023030, 0x100230d0, 0x10023100, 0x100234ec
 */

int __cdecl sub_10020F30(int a1, int a2, int a3, int a4, int a5, int a6, int *a7)
{
  int v7; // ecx
  int v9; // esi
  int *v10; // edx
  int *v11; // eax
  int result; // eax
  int v13; // eax
  int v14; // esi
  bool v15; // zf
  int (__cdecl *v16)(_DWORD); // eax
  void (__cdecl *v17)(_DWORD); // eax
  int v18; // esi
  _DWORD *v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // ebx
  int v24; // eax
  int (__cdecl *v25)(_DWORD); // eax
  int v26; // esi
  int v27; // eax
  int v28; // eax
  int v29; // esi
  _DWORD *v30; // eax
  int v31; // esi
  int v32; // esi
  int v33; // eax
  int v34; // eax
  unsigned int v35; // eax
  void *v36; // eax
  int v37; // ecx
  int v38; // edx
  _BYTE *v39; // eax
  int (__cdecl *v40)(_DWORD); // eax
  int v41; // eax
  void *v42; // [esp-8h] [ebp-1Ch]
  int v43; // [esp-4h] [ebp-18h]
  int *v44; // [esp+10h] [ebp-4h]
  int *v45; // [esp+18h] [ebp+4h]

  v7 = a5;
  v9 = a3;
  if ( a2 == *(_DWORD *)(a1 + 120) )
  {
    v10 = (int *)(a1 + 244);
    v11 = (int *)(a1 + 248);
  }
  else
  {
    v10 = *(int **)(a1 + 256);
    v11 = v10 + 1;
  }
  v45 = v11;
  v44 = v10;
  while ( 1 )
  {
    *v10 = v9;
    *v45 = a6;
    if ( v7 <= 0 )
      break;
LABEL_10:
    switch ( (*(int (__cdecl **)(int, int, int, int, int))(a1 + 228))(a1 + 228, v7, v9, a6, a2) )
    {
      case -1:
        if ( a5 == 12 )
          return 17;
        else
          return 8 * (a5 == 28) + 2;
      case 0:
        if ( a5 == 11 )
        {
          v20 = sub_10022290(a1, v9, a6);
        }
        else
        {
          if ( a5 != 13 )
            goto LABEL_137;
          v20 = sub_100223B0(a1);
        }
        goto LABEL_136;
      case 1:
        result = sub_10020C10(a6, (_DWORD *)a1, 0, v9);
        if ( result )
          return result;
        a2 = *(_DWORD *)(a1 + 120);
        goto LABEL_137;
      case 2:
        v43 = (int)a7;
        *(_DWORD *)(a1 + 236) = sub_1001F470;
        return sub_1001F470(a1, v9, a4, v43);
      case 3:
        if ( !*(_DWORD *)(a1 + 72) )
          goto LABEL_137;
        if ( !sub_10023030(v9) || *(_DWORD *)(a1 + 448) == *(_DWORD *)(a1 + 444) && !sub_10023100() )
          return 1;
        **(_BYTE **)(a1 + 448) = 0;
        v13 = *(_DWORD *)(a1 + 452);
        ++*(_DWORD *)(a1 + 448);
        if ( !v13 )
          return 1;
        (*(void (__cdecl **)(_DWORD, int))(a1 + 72))(*(_DWORD *)(a1 + 4), v13);
        sub_10022FA0(a1 + 436);
        goto LABEL_137;
      case 4:
        if ( !*(_DWORD *)(a1 + 380) )
        {
          v25 = *(int (__cdecl **)(_DWORD))(a1 + 104);
          if ( v25 )
          {
            if ( !v25(*(_DWORD *)(a1 + 4)) )
              return 22;
          }
        }
        *(_DWORD *)(a1 + 484) = 1;
        goto LABEL_137;
      case 5:
      case 11:
        if ( !(*(int (__cdecl **)(int, int, int, int *))(a2 + 52))(a2, v9, a6, v44) )
          return 2;
        if ( !*(_DWORD *)(a1 + 268) )
          goto LABEL_137;
        if ( !sub_10023030(v9 + *(_DWORD *)(a2 + 64))
          || *(_DWORD *)(a1 + 368) == *(_DWORD *)(a1 + 364) && !sub_10023100() )
        {
          return 1;
        }
        *(_BYTE *)(*(_DWORD *)(a1 + 368))++ = 0;
        v14 = *(_DWORD *)(a1 + 372);
        if ( !v14 )
          return 1;
        sub_10022BE0();
        *(_DWORD *)(*(_DWORD *)(a1 + 268) + 20) = v14;
        goto LABEL_26;
      case 6:
        if ( *(_DWORD *)(a1 + 376) )
        {
          if ( *(_DWORD *)(a1 + 484) )
          {
            v15 = *(_DWORD *)(a1 + 380) == 0;
            *(_DWORD *)(a1 + 376) = 0;
            if ( v15 )
            {
              v16 = *(int (__cdecl **)(_DWORD))(a1 + 104);
              if ( v16 )
              {
                if ( !v16(*(_DWORD *)(a1 + 4)) )
                  return 22;
              }
            }
          }
        }
        v17 = *(void (__cdecl **)(_DWORD))(a1 + 76);
        if ( v17 )
          v17(*(_DWORD *)(a1 + 4));
        goto LABEL_137;
      case 7:
        if ( (*(int (__cdecl **)(int, int, int))(a2 + 44))(a2, v9, a6) )
          goto LABEL_84;
        if ( !sub_10023030(v9) || *(_DWORD *)(a1 + 368) == *(_DWORD *)(a1 + 364) && !sub_10023100() )
          return 1;
        *(_BYTE *)(*(_DWORD *)(a1 + 368))++ = 0;
        v29 = *(_DWORD *)(a1 + 372);
        if ( !v29 )
          return 1;
        if ( *(_DWORD *)(a1 + 376) )
        {
          v30 = (_DWORD *)sub_10022D40(v29, 0x20u);
          *(_DWORD *)(a1 + 268) = v30;
          if ( !v30 )
            return 1;
          if ( *v30 == v29 )
          {
LABEL_26:
            *(_DWORD *)(a1 + 372) = *(_DWORD *)(a1 + 368);
          }
          else
          {
            *(_DWORD *)(a1 + 368) = *(_DWORD *)(a1 + 372);
            *(_DWORD *)(a1 + 268) = 0;
          }
        }
        else
        {
          *(_DWORD *)(a1 + 368) = *(_DWORD *)(a1 + 372);
          *(_DWORD *)(a1 + 268) = 0;
        }
        goto LABEL_137;
      case 8:
LABEL_84:
        *(_DWORD *)(a1 + 268) = 0;
        goto LABEL_137;
      case 9:
        v23 = sub_10022080(a1, a2, a6 - *(_DWORD *)(a2 + 64));
        v24 = *(_DWORD *)(a1 + 268);
        if ( v24 )
        {
          *(_DWORD *)(v24 + 4) = *(_DWORD *)(a1 + 372);
          *(_DWORD *)(*(_DWORD *)(a1 + 268) + 8) = *(_DWORD *)(a1 + 368) - *(_DWORD *)(a1 + 372);
          v15 = *(_DWORD *)(a1 + 92) == 0;
          *(_DWORD *)(a1 + 372) = *(_DWORD *)(a1 + 368);
          if ( !v15 && sub_10022D40(**(_DWORD **)(a1 + 268), 0) == *(_DWORD *)(a1 + 268) )
          {
            *v45 = v9;
            (*(void (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(a1 + 92))(
              *(_DWORD *)(a1 + 4),
              **(_DWORD **)(a1 + 268),
              *(_DWORD *)(*(_DWORD *)(a1 + 268) + 4),
              *(_DWORD *)(*(_DWORD *)(a1 + 268) + 8));
          }
        }
        else
        {
          *(_DWORD *)(a1 + 368) = *(_DWORD *)(a1 + 372);
        }
        if ( !v23 )
          goto LABEL_137;
        return v23;
      case 10:
        if ( !*(_DWORD *)(a1 + 268) )
          goto LABEL_137;
        if ( sub_10023030(v9 + *(_DWORD *)(a2 + 64)) )
        {
          if ( *(_DWORD *)(a1 + 368) != *(_DWORD *)(a1 + 364) || sub_10023100() )
          {
            *(_BYTE *)(*(_DWORD *)(a1 + 368))++ = 0;
            v26 = *(_DWORD *)(a1 + 372);
          }
          else
          {
            v26 = 0;
          }
        }
        else
        {
          v26 = 0;
        }
        *(_DWORD *)(*(_DWORD *)(a1 + 268) + 12) = v26;
        v27 = *(_DWORD *)(a1 + 268);
        if ( !*(_DWORD *)(v27 + 12) )
          return 1;
        *(_DWORD *)(v27 + 16) = *(_DWORD *)(a1 + 392);
        *(_DWORD *)(a1 + 372) = *(_DWORD *)(a1 + 368);
        goto LABEL_137;
      case 12:
        if ( !*(_DWORD *)(a1 + 268) )
          goto LABEL_137;
        v28 = sub_10023030(v9);
        if ( v28 )
        {
          if ( *(_DWORD *)(a1 + 368) != *(_DWORD *)(a1 + 364) || (v28 = sub_10023100()) != 0 )
          {
            *(_BYTE *)(*(_DWORD *)(a1 + 368))++ = 0;
            v28 = *(_DWORD *)(a1 + 372);
          }
          v9 = a3;
        }
        *(_DWORD *)(*(_DWORD *)(a1 + 268) + 24) = v28;
        if ( !*(_DWORD *)(*(_DWORD *)(a1 + 268) + 24) )
          return 1;
        v15 = *(_DWORD *)(a1 + 80) == 0;
        *(_DWORD *)(a1 + 372) = *(_DWORD *)(a1 + 368);
        if ( !v15 )
        {
          *v45 = v9;
          (*(void (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 80))(
            *(_DWORD *)(a1 + 4),
            **(_DWORD **)(a1 + 268),
            *(_DWORD *)(*(_DWORD *)(a1 + 268) + 16),
            *(_DWORD *)(*(_DWORD *)(a1 + 268) + 12),
            *(_DWORD *)(*(_DWORD *)(a1 + 268) + 20),
            *(_DWORD *)(*(_DWORD *)(a1 + 268) + 24));
        }
        goto LABEL_137;
      case 13:
        v15 = *(_DWORD *)(a1 + 84) == 0;
        *(_DWORD *)(a1 + 276) = 0;
        *(_DWORD *)(a1 + 272) = 0;
        if ( v15 )
          goto LABEL_137;
        if ( sub_10023030(v9) )
        {
          if ( *(_DWORD *)(a1 + 448) != *(_DWORD *)(a1 + 444) || sub_10023100() )
          {
            *(_BYTE *)(*(_DWORD *)(a1 + 448))++ = 0;
            v31 = *(_DWORD *)(a1 + 452);
          }
          else
          {
            v31 = 0;
          }
        }
        else
        {
          v31 = 0;
        }
        *(_DWORD *)(a1 + 272) = v31;
        if ( !v31 )
          return 1;
        *(_DWORD *)(a1 + 452) = *(_DWORD *)(a1 + 448);
        goto LABEL_137;
      case 14:
        if ( !*(_DWORD *)(a1 + 272) || !*(_DWORD *)(a1 + 84) )
          goto LABEL_113;
        if ( !sub_10023030(*(_DWORD *)(a2 + 64) + v9) )
          return 1;
        v34 = sub_100230D0();
        if ( !v34 )
          return 1;
        *v45 = v9;
        (*(void (__cdecl **)(_DWORD, _DWORD, _DWORD, int, _DWORD))(a1 + 84))(
          *(_DWORD *)(a1 + 4),
          *(_DWORD *)(a1 + 272),
          *(_DWORD *)(a1 + 392),
          v34,
          *(_DWORD *)(a1 + 276));
LABEL_113:
        sub_10022FA0(a1 + 436);
        goto LABEL_137;
      case 15:
        if ( *(_DWORD *)(a1 + 276) && *(_DWORD *)(a1 + 84) )
        {
          *v45 = v9;
          (*(void (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 84))(
            *(_DWORD *)(a1 + 4),
            *(_DWORD *)(a1 + 272),
            *(_DWORD *)(a1 + 392),
            0,
            *(_DWORD *)(a1 + 276));
        }
        goto LABEL_113;
      case 16:
        if ( !(*(int (__cdecl **)(int, int, int, int *))(a2 + 52))(a2, v9, a6, v44) )
          return 2;
        if ( !*(_DWORD *)(a1 + 272) )
          goto LABEL_137;
        if ( !sub_10023030(v9 + *(_DWORD *)(a2 + 64)) )
          return 1;
        v32 = sub_100230D0();
        if ( !v32 )
          return 1;
        sub_10022BE0();
        v33 = *(_DWORD *)(a1 + 448);
        *(_DWORD *)(a1 + 276) = v32;
        *(_DWORD *)(a1 + 452) = v33;
        goto LABEL_137;
      case 17:
        v21 = sub_10022690(a1, a2, v9, a6);
        *(_DWORD *)(a1 + 284) = v21;
        if ( !v21 )
          return 1;
        *(_BYTE *)(a1 + 288) = 0;
        *(_BYTE *)(a1 + 289) = 0;
        goto LABEL_137;
      case 18:
        *(_BYTE *)(a1 + 288) = 1;
        goto LABEL_137;
      case 19:
        *(_BYTE *)(a1 + 289) = 1;
        goto LABEL_137;
      case 28:
        if ( !sub_10023030(v9) || *(_DWORD *)(a1 + 368) == *(_DWORD *)(a1 + 364) && !sub_10023100() )
          return 1;
        *(_BYTE *)(*(_DWORD *)(a1 + 368))++ = 0;
        v18 = *(_DWORD *)(a1 + 372);
        if ( !v18 )
          return 1;
        v19 = (_DWORD *)sub_10022D40(v18, 0x18u);
        *(_DWORD *)(a1 + 280) = v19;
        if ( !v19 )
          return 1;
        if ( *v19 == v18 )
        {
          *(_DWORD *)(a1 + 372) = *(_DWORD *)(a1 + 368);
          v20 = sub_100225A0(v19);
LABEL_136:
          if ( !v20 )
            return 1;
        }
        else
        {
          *(_DWORD *)(a1 + 368) = *(_DWORD *)(a1 + 372);
        }
LABEL_137:
        if ( *(_DWORD *)(a1 + 68) && (a5 < 11 || a5 > 14 && a5 != 28) )
          sub_10022450(a3);
        v9 = a6;
        a3 = a6;
        v41 = (*(int (__cdecl **)(int, int, int, int *))a2)(a2, a6, a4, &a6);
        v10 = v44;
        a5 = v41;
        v7 = v41;
        break;
      case 29:
      case 30:
        if ( !*(_DWORD *)(a1 + 376) )
          goto LABEL_137;
        v20 = sub_100224F0(0);
        goto LABEL_136;
      case 31:
      case 32:
        result = sub_10021C70(a1, a1 + 356);
        if ( result )
          return result;
        v15 = *(_DWORD *)(a1 + 376) == 0;
        v22 = *(_DWORD *)(a1 + 372);
        *(_DWORD *)(a1 + 372) = *(_DWORD *)(a1 + 368);
        if ( v15 )
          goto LABEL_137;
        v20 = sub_100224F0(v22);
        goto LABEL_136;
      case 37:
        v35 = *(_DWORD *)(a1 + 480);
        if ( *(_DWORD *)(a1 + 232) >= v35 )
        {
          if ( v35 )
          {
            v42 = *(void **)(a1 + 476);
            *(_DWORD *)(a1 + 480) = 2 * v35;
            v36 = realloc(v42, 2 * v35);
          }
          else
          {
            *(_DWORD *)(a1 + 480) = 32;
            v36 = malloc(0x20u);
          }
          *(_DWORD *)(a1 + 476) = v36;
          if ( !v36 )
            return 1;
        }
        *(_BYTE *)(*(_DWORD *)(a1 + 476) + *(_DWORD *)(a1 + 232)) = 0;
        goto LABEL_137;
      case 42:
        v39 = (_BYTE *)(*(_DWORD *)(a1 + 232) + *(_DWORD *)(a1 + 476));
        if ( *v39 == 44 )
          return 2;
        *v39 = 124;
        goto LABEL_137;
      case 43:
        v37 = *(_DWORD *)(a1 + 476);
        v38 = *(_DWORD *)(a1 + 232);
        if ( *(_BYTE *)(v37 + v38) == 124 )
          return 2;
        *(_BYTE *)(v37 + v38) = 44;
        goto LABEL_137;
      case 48:
        if ( !*(_DWORD *)(a1 + 380) )
        {
          v40 = *(int (__cdecl **)(_DWORD))(a1 + 104);
          if ( v40 )
          {
            if ( !v40(*(_DWORD *)(a1 + 4)) )
              return 22;
          }
        }
        v15 = *(_DWORD *)(a1 + 68) == 0;
        *(_DWORD *)(a1 + 376) = 0;
        if ( !v15 )
          sub_10022450(a3);
        goto LABEL_137;
      case 49:
        if ( *(_DWORD *)(a1 + 268) && *(_DWORD *)(a1 + 88) )
        {
          *v45 = v9;
          (*(void (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 88))(
            *(_DWORD *)(a1 + 4),
            **(_DWORD **)(a1 + 268),
            *(_DWORD *)(*(_DWORD *)(a1 + 268) + 16),
            *(_DWORD *)(*(_DWORD *)(a1 + 268) + 12),
            *(_DWORD *)(*(_DWORD *)(a1 + 268) + 20));
        }
        goto LABEL_137;
      default:
        goto LABEL_137;
    }
  }
  if ( !a7 || !v7 )
  {
    switch ( v7 )
    {
      case -4:
        return 3;
      case -2:
        return 6;
      case -1:
        return 5;
      case 0:
        *v10 = a6;
        return 4;
      default:
        v7 = -v7;
        a5 = v7;
        a6 = a4;
        goto LABEL_10;
    }
  }
  *a7 = v9;
  return 0;
}
