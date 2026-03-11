/*
 * func-name: sub_10016B50
 * func-address: 0x10016b50
 * callers: 0x10016cc0
 * callees: none
 */

int __usercall sub_10016B50@<eax>(
        unsigned __int8 *a1@<eax>,
        _BYTE *a2@<ebx>,
        int a3,
        unsigned __int8 *a4,
        unsigned __int8 **a5)
{
  unsigned __int8 *v5; // esi
  int v6; // edi
  int v7; // eax
  int result; // eax

  v5 = a1;
  if ( a1 == a4 )
    return -1;
  v6 = a4 - a1;
  while ( 2 )
  {
    v7 = (unsigned __int8)a2[*v5 + 72];
    switch ( a2[*v5 + 72] )
    {
      case 0:
      case 1:
      case 8:
        goto LABEL_20;
      case 5:
        if ( v6 < 2 )
          return -2;
        if ( !(*((int (__cdecl **)(_BYTE *, unsigned __int8 *))a2 + 88))(a2, v5) )
        {
          v5 += 2;
          v6 -= 2;
LABEL_17:
          if ( v5 == a4 )
            return -1;
          continue;
        }
LABEL_20:
        *a5 = v5;
        return 0;
      case 6:
        if ( v6 < 3 )
          return -2;
        if ( (*((int (__cdecl **)(_BYTE *, unsigned __int8 *))a2 + 89))(a2, v5) )
        {
          *a5 = v5;
          return 0;
        }
        v5 += 3;
        v6 -= 3;
        goto LABEL_17;
      case 7:
        if ( v6 < 4 )
          return -2;
        if ( (*((int (__cdecl **)(_BYTE *, unsigned __int8 *))a2 + 90))(a2, v5) )
        {
          *a5 = v5;
          return 0;
        }
        v5 += 4;
        v6 -= 4;
        goto LABEL_17;
      case 0xC:
      case 0xD:
        ++v5;
        --v6;
        if ( v7 != a3 )
          goto LABEL_17;
        if ( v5 == a4 )
          return -27;
        *a5 = v5;
        switch ( a2[*v5 + 72] )
        {
          case 9:
          case 0xA:
          case 0xB:
          case 0x14:
          case 0x15:
          case 0x1E:
            result = 27;
            break;
          default:
            return 0;
        }
        return result;
      default:
        ++v5;
        --v6;
        goto LABEL_17;
    }
  }
}
