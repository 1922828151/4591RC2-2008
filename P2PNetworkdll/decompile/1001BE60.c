/*
 * func-name: sub_1001BE60
 * func-address: 0x1001be60
 * callers: 0x1001c330
 * callees: 0x10017ef0, 0x1001bca0
 */

int __cdecl sub_1001BE60(int a1, unsigned __int8 *a2, int a3, unsigned __int8 **a4)
{
  unsigned __int8 *v4; // edx
  int v5; // ebp
  unsigned __int8 **v6; // esi
  int v7; // edi
  unsigned __int8 v8; // bl
  int v9; // eax
  int result; // eax
  int v11; // eax
  int v12; // esi
  unsigned __int8 **v13; // ebx
  int v14; // eax
  int v15; // eax
  int v16; // eax

  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = a1;
  if ( a2 == (unsigned __int8 *)a3 )
    return -1;
  while ( 2 )
  {
    v8 = *v4;
    if ( *v4 )
      v9 = sub_10017EF0(*v4, v4[1]);
    else
      v9 = *(unsigned __int8 *)(v4[1] + v7 + 72);
    switch ( v9 )
    {
      case 5:
        if ( v5 - (int)v4 >= 2 )
          goto LABEL_7;
        return -2;
      case 6:
        if ( v5 - (int)v4 >= 3 )
          goto LABEL_7;
        return -2;
      case 7:
        if ( v5 - (int)v4 >= 4 )
          goto LABEL_7;
        return -2;
      case 9:
      case 10:
      case 21:
        goto LABEL_8;
      case 14:
        goto LABEL_22;
      case 22:
      case 24:
      case 25:
      case 26:
      case 27:
        goto LABEL_66;
      case 29:
        if ( ((1 << (v4[1] & 0x1F)) & dword_10027F10[8 * (unsigned __int8)byte_10028510[v8] + (v4[1] >> 5)]) == 0 )
          goto LABEL_7;
LABEL_66:
        v4 += 2;
        if ( v4 == (unsigned __int8 *)v5 )
          return -1;
        continue;
      default:
        goto LABEL_7;
    }
  }
  while ( 1 )
  {
LABEL_8:
    v4 += 2;
    if ( v4 == (unsigned __int8 *)v5 )
      return -1;
    if ( *v4 )
    {
      switch ( *v4 )
      {
        case 0xD8u:
        case 0xD9u:
        case 0xDAu:
        case 0xDBu:
          v11 = 7;
          break;
        case 0xDCu:
        case 0xDDu:
        case 0xDEu:
        case 0xDFu:
          v11 = 8;
          break;
        case 0xFFu:
          if ( v4[1] != 0xFE && v4[1] != 0xFF )
            goto LABEL_16;
          v11 = 0;
          break;
        default:
LABEL_16:
          v11 = 29;
          break;
      }
    }
    else
    {
      v11 = *(unsigned __int8 *)(v4[1] + v7 + 72);
    }
    if ( v11 == 14 )
      break;
    if ( v11 < 9 )
    {
LABEL_7:
      *v6 = v4;
      return 0;
    }
    if ( v11 > 10 && v11 != 21 )
    {
      *v6 = v4;
      return 0;
    }
  }
  while ( 1 )
  {
LABEL_22:
    v4 += 2;
    if ( v4 == (unsigned __int8 *)v5 )
      return -1;
    if ( *v4 )
    {
      switch ( *v4 )
      {
        case 0xD8u:
        case 0xD9u:
        case 0xDAu:
        case 0xDBu:
          v12 = 7;
          break;
        case 0xDCu:
        case 0xDDu:
        case 0xDEu:
        case 0xDFu:
          v12 = 8;
          break;
        case 0xFFu:
          if ( v4[1] != 0xFE && v4[1] != 0xFF )
            goto LABEL_30;
          v12 = 0;
          break;
        default:
LABEL_30:
          v12 = 29;
          break;
      }
    }
    else
    {
      v12 = *(unsigned __int8 *)(v4[1] + v7 + 72);
    }
    if ( v12 == 12 || v12 == 13 )
      break;
    if ( v12 < 9 || v12 > 10 && v12 != 21 )
    {
      *a4 = v4;
      return 0;
    }
  }
  v13 = a4;
LABEL_38:
  v4 += 2;
LABEL_39:
  a2 = v4;
  while ( 2 )
  {
    if ( v4 == (unsigned __int8 *)v5 )
      return -1;
    if ( *v4 )
      v14 = sub_10017EF0(*v4, v4[1]);
    else
      v14 = *(unsigned __int8 *)(v4[1] + v7 + 72);
    if ( v14 == v12 )
    {
      v4 += 2;
      if ( v4 != (unsigned __int8 *)v5 )
      {
        if ( *v4 )
          v15 = sub_10017EF0(*v4, v4[1]);
        else
          v15 = *(unsigned __int8 *)(v4[1] + v7 + 72);
        switch ( v15 )
        {
          case 9:
          case 10:
          case 21:
            while ( 2 )
            {
              v4 += 2;
              if ( v4 == (unsigned __int8 *)v5 )
                return -1;
              if ( *v4 )
                v16 = sub_10017EF0(*v4, v4[1]);
              else
                v16 = *(unsigned __int8 *)(v4[1] + v7 + 72);
              switch ( v16 )
              {
                case 5:
                  if ( v5 - (int)v4 >= 2 )
                    goto LABEL_76;
                  return -2;
                case 6:
                  if ( v5 - (int)v4 >= 3 )
                    goto LABEL_76;
                  return -2;
                case 7:
                  if ( v5 - (int)v4 >= 4 )
                    goto LABEL_76;
                  return -2;
                case 9:
                case 10:
                case 21:
                  continue;
                case 11:
                  goto LABEL_85;
                case 17:
                  goto LABEL_81;
                case 22:
                case 24:
                  goto LABEL_65;
                case 29:
                  if ( ((1 << (v4[1] & 0x1F)) & dword_10027F10[8 * (unsigned __int8)byte_10028410[*v4] + (v4[1] >> 5)]) == 0 )
                    goto LABEL_76;
LABEL_65:
                  v6 = a4;
                  break;
                default:
                  goto LABEL_76;
              }
              goto LABEL_66;
            }
          case 11:
LABEL_85:
            *v13 = v4 + 2;
            return 1;
          case 17:
LABEL_81:
            v4 += 2;
            if ( v4 == (unsigned __int8 *)v5 )
              return -1;
            if ( *v4 || v4[1] != 62 )
            {
LABEL_76:
              *v13 = v4;
              return 0;
            }
            else
            {
              *v13 = v4 + 2;
              return 3;
            }
          default:
            goto LABEL_76;
        }
      }
      return -1;
    }
    switch ( v14 )
    {
      case 0:
      case 1:
      case 2:
      case 8:
        goto LABEL_76;
      case 3:
        result = sub_1001BCA0(v5, v4 + 2, &a2, a1);
        if ( result > 0 )
        {
          v4 = a2;
          v13 = a4;
          v7 = a1;
          continue;
        }
        if ( !result )
          *a4 = a2;
        return result;
      case 5:
        if ( v5 - (int)v4 >= 2 )
          goto LABEL_38;
        return -2;
      case 6:
        if ( v5 - (int)v4 < 3 )
          return -2;
        v4 += 3;
        goto LABEL_39;
      case 7:
        if ( v5 - (int)v4 < 4 )
          return -2;
        v4 += 4;
        goto LABEL_39;
      default:
        goto LABEL_38;
    }
  }
}
