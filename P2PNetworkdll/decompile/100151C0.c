/*
 * func-name: sub_100151C0
 * func-address: 0x100151c0
 * callers: 0x100160b0, 0x10016cc0
 * callees: 0x10015160
 */

int __usercall sub_100151C0@<eax>(
        unsigned __int8 *a1@<eax>,
        _BYTE *a2@<ebx>,
        unsigned __int8 *a3,
        unsigned __int8 **a4)
{
  unsigned __int8 *v4; // esi
  int result; // eax
  int v7; // edi
  int v8; // edi
  int v9; // [esp+Ch] [ebp-4h] BYREF

  v4 = a1;
  if ( a1 == a3 )
    return -1;
  switch ( a2[*a1 + 72] )
  {
    case 5:
      if ( a3 - a1 < 2 )
        return -2;
      if ( !(*((int (__cdecl **)(_BYTE *, unsigned __int8 *))a2 + 85))(a2, a1) )
        goto LABEL_4;
      v4 += 2;
      goto LABEL_16;
    case 6:
      if ( a3 - a1 < 3 )
        return -2;
      if ( !(*((int (__cdecl **)(_BYTE *, unsigned __int8 *))a2 + 86))(a2, a1) )
        goto LABEL_4;
      v4 += 3;
      goto LABEL_16;
    case 7:
      if ( a3 - a1 < 4 )
        return -2;
      if ( !(*((int (__cdecl **)(_BYTE *, unsigned __int8 *))a2 + 87))(a2, a1) )
      {
LABEL_4:
        *a4 = v4;
        return 0;
      }
      v4 += 4;
LABEL_16:
      if ( v4 == a3 )
        return -1;
      v7 = a3 - v4;
      break;
    case 0x16:
    case 0x18:
      v4 = a1 + 1;
      goto LABEL_16;
    case 0x1D:
      goto LABEL_4;
    default:
LABEL_57:
      *a4 = v4;
      return 0;
  }
  while ( 2 )
  {
    switch ( a2[*v4 + 72] )
    {
      case 5:
        if ( v7 < 2 )
          return -2;
        if ( !(*((int (__cdecl **)(_BYTE *, unsigned __int8 *))a2 + 82))(a2, v4) )
          goto LABEL_57;
        v4 += 2;
        v7 -= 2;
        goto LABEL_29;
      case 6:
        if ( v7 < 3 )
          return -2;
        if ( (*((int (__cdecl **)(_BYTE *, unsigned __int8 *))a2 + 83))(a2, v4) )
        {
          v4 += 3;
          v7 -= 3;
LABEL_29:
          if ( v4 == a3 )
            return -1;
          continue;
        }
LABEL_31:
        *a4 = v4;
        return 0;
      case 7:
        if ( v7 < 4 )
          return -2;
        if ( !(*((int (__cdecl **)(_BYTE *, unsigned __int8 *))a2 + 84))(a2, v4) )
          goto LABEL_4;
        v4 += 4;
        v7 -= 4;
        goto LABEL_29;
      case 9:
      case 0xA:
      case 0x15:
        v9 = 11;
        if ( v4 - a1 == 3 && !sub_10015160(&v9) )
          goto LABEL_4;
        if ( ++v4 == a3 )
          return -1;
        v8 = a3 - v4;
        while ( 2 )
        {
          switch ( a2[*v4 + 72] )
          {
            case 0:
            case 1:
            case 8:
              goto LABEL_4;
            case 5:
              if ( v8 < 2 )
                return -2;
              if ( (*((int (__cdecl **)(_BYTE *, unsigned __int8 *))a2 + 88))(a2, v4) )
                goto LABEL_4;
              v4 += 2;
              v8 -= 2;
              goto LABEL_50;
            case 6:
              if ( v8 < 3 )
                return -2;
              if ( (*((int (__cdecl **)(_BYTE *, unsigned __int8 *))a2 + 89))(a2, v4) )
                goto LABEL_57;
              v4 += 3;
              v8 -= 3;
              goto LABEL_50;
            case 7:
              if ( v8 < 4 )
                return -2;
              if ( (*((int (__cdecl **)(_BYTE *, unsigned __int8 *))a2 + 90))(a2, v4) )
                goto LABEL_31;
              v4 += 4;
              v8 -= 4;
LABEL_50:
              if ( v4 != a3 )
                continue;
              result = -1;
              break;
            case 0xF:
              ++v4;
              --v8;
              if ( v4 == a3 )
                return -1;
              if ( *v4 != 62 )
                goto LABEL_50;
              *a4 = v4 + 1;
              return v9;
            default:
              ++v4;
              --v8;
              goto LABEL_50;
          }
          return result;
        }
      case 0xF:
        v9 = 11;
        if ( v4 - a1 == 3 && !sub_10015160(&v9) )
          goto LABEL_57;
        if ( ++v4 == a3 )
          return -1;
        if ( *v4 != 62 )
          goto LABEL_4;
        result = v9;
        *a4 = v4 + 1;
        return result;
      case 0x16:
      case 0x18:
      case 0x19:
      case 0x1A:
      case 0x1B:
        ++v4;
        --v7;
        goto LABEL_29;
      default:
        goto LABEL_4;
    }
  }
}
