/*
 * func-name: sub_10018C70
 * func-address: 0x10018c70
 * callers: 0x100195f0
 * callees: 0x10017ef0
 */

int __usercall sub_10018C70@<eax>(
        unsigned __int8 *a1@<eax>,
        unsigned __int8 *a2@<edx>,
        int a3@<edi>,
        unsigned __int8 **a4)
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
        goto LABEL_30;
      return -2;
    case 6:
LABEL_18:
      if ( a1 - a2 >= 3 )
        goto LABEL_30;
      return -2;
    case 7:
LABEL_28:
      if ( a1 - a2 >= 4 )
        goto LABEL_30;
      return -2;
    case 22:
    case 24:
      goto LABEL_8;
    case 29:
      if ( ((1 << (v6 & 0x1F)) & dword_10027F10[8 * (unsigned __int8)byte_10028410[v7] + (v6 >> 5)]) == 0 )
        goto LABEL_30;
LABEL_8:
      a2 += 2;
      if ( a2 != a1 )
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
              goto LABEL_28;
            case 9:
            case 10:
            case 21:
              a2 += 2;
              if ( a2 == a1 )
                break;
              while ( 2 )
              {
                v12 = a2[1];
                if ( v12 )
                  v13 = sub_10017EF0(v12, *a2);
                else
                  v13 = *(unsigned __int8 *)(*a2 + a3 + 72);
                switch ( v13 )
                {
                  case 9:
                  case 10:
                  case 21:
                    a2 += 2;
                    if ( a2 != a1 )
                      continue;
                    result = -1;
                    break;
                  case 11:
                    goto LABEL_27;
                  default:
                    goto LABEL_30;
                }
                return result;
              }
            case 11:
LABEL_27:
              *a4 = a2 + 2;
              return 5;
            case 22:
            case 24:
            case 25:
            case 26:
            case 27:
              goto LABEL_14;
            case 29:
              if ( ((1 << (v10 & 0x1F)) & dword_10027F10[8 * (unsigned __int8)byte_10028510[v9] + (v10 >> 5)]) == 0 )
                goto LABEL_30;
LABEL_14:
              a2 += 2;
              if ( a2 == a1 )
                break;
              continue;
            default:
              goto LABEL_30;
          }
          break;
        }
      }
      result = -1;
      break;
    default:
LABEL_30:
      *a4 = a2;
      result = 0;
      break;
  }
  return result;
}
