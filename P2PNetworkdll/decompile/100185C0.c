/*
 * func-name: sub_100185C0
 * func-address: 0x100185c0
 * callers: none
 * callees: 0x10017ef0, 0x100184b0
 */

int __usercall sub_100185C0@<eax>(
        unsigned __int8 *a1@<eax>,
        unsigned __int8 *a2@<edx>,
        int a3@<ecx>,
        unsigned __int8 **a4@<esi>)
{
  int result; // eax
  char v7; // al
  int v8; // eax
  char v9; // al
  int v10; // eax
  unsigned __int8 *v11; // ecx
  char v12; // al
  int v13; // eax

  if ( a2 == a1 )
    return -1;
  v7 = a2[1];
  if ( v7 )
    v8 = sub_10017EF0(v7, *a2);
  else
    v8 = *(unsigned __int8 *)(*a2 + a3 + 72);
  switch ( v8 )
  {
    case 20:
      result = 33;
      *a4 = a2 + 2;
      break;
    case 22:
    case 24:
      a2 += 2;
      if ( a2 == a1 )
        return -1;
      while ( 2 )
      {
        v9 = a2[1];
        if ( v9 )
          v10 = sub_10017EF0(v9, *a2);
        else
          v10 = *(unsigned __int8 *)(*a2 + a3 + 72);
        switch ( v10 )
        {
          case 9:
          case 10:
          case 21:
LABEL_21:
            result = 16;
            *a4 = a2;
            break;
          case 22:
          case 24:
            a2 += 2;
            if ( a2 != a1 )
              continue;
            result = -1;
            break;
          case 30:
            v11 = a2 + 2;
            if ( a2 + 2 != a1 )
            {
              v12 = a2[3];
              if ( v12 )
                v13 = sub_10017EF0(v12, *v11);
              else
                v13 = *(unsigned __int8 *)(*v11 + a3 + 72);
              switch ( v13 )
              {
                case 9:
                case 10:
                case 21:
                case 30:
                  goto LABEL_22;
                default:
                  goto LABEL_21;
              }
            }
            return -1;
          default:
            goto LABEL_22;
        }
        break;
      }
      break;
    case 27:
      result = sub_100184B0(a2 + 2, a3, a1, a4);
      break;
    default:
LABEL_22:
      result = 0;
      *a4 = a2;
      break;
  }
  return result;
}
