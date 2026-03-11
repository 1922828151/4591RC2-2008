/*
 * func-name: sub_10015530
 * func-address: 0x10015530
 * callers: none
 * callees: none
 */

int __cdecl sub_10015530(_BYTE *a1, unsigned __int8 *a2, unsigned __int8 *a3, unsigned __int8 **a4)
{
  unsigned __int8 *v5; // esi
  unsigned __int8 *v6; // esi
  int v7; // edi

  if ( a2 == a3 )
    return -4;
  switch ( a1[*a2 + 72] )
  {
    case 0:
    case 1:
    case 8:
      *a4 = a2;
      return 0;
    case 4:
      v5 = a2 + 1;
      if ( a2 + 1 == a3 )
        return -1;
      if ( *v5 != 93 )
        goto LABEL_29;
      if ( a2 + 2 == a3 )
        return -1;
      if ( a2[2] == 62 )
      {
        *a4 = a2 + 3;
        return 40;
      }
      v5 = a2 + 1;
      goto LABEL_29;
    case 5:
      if ( a3 - a2 < 2 )
        return -2;
      if ( (*((int (__cdecl **)(_BYTE *, unsigned __int8 *))a1 + 88))(a1, a2) )
        goto LABEL_25;
      v5 = a2 + 2;
      goto LABEL_29;
    case 6:
      if ( a3 - a2 < 3 )
        return -2;
      if ( (*((int (__cdecl **)(_BYTE *, unsigned __int8 *))a1 + 89))(a1, a2) )
        goto LABEL_25;
      v5 = a2 + 3;
      goto LABEL_29;
    case 7:
      if ( a3 - a2 < 4 )
        return -2;
      if ( (*((int (__cdecl **)(_BYTE *, unsigned __int8 *))a1 + 90))(a1, a2) )
      {
LABEL_25:
        *a4 = a2;
        return 0;
      }
      v5 = a2 + 4;
LABEL_29:
      if ( v5 == a3 )
      {
LABEL_43:
        *a4 = v5;
        return 6;
      }
      v7 = a3 - v5;
      break;
    case 9:
      v6 = a2 + 1;
      if ( a2 + 1 == a3 )
        return -1;
      if ( a1[*v6 + 72] == 10 )
        v6 = a2 + 2;
      *a4 = v6;
      return 7;
    case 0xA:
      *a4 = a2 + 1;
      return 7;
    default:
      v5 = a2 + 1;
      goto LABEL_29;
  }
  while ( 2 )
  {
    switch ( a1[*v5 + 72] )
    {
      case 0:
      case 1:
      case 4:
      case 8:
      case 9:
      case 0xA:
        goto LABEL_44;
      case 5:
        if ( v7 < 2 || (*((int (__cdecl **)(_BYTE *, unsigned __int8 *))a1 + 88))(a1, v5) )
        {
LABEL_44:
          *a4 = v5;
          return 6;
        }
        v5 += 2;
        v7 -= 2;
        goto LABEL_42;
      case 6:
        if ( v7 < 3 || (*((int (__cdecl **)(_BYTE *, unsigned __int8 *))a1 + 89))(a1, v5) )
          goto LABEL_43;
        v5 += 3;
        v7 -= 3;
        goto LABEL_42;
      case 7:
        if ( v7 >= 4 && !(*((int (__cdecl **)(_BYTE *, unsigned __int8 *))a1 + 90))(a1, v5) )
        {
          v5 += 4;
          v7 -= 4;
LABEL_42:
          if ( v5 == a3 )
            goto LABEL_43;
          continue;
        }
        *a4 = v5;
        return 6;
      default:
        ++v5;
        --v7;
        goto LABEL_42;
    }
  }
}
