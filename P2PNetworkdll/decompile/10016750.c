/*
 * func-name: sub_10016750
 * func-address: 0x10016750
 * callers: 0x10016cc0, 0x100173b0
 * callees: none
 */

int __usercall sub_10016750@<eax>(
        unsigned __int8 *a1@<eax>,
        _BYTE *a2@<ebx>,
        unsigned __int8 *a3,
        unsigned __int8 **a4)
{
  unsigned __int8 *v6; // esi
  int v7; // edi

  if ( a1 == a3 )
    return -1;
  switch ( a2[*a1 + 72] )
  {
    case 5:
      if ( a3 - a1 < 2 )
        return -2;
      if ( !(*((int (__cdecl **)(_BYTE *, unsigned __int8 *))a2 + 85))(a2, a1) )
        goto LABEL_4;
      v6 = a1 + 2;
      goto LABEL_16;
    case 6:
      if ( a3 - a1 < 3 )
        return -2;
      if ( !(*((int (__cdecl **)(_BYTE *, unsigned __int8 *))a2 + 86))(a2, a1) )
        goto LABEL_4;
      v6 = a1 + 3;
      goto LABEL_16;
    case 7:
      if ( a3 - a1 < 4 )
        return -2;
      if ( !(*((int (__cdecl **)(_BYTE *, unsigned __int8 *))a2 + 87))(a2, a1) )
      {
LABEL_4:
        *a4 = a1;
        return 0;
      }
      v6 = a1 + 4;
LABEL_16:
      if ( v6 == a3 )
        return -1;
      v7 = a3 - v6;
      break;
    case 9:
    case 0xA:
    case 0x15:
    case 0x1E:
      *a4 = a1;
      return 22;
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
  while ( 2 )
  {
    switch ( a2[*v6 + 72] )
    {
      case 5:
        if ( v7 < 2 )
          return -2;
        if ( (*((int (__cdecl **)(_BYTE *, unsigned __int8 *))a2 + 82))(a2, v6) )
        {
          v6 += 2;
          v7 -= 2;
          goto LABEL_29;
        }
        *a4 = v6;
        return 0;
      case 6:
        if ( v7 < 3 )
          return -2;
        if ( !(*((int (__cdecl **)(_BYTE *, unsigned __int8 *))a2 + 83))(a2, v6) )
          goto LABEL_35;
        v6 += 3;
        v7 -= 3;
        goto LABEL_29;
      case 7:
        if ( v7 < 4 )
          return -2;
        if ( (*((int (__cdecl **)(_BYTE *, unsigned __int8 *))a2 + 84))(a2, v6) )
        {
          v6 += 4;
          v7 -= 4;
LABEL_29:
          if ( v6 == a3 )
            return -1;
          continue;
        }
LABEL_33:
        *a4 = v6;
        return 0;
      case 0x12:
        *a4 = v6 + 1;
        return 28;
      case 0x16:
      case 0x18:
      case 0x19:
      case 0x1A:
      case 0x1B:
        ++v6;
        --v7;
        goto LABEL_29;
      case 0x1D:
        goto LABEL_33;
      default:
LABEL_35:
        *a4 = v6;
        return 0;
    }
  }
}
