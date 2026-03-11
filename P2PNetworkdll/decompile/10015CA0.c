/*
 * func-name: sub_10015CA0
 * func-address: 0x10015ca0
 * callers: 0x100160b0
 * callees: 0x10015a90
 */

int __usercall sub_10015CA0@<eax>(int a1@<eax>, unsigned __int8 *a2, unsigned __int8 *a3, unsigned __int8 **a4)
{
  unsigned __int8 *v4; // ebp
  unsigned __int8 *v5; // esi
  unsigned __int8 **v6; // edi
  int result; // eax
  int v9; // edx
  int v10; // eax
  int v11; // eax
  int v12; // edi
  int v13; // ecx

  v4 = a3;
  v5 = a2;
  v6 = a4;
  if ( a2 == a3 )
    return -1;
  while ( 1 )
  {
    switch ( *(_BYTE *)(*v5 + a1 + 72) )
    {
      case 5:
        if ( v4 - v5 < 2 )
          return -2;
        if ( !(*(int (__cdecl **)(int, unsigned __int8 *))(a1 + 328))(a1, v5) )
          goto LABEL_14;
        v5 += 2;
        goto LABEL_58;
      case 6:
        if ( v4 - v5 < 3 )
          return -2;
        if ( !(*(int (__cdecl **)(int, unsigned __int8 *))(a1 + 332))(a1, v5) )
          goto LABEL_14;
        v5 += 3;
        goto LABEL_58;
      case 7:
        if ( v4 - v5 < 4 )
          return -2;
        if ( !(*(int (__cdecl **)(int, unsigned __int8 *))(a1 + 336))(a1, v5) )
          goto LABEL_14;
LABEL_57:
        v5 += 4;
        goto LABEL_58;
      case 9:
      case 0xA:
      case 0x15:
        while ( 2 )
        {
          if ( ++v5 == v4 )
            return -1;
          v9 = *v5;
          v10 = *(unsigned __int8 *)(v9 + a1 + 72);
          if ( v10 != 14 )
          {
            if ( *(unsigned __int8 *)(v9 + a1 + 72) >= 9u )
            {
              if ( *(unsigned __int8 *)(v9 + a1 + 72) > 0xAu && v10 != 21 )
              {
                *v6 = v5;
                return 0;
              }
              continue;
            }
LABEL_14:
            *v6 = v5;
            return 0;
          }
          break;
        }
        break;
      case 0xE:
        goto LABEL_21;
      case 0x16:
      case 0x18:
      case 0x19:
      case 0x1A:
      case 0x1B:
LABEL_48:
        ++v5;
        goto LABEL_58;
      default:
        goto LABEL_14;
    }
    while ( 1 )
    {
LABEL_21:
      if ( ++v5 == v4 )
        return -1;
      v11 = *v5;
      v12 = *(unsigned __int8 *)(v11 + a1 + 72);
      if ( v12 == 12 || v12 == 13 )
        break;
      if ( *(unsigned __int8 *)(v11 + a1 + 72) < 9u || *(unsigned __int8 *)(v11 + a1 + 72) > 0xAu && v12 != 21 )
      {
        *a4 = v5;
        return 0;
      }
    }
LABEL_28:
    ++v5;
LABEL_29:
    a2 = v5;
LABEL_30:
    if ( v5 == v4 )
      return -1;
    v13 = *v5;
    if ( *(unsigned __int8 *)(v13 + a1 + 72) != v12 )
      break;
    if ( ++v5 == v4 )
      return -1;
    switch ( *(_BYTE *)(*v5 + a1 + 72) )
    {
      case 9:
      case 0xA:
      case 0x15:
LABEL_46:
        if ( ++v5 == v4 )
          return -1;
        break;
      case 0xB:
LABEL_64:
        *a4 = v5 + 1;
        return 1;
      case 0x11:
LABEL_61:
        if ( ++v5 == v4 )
          return -1;
        if ( *v5 == 62 )
        {
          *a4 = v5 + 1;
          return 3;
        }
        else
        {
LABEL_67:
          *a4 = v5;
          return 0;
        }
      default:
        goto LABEL_67;
    }
    switch ( *(_BYTE *)(*v5 + a1 + 72) )
    {
      case 5:
        if ( v4 - v5 < 2 )
          return -2;
        if ( !(*(int (__cdecl **)(int, unsigned __int8 *))(a1 + 340))(a1, v5) )
        {
LABEL_66:
          *a4 = v5;
          return 0;
        }
        v5 += 2;
LABEL_58:
        if ( v5 == v4 )
          return -1;
        v6 = a4;
        break;
      case 6:
        if ( v4 - v5 < 3 )
          return -2;
        if ( !(*(int (__cdecl **)(int, unsigned __int8 *))(a1 + 344))(a1, v5) )
          goto LABEL_67;
        v5 += 3;
        goto LABEL_58;
      case 7:
        if ( v4 - v5 < 4 )
          return -2;
        if ( (*(int (__cdecl **)(int, unsigned __int8 *))(a1 + 348))(a1, v5) )
          goto LABEL_57;
LABEL_65:
        *a4 = v5;
        return 0;
      case 9:
      case 0xA:
      case 0x15:
        goto LABEL_46;
      case 0xB:
        goto LABEL_64;
      case 0x11:
        goto LABEL_61;
      case 0x16:
      case 0x18:
        goto LABEL_48;
      case 0x1D:
        goto LABEL_65;
      default:
        goto LABEL_66;
    }
  }
  switch ( *(_BYTE *)(v13 + a1 + 72) )
  {
    case 0:
    case 1:
    case 8:
      goto LABEL_65;
    case 2:
      goto LABEL_66;
    case 3:
      result = sub_10015A90(v5 + 1, (_BYTE *)a1, v4, &a2);
      if ( result > 0 )
      {
        v5 = a2;
        goto LABEL_30;
      }
      if ( !result )
        *a4 = a2;
      return result;
    case 5:
      if ( v4 - v5 < 2 )
        return -2;
      if ( (*(int (__cdecl **)(int, unsigned __int8 *))(a1 + 352))(a1, v5) )
        goto LABEL_65;
      v5 += 2;
      goto LABEL_29;
    case 6:
      if ( v4 - v5 < 3 )
        return -2;
      if ( (*(int (__cdecl **)(int, unsigned __int8 *))(a1 + 356))(a1, v5) )
        goto LABEL_66;
      v5 += 3;
      goto LABEL_29;
    case 7:
      if ( v4 - v5 < 4 )
        return -2;
      if ( (*(int (__cdecl **)(int, unsigned __int8 *))(a1 + 360))(a1, v5) )
        goto LABEL_67;
      v5 += 4;
      goto LABEL_29;
    default:
      goto LABEL_28;
  }
}
