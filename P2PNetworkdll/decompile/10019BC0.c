/*
 * func-name: sub_10019BC0
 * func-address: 0x10019bc0
 * callers: none
 * callees: 0x10017ef0
 */

int __usercall sub_10019BC0@<eax>(
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
        goto LABEL_24;
      return -2;
    case 6:
LABEL_18:
      if ( a1 - a2 >= 3 )
        goto LABEL_24;
      return -2;
    case 7:
LABEL_20:
      if ( a1 - a2 >= 4 )
        goto LABEL_24;
      return -2;
    case 9:
    case 10:
    case 21:
    case 30:
      *a4 = a2;
      return 22;
    case 22:
    case 24:
      goto LABEL_8;
    case 29:
      if ( ((1 << (v6 & 0x1F)) & dword_10027F10[8 * (unsigned __int8)byte_10028410[v7] + (v6 >> 5)]) == 0 )
        goto LABEL_24;
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
              goto LABEL_20;
            case 18:
              *a4 = a2 + 2;
              return 28;
            case 22:
            case 24:
            case 25:
            case 26:
            case 27:
              goto LABEL_14;
            case 29:
              if ( ((1 << (v10 & 0x1F)) & dword_10027F10[8 * (unsigned __int8)byte_10028510[v9] + (v10 >> 5)]) == 0 )
                goto LABEL_24;
LABEL_14:
              a2 += 2;
              if ( a2 == a1 )
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
      *a4 = a2;
      result = 0;
      break;
  }
  return result;
}
