/*
 * func-name: sub_1001BCA0
 * func-address: 0x1001bca0
 * callers: 0x1001be60
 * callees: 0x10017ef0, 0x1001bc10
 */

int __usercall sub_1001BCA0@<eax>(int a1@<eax>, unsigned __int8 *a2@<edx>, unsigned __int8 **a3@<edi>, int a4)
{
  int result; // eax
  unsigned __int8 v6; // bl
  int v7; // eax
  unsigned __int8 v8; // bl
  int v9; // eax

  if ( a2 == (unsigned __int8 *)a1 )
    return -1;
  v6 = *a2;
  if ( *a2 )
    v7 = sub_10017EF0(*a2, a2[1]);
  else
    v7 = *(unsigned __int8 *)(a2[1] + a4 + 72);
  switch ( v7 )
  {
    case 5:
LABEL_16:
      if ( a1 - (int)a2 >= 2 )
        goto LABEL_24;
      return -2;
    case 6:
LABEL_18:
      if ( a1 - (int)a2 >= 3 )
        goto LABEL_24;
      return -2;
    case 7:
LABEL_20:
      if ( a1 - (int)a2 >= 4 )
        goto LABEL_24;
      return -2;
    case 19:
      return sub_1001BC10(a3, (int)(a2 + 2), a1, a4);
    case 22:
    case 24:
      goto LABEL_8;
    case 29:
      if ( ((1 << (a2[1] & 0x1F)) & dword_10027F10[8 * (unsigned __int8)byte_10028410[v6] + (a2[1] >> 5)]) == 0 )
        goto LABEL_24;
LABEL_8:
      a2 += 2;
      if ( a2 != (unsigned __int8 *)a1 )
      {
        while ( 2 )
        {
          v8 = *a2;
          if ( *a2 )
            v9 = sub_10017EF0(*a2, a2[1]);
          else
            v9 = *(unsigned __int8 *)(a2[1] + a4 + 72);
          switch ( v9 )
          {
            case 5:
              goto LABEL_16;
            case 6:
              goto LABEL_18;
            case 7:
              goto LABEL_20;
            case 18:
              result = 9;
              *a3 = a2 + 2;
              return result;
            case 22:
            case 24:
            case 25:
            case 26:
            case 27:
              goto LABEL_14;
            case 29:
              if ( ((1 << (a2[1] & 0x1F)) & dword_10027F10[8 * (unsigned __int8)byte_10028510[v8] + (a2[1] >> 5)]) == 0 )
                goto LABEL_24;
LABEL_14:
              a2 += 2;
              if ( a2 == (unsigned __int8 *)a1 )
                break;
              continue;
            default:
              goto LABEL_24;
          }
          break;
        }
      }
      result = -1;
      break;
    default:
LABEL_24:
      result = 0;
      *a3 = a2;
      break;
  }
  return result;
}
