/*
 * func-name: sub_10016490
 * func-address: 0x10016490
 * callers: none
 * callees: 0x10015a90, 0x100160b0
 */

int __cdecl sub_10016490(int a1, unsigned __int8 *a2, unsigned __int8 *a3, unsigned __int8 **a4)
{
  unsigned __int8 *v4; // esi
  unsigned __int8 *v6; // esi
  unsigned __int8 *v7; // esi
  unsigned __int8 *v8; // ebx
  unsigned __int8 *v9; // ebp
  int v10; // edi

  v4 = a2;
  if ( a2 == a3 )
    return -4;
  switch ( *(_BYTE *)(*a2 + a1 + 72) )
  {
    case 0:
    case 1:
    case 8:
      *a4 = a2;
      return 0;
    case 2:
      return sub_100160B0(a2 + 1, a1, a3, a4);
    case 3:
      return sub_10015A90(a2 + 1, (_BYTE *)a1, a3, a4);
    case 4:
      v7 = a2 + 1;
      if ( a2 + 1 == a3 )
        return -5;
      if ( *v7 != 93 )
        goto LABEL_31;
      v4 = a2 + 2;
      if ( a2 + 2 == a3 )
        return -5;
      if ( *v4 == 62 )
        goto LABEL_27;
      v7 = a2 + 1;
      goto LABEL_31;
    case 5:
      if ( a3 - a2 < 2 )
        return -2;
      if ( (*(int (__cdecl **)(int, unsigned __int8 *))(a1 + 352))(a1, a2) )
        goto LABEL_27;
      v7 = a2 + 2;
      goto LABEL_31;
    case 6:
      if ( a3 - a2 < 3 )
        return -2;
      if ( (*(int (__cdecl **)(int, unsigned __int8 *))(a1 + 356))(a1, a2) )
        goto LABEL_27;
      v7 = a2 + 3;
      goto LABEL_31;
    case 7:
      if ( a3 - a2 < 4 )
        return -2;
      if ( (*(int (__cdecl **)(int, unsigned __int8 *))(a1 + 360))(a1, a2) )
      {
LABEL_27:
        *a4 = v4;
        return 0;
      }
      v7 = a2 + 4;
LABEL_31:
      if ( v7 == a3 )
      {
LABEL_49:
        *a4 = v7;
        return 6;
      }
      v8 = v7 + 2;
      v9 = v7 + 1;
      v10 = a3 - v7;
      break;
    case 9:
      v6 = a2 + 1;
      if ( a2 + 1 == a3 )
        return -3;
      if ( *(_BYTE *)(*v6 + a1 + 72) == 10 )
        v6 = a2 + 2;
      *a4 = v6;
      return 7;
    case 0xA:
      *a4 = a2 + 1;
      return 7;
    default:
      v7 = a2 + 1;
      goto LABEL_31;
  }
  while ( 2 )
  {
    switch ( *(_BYTE *)(*v7 + a1 + 72) )
    {
      case 0:
      case 1:
      case 2:
      case 3:
      case 8:
      case 9:
      case 0xA:
        goto LABEL_51;
      case 4:
        if ( v9 == a3 )
          goto LABEL_51;
        if ( *v9 != 93 )
          goto LABEL_47;
        if ( v8 == a3 )
        {
LABEL_51:
          *a4 = v7;
          return 6;
        }
        if ( *v8 != 62 )
        {
LABEL_47:
          ++v7;
          --v10;
          ++v9;
          ++v8;
LABEL_48:
          if ( v7 == a3 )
            goto LABEL_49;
          continue;
        }
        *a4 = v7 + 2;
        return 0;
      case 5:
        if ( v10 < 2 || (*(int (__cdecl **)(int, unsigned __int8 *))(a1 + 352))(a1, v7) )
        {
          *a4 = v7;
          return 6;
        }
        v7 += 2;
        v10 -= 2;
        v9 += 2;
        v8 += 2;
        goto LABEL_48;
      case 6:
        if ( v10 < 3 || (*(int (__cdecl **)(int, unsigned __int8 *))(a1 + 356))(a1, v7) )
          goto LABEL_51;
        v7 += 3;
        v10 -= 3;
        v9 += 3;
        v8 += 3;
        goto LABEL_48;
      case 7:
        if ( v10 < 4 || (*(int (__cdecl **)(int, unsigned __int8 *))(a1 + 360))(a1, v7) )
          goto LABEL_49;
        v7 += 4;
        v10 -= 4;
        v9 += 4;
        v8 += 4;
        goto LABEL_48;
      default:
        goto LABEL_47;
    }
  }
}
