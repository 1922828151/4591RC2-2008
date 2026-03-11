/*
 * func-name: sub_100195F0
 * func-address: 0x100195f0
 * callers: none
 * callees: 0x10017ef0, 0x100184b0, 0x10018780, 0x10018c70, 0x10019140
 */

int __usercall sub_100195F0@<eax>(char *a1@<eax>, char *a2@<edx>, int a3@<esi>, unsigned __int8 **a4)
{
  int result; // eax
  unsigned __int8 v6; // cl
  unsigned __int8 v7; // bl
  int v8; // eax
  unsigned __int8 v9; // bl
  unsigned __int8 v10; // cl
  int v11; // eax
  char v12; // al
  int v13; // eax
  char v14; // al
  int v15; // eax
  int i; // eax

  if ( a2 == a1 )
    return -1;
  v6 = *a2;
  v7 = a2[1];
  if ( v7 )
    v8 = sub_10017EF0(a2[1], v6);
  else
    v8 = *(unsigned __int8 *)(v6 + a3 + 72);
  switch ( v8 )
  {
    case 5:
LABEL_16:
      if ( a1 - a2 >= 2 )
        goto LABEL_52;
      return -2;
    case 6:
LABEL_18:
      if ( a1 - a2 >= 3 )
        goto LABEL_52;
      return -2;
    case 7:
LABEL_20:
      if ( a1 - a2 >= 4 )
        goto LABEL_52;
      return -2;
    case 15:
      return sub_10018780(a1, a2 + 2, a3, a4);
    case 16:
      a2 += 2;
      if ( a2 == a1 )
        goto LABEL_37;
      v14 = a2[1];
      if ( v14 )
        v15 = sub_10017EF0(v14, *a2);
      else
        v15 = *(unsigned __int8 *)((unsigned __int8)*a2 + a3 + 72);
      if ( v15 == 20 )
      {
        a2 += 2;
        if ( a1 - a2 < 12 )
          goto LABEL_37;
        for ( i = 0; i < 6; ++i )
        {
          if ( a2[1] || *a2 != byte_10028BE4[i] )
            goto LABEL_52;
          a2 += 2;
        }
        *a4 = (unsigned __int8 *)a2;
        return 8;
      }
      else
      {
        if ( v15 != 27 )
          goto LABEL_52;
        return sub_100184B0((unsigned __int8 *)a2 + 2, a3, (unsigned __int8 *)a1, a4);
      }
    case 17:
      return sub_10018C70((unsigned __int8 *)a1, (unsigned __int8 *)a2 + 2, a3, a4);
    case 22:
    case 24:
      goto LABEL_8;
    case 29:
      if ( ((1 << (v6 & 0x1F)) & dword_10027F10[8 * (unsigned __int8)byte_10028410[v7] + (v6 >> 5)]) == 0 )
        goto LABEL_52;
LABEL_8:
      a2 += 2;
      if ( a2 == a1 )
      {
LABEL_37:
        result = -1;
      }
      else
      {
        while ( 2 )
        {
          v9 = a2[1];
          v10 = *a2;
          if ( v9 )
            v11 = sub_10017EF0(a2[1], v10);
          else
            v11 = *(unsigned __int8 *)(v10 + a3 + 72);
          switch ( v11 )
          {
            case 5:
              goto LABEL_16;
            case 6:
              goto LABEL_18;
            case 7:
              goto LABEL_20;
            case 9:
            case 10:
            case 21:
              a2 += 2;
              if ( a2 == a1 )
                goto LABEL_37;
              while ( 2 )
              {
                v12 = a2[1];
                if ( v12 )
                  v13 = sub_10017EF0(v12, *a2);
                else
                  v13 = *(unsigned __int8 *)((unsigned __int8)*a2 + a3 + 72);
                switch ( v13 )
                {
                  case 5:
                    goto LABEL_16;
                  case 6:
                    goto LABEL_18;
                  case 7:
                    goto LABEL_20;
                  case 9:
                  case 10:
                  case 21:
                    a2 += 2;
                    if ( a2 != a1 )
                      continue;
                    return -1;
                  case 11:
                    goto LABEL_31;
                  case 17:
                    goto LABEL_32;
                  case 22:
                  case 24:
                    goto LABEL_30;
                  case 29:
                    if ( ((1 << (*a2 & 0x1F))
                        & dword_10027F10[8 * (unsigned __int8)byte_10028410[(unsigned __int8)a2[1]]
                                       + ((unsigned __int8)*a2 >> 5)]) == 0 )
                      goto LABEL_52;
LABEL_30:
                    result = sub_10019140(a3, (unsigned __int8 *)a2 + 2, (unsigned __int8 *)a1, a4);
                    break;
                  default:
                    goto LABEL_52;
                }
                return result;
              }
            case 11:
LABEL_31:
              *a4 = (unsigned __int8 *)(a2 + 2);
              return 2;
            case 17:
LABEL_32:
              a2 += 2;
              if ( a2 == a1 )
                goto LABEL_37;
              if ( a2[1] || *a2 != 62 )
                goto LABEL_52;
              *a4 = (unsigned __int8 *)(a2 + 2);
              return 4;
            case 22:
            case 24:
            case 25:
            case 26:
            case 27:
              goto LABEL_14;
            case 29:
              if ( ((1 << (v10 & 0x1F)) & dword_10027F10[8 * (unsigned __int8)byte_10028510[v9] + (v10 >> 5)]) == 0 )
                goto LABEL_52;
LABEL_14:
              a2 += 2;
              if ( a2 != a1 )
                continue;
              result = -1;
              break;
            default:
              goto LABEL_52;
          }
          break;
        }
      }
      break;
    default:
LABEL_52:
      *a4 = (unsigned __int8 *)a2;
      result = 0;
      break;
  }
  return result;
}
