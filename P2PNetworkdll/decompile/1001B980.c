/*
 * func-name: sub_1001B980
 * func-address: 0x1001b980
 * callers: 0x1001c330
 * callees: 0x10017ef0
 */

int __usercall sub_1001B980@<eax>(
        unsigned __int8 *a1@<eax>,
        unsigned __int8 *a2@<edx>,
        int a3@<edi>,
        unsigned __int8 **a4)
{
  int result; // eax
  unsigned __int8 v6; // bl
  int v7; // eax
  unsigned __int8 v8; // bl
  int v9; // eax
  int v10; // eax

  if ( a2 == a1 )
    return -1;
  v6 = *a2;
  if ( *a2 )
    v7 = sub_10017EF0(*a2, a2[1]);
  else
    v7 = *(unsigned __int8 *)(a2[1] + a3 + 72);
  switch ( v7 )
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
      if ( ((1 << (a2[1] & 0x1F)) & dword_10027F10[8 * (unsigned __int8)byte_10028410[v6] + (a2[1] >> 5)]) == 0 )
        goto LABEL_30;
LABEL_8:
      a2 += 2;
      if ( a2 != a1 )
      {
        while ( 2 )
        {
          v8 = *a2;
          if ( *a2 )
            v9 = sub_10017EF0(*a2, a2[1]);
          else
            v9 = *(unsigned __int8 *)(a2[1] + a3 + 72);
          switch ( v9 )
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
                if ( *a2 )
                  v10 = sub_10017EF0(*a2, a2[1]);
                else
                  v10 = *(unsigned __int8 *)(a2[1] + a3 + 72);
                switch ( v10 )
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
              if ( ((1 << (a2[1] & 0x1F)) & dword_10027F10[8 * (unsigned __int8)byte_10028510[v8] + (a2[1] >> 5)]) == 0 )
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
