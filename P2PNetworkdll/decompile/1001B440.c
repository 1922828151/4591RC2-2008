/*
 * func-name: sub_1001B440
 * func-address: 0x1001b440
 * callers: 0x1001c330
 * callees: 0x10017ef0, 0x1001b3d0
 */

int __usercall sub_1001B440@<eax>(unsigned __int8 *a1@<eax>, unsigned __int8 *a2@<ecx>, int a3, unsigned __int8 **a4)
{
  unsigned __int8 *v4; // esi
  int result; // eax
  unsigned __int8 v8; // dl
  int v9; // eax
  unsigned __int8 v10; // dl
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // [esp+10h] [ebp-4h] BYREF

  v4 = a2;
  if ( a2 == a1 )
    return -1;
  v8 = *a2;
  if ( *a2 )
    v9 = sub_10017EF0(*a2, a2[1]);
  else
    v9 = *(unsigned __int8 *)(a2[1] + a3 + 72);
  switch ( v9 )
  {
    case 5:
      if ( a1 - v4 >= 2 )
        goto LABEL_55;
      return -2;
    case 6:
      if ( a1 - v4 >= 3 )
        goto LABEL_8;
      return -2;
    case 7:
      if ( a1 - v4 < 4 )
        return -2;
LABEL_18:
      *a4 = v4;
      return 0;
    case 22:
    case 24:
      goto LABEL_9;
    case 29:
      if ( ((1 << (v4[1] & 0x1F)) & dword_10027F10[8 * (unsigned __int8)byte_10028410[v8] + (v4[1] >> 5)]) == 0 )
      {
LABEL_8:
        *a4 = v4;
        return 0;
      }
LABEL_9:
      v4 += 2;
      if ( v4 == a1 )
        return -1;
      while ( 2 )
      {
        v10 = *v4;
        if ( *v4 )
          v11 = sub_10017EF0(*v4, v4[1]);
        else
          v11 = *(unsigned __int8 *)(v4[1] + a3 + 72);
        switch ( v11 )
        {
          case 5:
            if ( a1 - v4 >= 2 )
              goto LABEL_18;
            return -2;
          case 6:
            if ( a1 - v4 >= 3 )
              goto LABEL_55;
            return -2;
          case 7:
            if ( a1 - v4 >= 4 )
              goto LABEL_8;
            return -2;
          case 9:
          case 10:
          case 21:
            v14 = 11;
            if ( v4 - a2 == 6 && !sub_1001B3D0(a2, &v14) )
              goto LABEL_8;
            v4 += 2;
            if ( v4 == a1 )
              return -1;
            v12 = a1 - v4;
            while ( 2 )
            {
              if ( *v4 )
                v13 = sub_10017EF0(*v4, v4[1]);
              else
                v13 = *(unsigned __int8 *)(v4[1] + a3 + 72);
              switch ( v13 )
              {
                case 0:
                case 1:
                case 8:
                  goto LABEL_18;
                case 5:
                  if ( v12 < 2 )
                    return -2;
                  goto LABEL_32;
                case 6:
                  if ( v12 < 3 )
                    return -2;
                  v4 += 3;
                  v12 -= 3;
                  goto LABEL_33;
                case 7:
                  if ( v12 < 4 )
                    return -2;
                  v4 += 4;
                  v12 -= 4;
                  goto LABEL_33;
                case 15:
                  v4 += 2;
                  v12 -= 2;
                  if ( v4 == a1 )
                    return -1;
                  if ( *v4 || v4[1] != 62 )
                    goto LABEL_33;
                  result = v14;
                  *a4 = v4 + 2;
                  return result;
                default:
LABEL_32:
                  v4 += 2;
                  v12 -= 2;
LABEL_33:
                  if ( v4 != a1 )
                    continue;
                  result = -1;
                  break;
              }
              return result;
            }
          case 15:
            v14 = 11;
            if ( v4 - a2 == 6 && !sub_1001B3D0(a2, &v14) )
              goto LABEL_55;
            v4 += 2;
            if ( v4 == a1 )
              return -1;
            if ( *v4 || v4[1] != 62 )
              goto LABEL_18;
            *a4 = v4 + 2;
            result = v14;
            break;
          case 22:
          case 24:
          case 25:
          case 26:
          case 27:
            goto LABEL_15;
          case 29:
            if ( ((1 << (v4[1] & 0x1F)) & dword_10027F10[8 * (unsigned __int8)byte_10028510[v10] + (v4[1] >> 5)]) == 0 )
              goto LABEL_8;
LABEL_15:
            v4 += 2;
            if ( v4 != a1 )
              continue;
            result = -1;
            break;
          default:
            goto LABEL_18;
        }
        break;
      }
      break;
    default:
LABEL_55:
      *a4 = v4;
      return 0;
  }
  return result;
}
