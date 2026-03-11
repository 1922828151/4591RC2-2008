/*
 * func-name: sub_10019140
 * func-address: 0x10019140
 * callers: 0x100195f0
 * callees: 0x10017ef0, 0x10018f80
 */

int __usercall sub_10019140@<eax>(int a1@<eax>, unsigned __int8 *a2, unsigned __int8 *a3, unsigned __int8 **a4)
{
  unsigned __int8 *v4; // edx
  unsigned __int8 *v5; // ebp
  unsigned __int8 **v6; // esi
  unsigned __int8 v8; // bl
  unsigned __int8 v9; // cl
  int v10; // eax
  int result; // eax
  unsigned __int8 v12; // al
  int v13; // eax
  unsigned __int8 v14; // al
  int v15; // esi
  unsigned __int8 **v16; // ebx
  char v17; // al
  int v18; // eax
  char v19; // al
  int v20; // eax
  char v21; // al
  int v22; // eax

  v4 = a2;
  v5 = a3;
  v6 = a4;
  if ( a2 == a3 )
    return -1;
  while ( 2 )
  {
    v8 = v4[1];
    v9 = *v4;
    if ( v8 )
      v10 = sub_10017EF0(v4[1], v9);
    else
      v10 = *(unsigned __int8 *)(v9 + a1 + 72);
    switch ( v10 )
    {
      case 5:
        if ( v5 - v4 >= 2 )
          goto LABEL_7;
        return -2;
      case 6:
        if ( v5 - v4 >= 3 )
          goto LABEL_7;
        return -2;
      case 7:
        if ( v5 - v4 >= 4 )
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
        if ( ((1 << (v9 & 0x1F)) & dword_10027F10[8 * (unsigned __int8)byte_10028510[v8] + (v9 >> 5)]) == 0 )
          goto LABEL_7;
LABEL_66:
        v4 += 2;
        if ( v4 == v5 )
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
    if ( v4 == v5 )
      return -1;
    v12 = v4[1];
    if ( v12 )
    {
      switch ( v12 )
      {
        case 0xD8u:
        case 0xD9u:
        case 0xDAu:
        case 0xDBu:
          v13 = 7;
          break;
        case 0xDCu:
        case 0xDDu:
        case 0xDEu:
        case 0xDFu:
          v13 = 8;
          break;
        case 0xFFu:
          if ( *v4 != 0xFE && *v4 != 0xFF )
            goto LABEL_16;
          v13 = 0;
          break;
        default:
LABEL_16:
          v13 = 29;
          break;
      }
    }
    else
    {
      v13 = *(unsigned __int8 *)(*v4 + a1 + 72);
    }
    if ( v13 == 14 )
      break;
    if ( v13 < 9 )
    {
LABEL_7:
      *v6 = v4;
      return 0;
    }
    if ( v13 > 10 && v13 != 21 )
    {
      *v6 = v4;
      return 0;
    }
  }
  while ( 1 )
  {
LABEL_22:
    v4 += 2;
    if ( v4 == v5 )
      return -1;
    v14 = v4[1];
    if ( v14 )
    {
      switch ( v14 )
      {
        case 0xD8u:
        case 0xD9u:
        case 0xDAu:
        case 0xDBu:
          v15 = 7;
          break;
        case 0xDCu:
        case 0xDDu:
        case 0xDEu:
        case 0xDFu:
          v15 = 8;
          break;
        case 0xFFu:
          if ( *v4 != 0xFE && *v4 != 0xFF )
            goto LABEL_30;
          v15 = 0;
          break;
        default:
LABEL_30:
          v15 = 29;
          break;
      }
    }
    else
    {
      v15 = *(unsigned __int8 *)(*v4 + a1 + 72);
    }
    if ( v15 == 12 || v15 == 13 )
      break;
    if ( v15 < 9 || v15 > 10 && v15 != 21 )
    {
      *a4 = v4;
      return 0;
    }
  }
  v16 = a4;
LABEL_38:
  v4 += 2;
LABEL_39:
  a2 = v4;
  while ( 2 )
  {
    if ( v4 == v5 )
      return -1;
    v17 = v4[1];
    if ( v17 )
      v18 = sub_10017EF0(v17, *v4);
    else
      v18 = *(unsigned __int8 *)(*v4 + a1 + 72);
    if ( v18 == v15 )
    {
      v4 += 2;
      if ( v4 != v5 )
      {
        v19 = v4[1];
        if ( v19 )
          v20 = sub_10017EF0(v19, *v4);
        else
          v20 = *(unsigned __int8 *)(*v4 + a1 + 72);
        switch ( v20 )
        {
          case 9:
          case 10:
          case 21:
            while ( 2 )
            {
              v4 += 2;
              if ( v4 == v5 )
                return -1;
              v21 = v4[1];
              if ( v21 )
                v22 = sub_10017EF0(v21, *v4);
              else
                v22 = *(unsigned __int8 *)(*v4 + a1 + 72);
              switch ( v22 )
              {
                case 5:
                  if ( v5 - v4 >= 2 )
                    goto LABEL_76;
                  return -2;
                case 6:
                  if ( v5 - v4 >= 3 )
                    goto LABEL_76;
                  return -2;
                case 7:
                  if ( v5 - v4 >= 4 )
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
                  if ( ((1 << (*v4 & 0x1F)) & dword_10027F10[8 * (unsigned __int8)byte_10028410[v4[1]] + (*v4 >> 5)]) == 0 )
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
            *v16 = v4 + 2;
            return 1;
          case 17:
LABEL_81:
            v4 += 2;
            if ( v4 == v5 )
              return -1;
            if ( v4[1] || *v4 != 62 )
            {
LABEL_76:
              *v16 = v4;
              return 0;
            }
            else
            {
              *v16 = v4 + 2;
              return 3;
            }
          default:
            goto LABEL_76;
        }
      }
      return -1;
    }
    switch ( v18 )
    {
      case 0:
      case 1:
      case 2:
      case 8:
        goto LABEL_76;
      case 3:
        result = sub_10018F80(v5, v4 + 2, a1, &a2);
        if ( result > 0 )
        {
          v4 = a2;
          v16 = a4;
          continue;
        }
        if ( !result )
          *a4 = a2;
        return result;
      case 5:
        if ( v5 - v4 >= 2 )
          goto LABEL_38;
        return -2;
      case 6:
        if ( v5 - v4 < 3 )
          return -2;
        v4 += 3;
        goto LABEL_39;
      case 7:
        if ( v5 - v4 < 4 )
          return -2;
        v4 += 4;
        goto LABEL_39;
      default:
        goto LABEL_38;
    }
  }
}
