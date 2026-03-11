/*
 * func-name: sub_10014EF0
 * func-address: 0x10014ef0
 * callers: 0x10015040, 0x100160b0
 * callees: none
 */

int __usercall sub_10014EF0@<eax>(_BYTE *a1@<eax>, _BYTE *a2@<ebx>, _BYTE *a3, _DWORD *a4)
{
  _BYTE *v4; // esi
  int v6; // edi

  v4 = a1;
  if ( a1 == a3 )
    return -1;
  if ( *a1 != 45 )
  {
LABEL_3:
    *a4 = v4;
    return 0;
  }
  v4 = a1 + 1;
  if ( a1 + 1 == a3 )
    return -1;
  v6 = a3 - v4;
  while ( 2 )
  {
    switch ( a2[(unsigned __int8)*v4 + 72] )
    {
      case 0:
      case 1:
      case 8:
        goto LABEL_3;
      case 5:
        if ( v6 < 2 )
          return -2;
        if ( (*((int (__cdecl **)(_BYTE *, _BYTE *))a2 + 88))(a2, v4) )
          goto LABEL_3;
        v4 += 2;
        v6 -= 2;
        goto LABEL_22;
      case 6:
        if ( v6 < 3 )
          return -2;
        if ( (*((int (__cdecl **)(_BYTE *, _BYTE *))a2 + 89))(a2, v4) )
          goto LABEL_25;
        v4 += 3;
        v6 -= 3;
        goto LABEL_22;
      case 7:
        if ( v6 < 4 )
          return -2;
        if ( !(*((int (__cdecl **)(_BYTE *, _BYTE *))a2 + 90))(a2, v4) )
        {
          v4 += 4;
          v6 -= 4;
LABEL_22:
          if ( v4 == a3 )
            return -1;
          continue;
        }
        *a4 = v4;
        return 0;
      case 0x1B:
        ++v4;
        --v6;
        if ( v4 == a3 )
          return -1;
        if ( *v4 != 45 )
          goto LABEL_22;
        if ( ++v4 == a3 )
          return -1;
        if ( *v4 == 62 )
        {
          *a4 = v4 + 1;
          return 13;
        }
        else
        {
LABEL_25:
          *a4 = v4;
          return 0;
        }
      default:
        ++v4;
        --v6;
        goto LABEL_22;
    }
  }
}
