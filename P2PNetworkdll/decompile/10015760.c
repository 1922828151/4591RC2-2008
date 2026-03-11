/*
 * func-name: sub_10015760
 * func-address: 0x10015760
 * callers: 0x100160b0
 * callees: none
 */

int __usercall sub_10015760@<eax>(
        unsigned __int8 *a1@<eax>,
        _BYTE *a2@<ebx>,
        unsigned __int8 *a3,
        unsigned __int8 **a4)
{
  int result; // eax
  unsigned __int8 *v6; // esi
  int v7; // edi

  if ( a1 == a3 )
    return -1;
  switch ( a2[*a1 + 72] )
  {
    case 5:
      if ( a3 - a1 < 2 )
        goto LABEL_7;
      if ( !(*((int (__cdecl **)(_BYTE *, unsigned __int8 *))a2 + 85))(a2, a1) )
        goto LABEL_4;
      v6 = a1 + 2;
      goto LABEL_16;
    case 6:
      if ( a3 - a1 < 3 )
        goto LABEL_7;
      if ( !(*((int (__cdecl **)(_BYTE *, unsigned __int8 *))a2 + 86))(a2, a1) )
        goto LABEL_4;
      v6 = a1 + 3;
      goto LABEL_16;
    case 7:
      if ( a3 - a1 < 4 )
      {
LABEL_7:
        result = -2;
      }
      else if ( (*((int (__cdecl **)(_BYTE *, unsigned __int8 *))a2 + 87))(a2, a1) )
      {
        v6 = a1 + 4;
LABEL_16:
        if ( v6 == a3 )
        {
LABEL_30:
          result = -1;
        }
        else
        {
          v7 = a3 - v6;
          while ( 2 )
          {
            switch ( a2[*v6 + 72] )
            {
              case 5:
                if ( v7 < 2 )
                  goto LABEL_32;
                if ( (*((int (__cdecl **)(_BYTE *, unsigned __int8 *))a2 + 82))(a2, v6) )
                {
                  v6 += 2;
                  v7 -= 2;
                  goto LABEL_29;
                }
LABEL_38:
                *a4 = v6;
                result = 0;
                break;
              case 6:
                if ( v7 < 3 )
                  goto LABEL_32;
                if ( (*((int (__cdecl **)(_BYTE *, unsigned __int8 *))a2 + 83))(a2, v6) )
                {
                  v6 += 3;
                  v7 -= 3;
                  goto LABEL_29;
                }
                *a4 = v6;
                result = 0;
                break;
              case 7:
                if ( v7 >= 4 )
                {
                  if ( !(*((int (__cdecl **)(_BYTE *, unsigned __int8 *))a2 + 84))(a2, v6) )
                    goto LABEL_40;
                  v6 += 4;
                  v7 -= 4;
                  goto LABEL_29;
                }
LABEL_32:
                result = -2;
                break;
              case 9:
              case 0xA:
              case 0x15:
                if ( ++v6 == a3 )
                  goto LABEL_30;
                while ( 2 )
                {
                  switch ( a2[*v6 + 72] )
                  {
                    case 9:
                    case 0xA:
                    case 0x15:
                      if ( ++v6 != a3 )
                        continue;
                      result = -1;
                      break;
                    case 0xB:
                      *a4 = v6 + 1;
                      result = 5;
                      break;
                    default:
                      goto LABEL_38;
                  }
                  break;
                }
                break;
              case 0xB:
                *a4 = v6 + 1;
                result = 5;
                break;
              case 0x16:
              case 0x18:
              case 0x19:
              case 0x1A:
              case 0x1B:
                ++v6;
                --v7;
LABEL_29:
                if ( v6 == a3 )
                  goto LABEL_30;
                continue;
              default:
LABEL_40:
                *a4 = v6;
                result = 0;
                break;
            }
            break;
          }
        }
      }
      else
      {
LABEL_4:
        *a4 = a1;
        result = 0;
      }
      break;
    case 0x16:
    case 0x18:
      v6 = a1 + 1;
      goto LABEL_16;
    case 0x1D:
      goto LABEL_4;
    default:
      *a4 = a1;
      return 0;
  }
  return result;
}
