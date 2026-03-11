/*
 * func-name: sub_10018780
 * func-address: 0x10018780
 * callers: 0x100195f0
 * callees: 0x10017ef0, 0x10018710
 */

int __usercall sub_10018780@<eax>(char *a1@<eax>, char *a2@<ecx>, int a3, unsigned __int8 **a4)
{
  unsigned __int8 **v4; // ebp
  unsigned __int8 *v5; // esi
  int result; // eax
  unsigned __int8 v9; // dl
  unsigned __int8 v10; // cl
  int v11; // eax
  unsigned __int8 v12; // dl
  unsigned __int8 v13; // cl
  int v14; // eax
  int v15; // edx
  char v16; // al
  int v17; // eax
  int v18; // [esp+10h] [ebp-4h] BYREF

  v4 = a4;
  v5 = (unsigned __int8 *)a2;
  if ( a2 == a1 )
    return -1;
  v9 = a2[1];
  v10 = *a2;
  if ( v9 )
  {
    v11 = sub_10017EF0(v5[1], v10);
  }
  else
  {
    v11 = *(unsigned __int8 *)(v10 + a3 + 72);
    v4 = a4;
  }
  switch ( v11 )
  {
    case 5:
LABEL_16:
      if ( a1 - (char *)v5 >= 2 )
        goto LABEL_48;
      return -2;
    case 6:
LABEL_18:
      if ( a1 - (char *)v5 >= 3 )
        goto LABEL_48;
      return -2;
    case 7:
LABEL_46:
      if ( a1 - (char *)v5 >= 4 )
        goto LABEL_48;
      return -2;
    case 22:
    case 24:
      goto LABEL_8;
    case 29:
      if ( ((1 << (v10 & 0x1F)) & dword_10027F10[8 * (unsigned __int8)byte_10028410[v9] + (v10 >> 5)]) == 0 )
        goto LABEL_48;
LABEL_8:
      v5 += 2;
      if ( v5 == (unsigned __int8 *)a1 )
        return -1;
      while ( 2 )
      {
        v12 = v5[1];
        v13 = *v5;
        if ( v12 )
        {
          v14 = sub_10017EF0(v5[1], v13);
        }
        else
        {
          v14 = *(unsigned __int8 *)(v13 + a3 + 72);
          v4 = a4;
        }
        switch ( v14 )
        {
          case 5:
            goto LABEL_16;
          case 6:
            goto LABEL_18;
          case 7:
            goto LABEL_46;
          case 9:
          case 10:
          case 21:
            v18 = 11;
            if ( v5 - (unsigned __int8 *)a2 == 6 && !sub_10018710(a2, &v18) )
              goto LABEL_48;
            v5 += 2;
            if ( v5 == (unsigned __int8 *)a1 )
              return -1;
            v15 = a1 - (char *)v5;
            while ( 2 )
            {
              v16 = v5[1];
              if ( v16 )
                v17 = sub_10017EF0(v16, *v5);
              else
                v17 = *(unsigned __int8 *)(*v5 + a3 + 72);
              switch ( v17 )
              {
                case 0:
                case 1:
                case 8:
                  goto LABEL_48;
                case 5:
                  if ( v15 < 2 )
                    return -2;
                  goto LABEL_29;
                case 6:
                  if ( v15 < 3 )
                    return -2;
                  v5 += 3;
                  v15 -= 3;
                  goto LABEL_30;
                case 7:
                  if ( v15 < 4 )
                    return -2;
                  v5 += 4;
                  v15 -= 4;
                  goto LABEL_30;
                case 15:
                  v5 += 2;
                  v15 -= 2;
                  if ( v5 == (unsigned __int8 *)a1 )
                    return -1;
                  if ( v5[1] || *v5 != 62 )
                    goto LABEL_30;
                  goto LABEL_45;
                default:
LABEL_29:
                  v5 += 2;
                  v15 -= 2;
LABEL_30:
                  if ( v5 != (unsigned __int8 *)a1 )
                    continue;
                  result = -1;
                  break;
              }
              return result;
            }
          case 15:
            v18 = 11;
            if ( v5 - (unsigned __int8 *)a2 == 6 && !sub_10018710(a2, &v18) )
              goto LABEL_48;
            v5 += 2;
            if ( v5 == (unsigned __int8 *)a1 )
              return -1;
            if ( v5[1] || *v5 != 62 )
              goto LABEL_48;
LABEL_45:
            result = v18;
            *v4 = v5 + 2;
            break;
          case 22:
          case 24:
          case 25:
          case 26:
          case 27:
            goto LABEL_14;
          case 29:
            if ( ((1 << (v13 & 0x1F)) & dword_10027F10[8 * (unsigned __int8)byte_10028510[v12] + (v13 >> 5)]) == 0 )
              goto LABEL_48;
LABEL_14:
            v5 += 2;
            if ( v5 != (unsigned __int8 *)a1 )
              continue;
            result = -1;
            break;
          default:
            goto LABEL_48;
        }
        break;
      }
      break;
    default:
LABEL_48:
      *v4 = v5;
      return 0;
  }
  return result;
}
