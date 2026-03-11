/*
 * func-name: sub_100160B0
 * func-address: 0x100160b0
 * callers: 0x10016490
 * callees: 0x10014ef0, 0x100151c0, 0x10015760, 0x10015ca0
 */

int __usercall sub_100160B0@<eax>(unsigned __int8 *a1@<eax>, int a2@<ecx>, unsigned __int8 *a3, unsigned __int8 **a4)
{
  unsigned __int8 *v4; // esi
  unsigned __int8 *v7; // esi
  int v8; // edi
  unsigned __int8 *v9; // esi
  char v10; // al
  unsigned __int8 *v11; // eax
  int v12; // ecx

  v4 = a1;
  if ( a1 == a3 )
    return -1;
  switch ( *(_BYTE *)(*a1 + a2 + 72) )
  {
    case 5:
      if ( a3 - a1 < 2 )
        return -2;
      if ( !(*(int (__cdecl **)(int, unsigned __int8 *))(a2 + 340))(a2, a1) )
        goto LABEL_64;
      v7 = v4 + 2;
      goto LABEL_15;
    case 6:
      if ( a3 - a1 < 3 )
        return -2;
      if ( !(*(int (__cdecl **)(int, unsigned __int8 *))(a2 + 344))(a2, a1) )
        goto LABEL_64;
      v7 = v4 + 3;
      goto LABEL_15;
    case 7:
      if ( a3 - a1 < 4 )
        return -2;
      if ( (*(int (__cdecl **)(int, unsigned __int8 *))(a2 + 348))(a2, a1) )
      {
        v7 = v4 + 4;
LABEL_15:
        if ( v7 != a3 )
        {
          v8 = a3 - v7;
          while ( 1 )
          {
            switch ( *(_BYTE *)(*v7 + a2 + 72) )
            {
              case 5:
                if ( v8 < 2 )
                  return -2;
                if ( !(*(int (__cdecl **)(int, unsigned __int8 *))(a2 + 328))(a2, v7) )
                  goto LABEL_31;
                v7 += 2;
                v8 -= 2;
                goto LABEL_28;
              case 6:
                if ( v8 < 3 )
                  return -2;
                if ( !(*(int (__cdecl **)(int, unsigned __int8 *))(a2 + 332))(a2, v7) )
                {
LABEL_32:
                  *a4 = v7;
                  return 0;
                }
                v7 += 3;
                v8 -= 3;
LABEL_28:
                if ( v7 == a3 )
                  return -1;
                break;
              case 7:
                if ( v8 < 4 )
                  return -2;
                if ( !(*(int (__cdecl **)(int, unsigned __int8 *))(a2 + 336))(a2, v7) )
                  goto LABEL_30;
                v7 += 4;
                v8 -= 4;
                goto LABEL_28;
              case 9:
              case 0xA:
              case 0x15:
                if ( ++v7 == a3 )
                  return -1;
                while ( 2 )
                {
                  switch ( *(_BYTE *)(*v7 + a2 + 72) )
                  {
                    case 5:
                      if ( a3 - v7 < 2 )
                        return -2;
                      if ( !(*(int (__cdecl **)(int, unsigned __int8 *))(a2 + 340))(a2, v7) )
                        goto LABEL_30;
                      v9 = v7 + 2;
                      break;
                    case 6:
                      if ( a3 - v7 < 3 )
                        return -2;
                      if ( !(*(int (__cdecl **)(int, unsigned __int8 *))(a2 + 344))(a2, v7) )
                        goto LABEL_30;
                      v9 = v7 + 3;
                      break;
                    case 7:
                      if ( a3 - v7 < 4 )
                        return -2;
                      if ( !(*(int (__cdecl **)(int, unsigned __int8 *))(a2 + 348))(a2, v7) )
                        goto LABEL_30;
                      v9 = v7 + 4;
                      break;
                    case 9:
                    case 0xA:
                    case 0x15:
                      if ( ++v7 != a3 )
                        continue;
                      return -1;
                    case 0xB:
                      goto LABEL_48;
                    case 0x11:
                      goto LABEL_49;
                    case 0x16:
                    case 0x18:
                      v9 = v7 + 1;
                      return sub_10015CA0(a2, v9, a3, a4);
                    case 0x1D:
                      goto LABEL_30;
                    default:
                      goto LABEL_32;
                  }
                  return sub_10015CA0(a2, v9, a3, a4);
                }
              case 0xB:
LABEL_48:
                *a4 = v7 + 1;
                return 2;
              case 0x11:
LABEL_49:
                if ( ++v7 == a3 )
                  return -1;
                if ( *v7 == 62 )
                {
                  *a4 = v7 + 1;
                  return 4;
                }
                else
                {
LABEL_31:
                  *a4 = v7;
                  return 0;
                }
              case 0x16:
              case 0x18:
              case 0x19:
              case 0x1A:
              case 0x1B:
                ++v7;
                --v8;
                goto LABEL_28;
              default:
LABEL_30:
                *a4 = v7;
                return 0;
            }
          }
        }
        return -1;
      }
LABEL_64:
      *a4 = v4;
      return 0;
    case 0xF:
      return sub_100151C0(a1 + 1, (_BYTE *)a2, a3, a4);
    case 0x10:
      v4 = a1 + 1;
      if ( a1 + 1 == a3 )
        return -1;
      v10 = *(_BYTE *)(*v4 + a2 + 72);
      if ( v10 == 20 )
      {
        v11 = v4 + 1;
        if ( a3 - (v4 + 1) < 6 )
          return -1;
        v12 = 0;
        while ( *v11 == byte_10028610[v12] )
        {
          ++v12;
          ++v11;
          if ( v12 >= 6 )
          {
            *a4 = v11;
            return 8;
          }
        }
        *a4 = v11;
        return 0;
      }
      else
      {
        if ( v10 != 27 )
          goto LABEL_64;
        return sub_10014EF0(v4 + 1, (_BYTE *)a2, a3, a4);
      }
    case 0x11:
      return sub_10015760(a1 + 1, (_BYTE *)a2, a3, a4);
    case 0x16:
    case 0x18:
      v7 = a1 + 1;
      goto LABEL_15;
    default:
      goto LABEL_64;
  }
}
