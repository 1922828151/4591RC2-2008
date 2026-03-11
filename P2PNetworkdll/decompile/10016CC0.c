/*
 * func-name: sub_10016CC0
 * func-address: 0x10016cc0
 * callers: none
 * callees: 0x10015040, 0x100151c0, 0x10016750, 0x10016960, 0x10016b50
 */

int __cdecl sub_10016CC0(int a1, unsigned __int8 *a2, unsigned __int8 *a3, unsigned __int8 **a4)
{
  unsigned __int8 *v4; // esi
  int result; // eax
  unsigned __int8 *v6; // esi
  unsigned __int8 *v7; // ecx
  int v8; // edx
  unsigned __int8 *v9; // esi
  int v10; // ebp
  int v11; // edi

  v4 = a2;
  if ( a2 == a3 )
    return -4;
  switch ( *(_BYTE *)(*a2 + a1 + 72) )
  {
    case 2:
      v4 = a2 + 1;
      if ( a2 + 1 == a3 )
        return -1;
      switch ( *(_BYTE *)(*v4 + a1 + 72) )
      {
        case 5:
        case 6:
        case 7:
        case 0x16:
        case 0x18:
        case 0x1D:
          *a4 = a2;
          result = 29;
          break;
        case 0xF:
          result = sub_100151C0(a2 + 2, (_BYTE *)a1, a3, a4);
          break;
        case 0x10:
          result = sub_10015040(a2 + 2, a3, (_BYTE *)a1, a4);
          break;
        default:
          goto LABEL_87;
      }
      return result;
    case 4:
      v9 = a2 + 1;
      if ( a2 + 1 == a3 )
        return -26;
      if ( *v9 != 93 )
        goto LABEL_32;
      if ( a2 + 2 == a3 )
        return -1;
      if ( a2[2] == 62 )
      {
        *a4 = a2 + 3;
        return 34;
      }
      else
      {
LABEL_32:
        *a4 = v9;
        return 26;
      }
    case 5:
      if ( a3 - a2 < 2 )
        return -2;
      if ( (*(int (__cdecl **)(int, unsigned __int8 *))(a1 + 340))(a1, a2) )
      {
        v4 = a2 + 2;
        v10 = 18;
        goto LABEL_62;
      }
      if ( (*(int (__cdecl **)(int, unsigned __int8 *))(a1 + 328))(a1, a2) )
      {
        v4 = a2 + 2;
        goto LABEL_61;
      }
LABEL_82:
      *a4 = v4;
      return 0;
    case 6:
      if ( a3 - a2 < 3 )
        return -2;
      if ( (*(int (__cdecl **)(int, unsigned __int8 *))(a1 + 344))(a1, a2) )
      {
        v4 = a2 + 3;
        v10 = 18;
        goto LABEL_62;
      }
      if ( (*(int (__cdecl **)(int, unsigned __int8 *))(a1 + 332))(a1, a2) )
      {
        v4 = a2 + 3;
        goto LABEL_61;
      }
LABEL_86:
      *a4 = v4;
      return 0;
    case 7:
      if ( a3 - a2 >= 4 )
      {
        if ( (*(int (__cdecl **)(int, unsigned __int8 *))(a1 + 348))(a1, a2) )
        {
          v4 = a2 + 4;
          v10 = 18;
          goto LABEL_62;
        }
        if ( (*(int (__cdecl **)(int, unsigned __int8 *))(a1 + 336))(a1, a2) )
        {
          v4 = a2 + 4;
          goto LABEL_61;
        }
        goto LABEL_87;
      }
      return -2;
    case 9:
      if ( a2 + 1 != a3 )
        goto LABEL_13;
      return -15;
    case 0xA:
    case 0x15:
LABEL_13:
      v6 = a2 + 1;
      if ( a2 + 1 == a3 )
        goto LABEL_21;
      v7 = a2 + 2;
      break;
    case 0xB:
      *a4 = a2 + 1;
      return 17;
    case 0xC:
      return sub_10016B50(a2 + 1, (_BYTE *)a1, 12, a3, a4);
    case 0xD:
      return sub_10016B50(a2 + 1, (_BYTE *)a1, 13, a3, a4);
    case 0x13:
      return sub_10016960(a2 + 1, (_BYTE *)a1, a3, a4);
    case 0x14:
      *a4 = a2 + 1;
      return 25;
    case 0x16:
    case 0x18:
      v10 = 18;
      v4 = a2 + 1;
      goto LABEL_62;
    case 0x19:
    case 0x1A:
    case 0x1B:
      v4 = a2 + 1;
LABEL_61:
      v10 = 19;
LABEL_62:
      if ( v4 != a3 )
      {
        v11 = a3 - v4;
        do
        {
          switch ( *(_BYTE *)(*v4 + a1 + 72) )
          {
            case 5:
              if ( v11 < 2 )
                return -2;
              if ( !(*(int (__cdecl **)(int, unsigned __int8 *))(a1 + 328))(a1, v4) )
                goto LABEL_82;
              v4 += 2;
              v11 -= 2;
              break;
            case 6:
              if ( v11 < 3 )
                return -2;
              if ( !(*(int (__cdecl **)(int, unsigned __int8 *))(a1 + 332))(a1, v4) )
                goto LABEL_86;
              v4 += 3;
              v11 -= 3;
              break;
            case 7:
              if ( v11 < 4 )
                return -2;
              if ( !(*(int (__cdecl **)(int, unsigned __int8 *))(a1 + 336))(a1, v4) )
                goto LABEL_87;
              v4 += 4;
              v11 -= 4;
              break;
            case 9:
            case 0xA:
            case 0xB:
            case 0x14:
            case 0x15:
            case 0x1E:
            case 0x20:
            case 0x23:
            case 0x24:
              *a4 = v4;
              return v10;
            case 0xF:
              if ( v10 == 19 )
                goto LABEL_87;
              *a4 = v4 + 1;
              return 30;
            case 0x16:
            case 0x18:
            case 0x19:
            case 0x1A:
            case 0x1B:
              ++v4;
              --v11;
              break;
            case 0x1D:
              goto LABEL_87;
            case 0x21:
              if ( v10 == 19 )
                goto LABEL_82;
              *a4 = v4 + 1;
              return 31;
            case 0x22:
              if ( v10 == 19 )
                goto LABEL_86;
              *a4 = v4 + 1;
              return 32;
            default:
              goto LABEL_86;
          }
        }
        while ( v4 != a3 );
      }
      return -v10;
    case 0x1E:
      return sub_10016750(a2 + 1, (_BYTE *)a1, a3, a4);
    case 0x1F:
      *a4 = a2 + 1;
      return 23;
    case 0x20:
      v4 = a2 + 1;
      if ( a2 + 1 == a3 )
        return -24;
      switch ( *(_BYTE *)(*v4 + a1 + 72) )
      {
        case 9:
        case 0xA:
        case 0xB:
        case 0x15:
        case 0x20:
        case 0x23:
        case 0x24:
          *a4 = v4;
          result = 24;
          break;
        case 0xF:
          *a4 = a2 + 2;
          result = 35;
          break;
        case 0x21:
          *a4 = a2 + 2;
          result = 36;
          break;
        case 0x22:
          *a4 = a2 + 2;
          result = 37;
          break;
        default:
          goto LABEL_87;
      }
      return result;
    case 0x23:
      *a4 = a2 + 1;
      return 38;
    case 0x24:
      *a4 = a2 + 1;
      return 21;
    default:
LABEL_87:
      *a4 = v4;
      return 0;
  }
  do
  {
    v8 = *v6;
    if ( *(_BYTE *)(v8 + a1 + 72) == 9 )
    {
      if ( v7 == a3 )
        goto LABEL_18;
    }
    else if ( *(_BYTE *)(v8 + a1 + 72) != 10 && *(_BYTE *)(v8 + a1 + 72) != 21 )
    {
LABEL_18:
      *a4 = v6;
      return 15;
    }
    ++v6;
    ++v7;
  }
  while ( v6 != a3 );
LABEL_21:
  *a4 = v6;
  return 15;
}
