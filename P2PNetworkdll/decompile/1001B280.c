/*
 * func-name: sub_1001B280
 * func-address: 0x1001b280
 * callers: none
 * callees: 0x10017ef0, 0x1001b160
 */

int __usercall sub_1001B280@<eax>(char *a1@<eax>, int a2@<edx>, char **a3@<ebx>, int a4@<esi>)
{
  int result; // eax
  int v6; // eax
  int v7; // eax
  char v8; // al
  int v9; // eax

  if ( (char *)a2 == a1 )
    return -1;
  if ( *(_BYTE *)a2 )
    v6 = sub_10017EF0(*(_BYTE *)a2, *(_BYTE *)(a2 + 1));
  else
    v6 = *(unsigned __int8 *)(*(unsigned __int8 *)(a2 + 1) + a4 + 72);
  switch ( v6 )
  {
    case 20:
      result = 33;
      *a3 = (char *)(a2 + 2);
      break;
    case 22:
    case 24:
      a2 += 2;
      if ( (char *)a2 == a1 )
        return -1;
      while ( 2 )
      {
        if ( *(_BYTE *)a2 )
          v7 = sub_10017EF0(*(_BYTE *)a2, *(_BYTE *)(a2 + 1));
        else
          v7 = *(unsigned __int8 *)(*(unsigned __int8 *)(a2 + 1) + a4 + 72);
        switch ( v7 )
        {
          case 9:
          case 10:
          case 21:
LABEL_21:
            result = 16;
            *a3 = (char *)a2;
            break;
          case 22:
          case 24:
            a2 += 2;
            if ( (char *)a2 != a1 )
              continue;
            result = -1;
            break;
          case 30:
            if ( (char *)(a2 + 2) != a1 )
            {
              v8 = *(_BYTE *)(a2 + 2);
              if ( v8 )
                v9 = sub_10017EF0(v8, *(_BYTE *)(a2 + 3));
              else
                v9 = *(unsigned __int8 *)(*(unsigned __int8 *)(a2 + 3) + a4 + 72);
              switch ( v9 )
              {
                case 9:
                case 10:
                case 21:
                case 30:
                  goto LABEL_22;
                default:
                  goto LABEL_21;
              }
            }
            return -1;
          default:
            goto LABEL_22;
        }
        break;
      }
      break;
    case 27:
      result = sub_1001B160((char *)(a2 + 2), a1, a4, a3);
      break;
    default:
LABEL_22:
      result = 0;
      *a3 = (char *)a2;
      break;
  }
  return result;
}
