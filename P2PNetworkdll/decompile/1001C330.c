/*
 * func-name: sub_1001C330
 * func-address: 0x1001c330
 * callers: none
 * callees: 0x10017ef0, 0x1001b160, 0x1001b440, 0x1001b980, 0x1001be60
 */

int __usercall sub_1001C330@<eax>(
        unsigned __int8 *a1@<eax>,
        unsigned __int8 *a2@<edx>,
        int a3@<ecx>,
        unsigned __int8 **a4)
{
  int result; // eax
  unsigned __int8 v7; // bl
  int v8; // eax
  unsigned __int8 v9; // bl
  int v10; // eax
  int v11; // eax
  int v12; // eax
  unsigned __int8 *v13; // eax
  int v14; // ecx

  if ( a2 == a1 )
    return -1;
  v7 = *a2;
  if ( *a2 )
    v8 = sub_10017EF0(*a2, a2[1]);
  else
    v8 = *(unsigned __int8 *)(a2[1] + a3 + 72);
  switch ( v8 )
  {
    case 5:
LABEL_16:
      if ( a1 - a2 >= 2 )
        goto LABEL_53;
      return -2;
    case 6:
LABEL_18:
      if ( a1 - a2 >= 3 )
        goto LABEL_53;
      return -2;
    case 7:
LABEL_20:
      if ( a1 - a2 >= 4 )
        goto LABEL_53;
      return -2;
    case 15:
      return sub_1001B440(a1, a2 + 2, a3, a4);
    case 16:
      a2 += 2;
      if ( a2 == a1 )
        return -1;
      if ( *a2 )
        v12 = sub_10017EF0(*a2, a2[1]);
      else
        v12 = *(unsigned __int8 *)(a2[1] + a3 + 72);
      if ( v12 == 20 )
      {
        v13 = a2 + 2;
        if ( a1 - (a2 + 2) < 12 )
          return -1;
        v14 = 0;
        while ( !*v13 && v13[1] == byte_10028ECC[v14] )
        {
          ++v14;
          v13 += 2;
          if ( v14 >= 6 )
          {
            *a4 = v13;
            return 8;
          }
        }
        *a4 = v13;
        result = 0;
      }
      else
      {
        if ( v12 != 27 )
          goto LABEL_53;
        result = sub_1001B160((char *)a2 + 2, (char *)a1, a3, (char **)a4);
      }
      break;
    case 17:
      return sub_1001B980(a1, a2 + 2, a3, a4);
    case 22:
    case 24:
      goto LABEL_8;
    case 29:
      if ( ((1 << (a2[1] & 0x1F)) & dword_10027F10[8 * (unsigned __int8)byte_10028410[v7] + (a2[1] >> 5)]) == 0 )
        goto LABEL_53;
LABEL_8:
      a2 += 2;
      if ( a2 == a1 )
        return -1;
      while ( 2 )
      {
        v9 = *a2;
        if ( *a2 )
          v10 = sub_10017EF0(*a2, a2[1]);
        else
          v10 = *(unsigned __int8 *)(a2[1] + a3 + 72);
        switch ( v10 )
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
              return -1;
            while ( 2 )
            {
              if ( *a2 )
                v11 = sub_10017EF0(*a2, a2[1]);
              else
                v11 = *(unsigned __int8 *)(a2[1] + a3 + 72);
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
                  if ( ((1 << (a2[1] & 0x1F)) & dword_10027F10[8 * (unsigned __int8)byte_10028410[*a2] + (a2[1] >> 5)]) == 0 )
                    goto LABEL_53;
LABEL_30:
                  result = sub_1001BE60(a3, a2 + 2, (int)a1, a4);
                  break;
                default:
                  goto LABEL_53;
              }
              return result;
            }
          case 11:
LABEL_31:
            *a4 = a2 + 2;
            return 2;
          case 17:
LABEL_32:
            a2 += 2;
            if ( a2 == a1 )
              return -1;
            if ( *a2 || a2[1] != 62 )
              goto LABEL_53;
            *a4 = a2 + 2;
            return 4;
          case 22:
          case 24:
          case 25:
          case 26:
          case 27:
            goto LABEL_14;
          case 29:
            if ( ((1 << (a2[1] & 0x1F)) & dword_10027F10[8 * (unsigned __int8)byte_10028510[v9] + (a2[1] >> 5)]) == 0 )
              goto LABEL_53;
LABEL_14:
            a2 += 2;
            if ( a2 != a1 )
              continue;
            result = -1;
            break;
          default:
            goto LABEL_53;
        }
        return result;
      }
    default:
LABEL_53:
      *a4 = a2;
      return 0;
  }
  return result;
}
