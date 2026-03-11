/*
 * func-name: sub_10015040
 * func-address: 0x10015040
 * callers: 0x10016cc0
 * callees: 0x10014ef0
 */

int __usercall sub_10015040@<eax>(
        unsigned __int8 *a1@<eax>,
        unsigned __int8 *a2@<edx>,
        _BYTE *a3@<ecx>,
        unsigned __int8 **a4@<esi>)
{
  int result; // eax

  if ( a1 == a2 )
    return -1;
  switch ( a3[*a1 + 72] )
  {
    case 0x14:
      *a4 = a1 + 1;
      result = 33;
      break;
    case 0x16:
    case 0x18:
      if ( ++a1 == a2 )
        return -1;
      while ( 2 )
      {
        switch ( a3[*a1 + 72] )
        {
          case 9:
          case 0xA:
          case 0x15:
LABEL_12:
            *a4 = a1;
            result = 16;
            break;
          case 0x16:
          case 0x18:
            if ( ++a1 != a2 )
              continue;
            result = -1;
            break;
          case 0x1E:
            if ( a1 + 1 != a2 )
            {
              switch ( a3[a1[1] + 72] )
              {
                case 9:
                case 0xA:
                case 0x15:
                case 0x1E:
                  goto LABEL_13;
                default:
                  goto LABEL_12;
              }
            }
            return -1;
          default:
            goto LABEL_13;
        }
        break;
      }
      break;
    case 0x1B:
      result = sub_10014EF0(a1 + 1, a3, a2, a4);
      break;
    default:
LABEL_13:
      *a4 = a1;
      result = 0;
      break;
  }
  return result;
}
