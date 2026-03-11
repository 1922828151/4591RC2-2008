/*
 * func-name: sub_10017CD0
 * func-address: 0x10017cd0
 * callers: none
 * callees: none
 */

char __cdecl sub_10017CD0(int a1, unsigned __int8 **a2, unsigned __int8 *a3, _WORD **a4, _WORD *a5)
{
  __int16 v5; // ax
  unsigned __int8 *v6; // ecx
  _WORD *v7; // esi
  _WORD *v8; // edi
  unsigned int v9; // eax
  int v10; // edx
  __int16 v11; // dx
  __int16 v12; // dx

  LOBYTE(v5) = (_BYTE)a2;
  v6 = *a2;
  v7 = *a4;
  if ( *a2 == a3 )
  {
    *a2 = v6;
    *a4 = v7;
  }
  else
  {
    v8 = v7 + 1;
    while ( v7 != a5 )
    {
      LOBYTE(v5) = *v6;
      switch ( *(_BYTE *)(*v6 + a1 + 72) )
      {
        case 5:
          v12 = v5 & 0x1F;
          v5 = v6[1] & 0x3F;
          *v7++ = v5 | (v12 << 6);
          ++v8;
          v6 += 2;
          break;
        case 6:
          v11 = ((char)v5 << 6) | v6[1] & 0x3F;
          v5 = v6[2] & 0x3F;
          *v7++ = v5 | (v11 << 6);
          ++v8;
          v6 += 3;
          break;
        case 7:
          if ( v8 != a5 )
          {
            v9 = (v6[3] & 0x3F | ((v6[2] & 0x3F | ((v6[1] & 0x3F | ((v5 & 7) << 6)) << 6)) << 6)) - 0x10000;
            v10 = (v9 >> 10) | 0xD800;
            v5 = v9 & 0x3FF | 0xDC00;
            *v7 = v10;
            *v8 = v5;
            v7 += 2;
            v8 += 2;
            v6 += 4;
          }
          break;
        default:
          *v7++ = (char)v5;
          ++v8;
          ++v6;
          break;
      }
      if ( v6 == a3 )
      {
        *a2 = v6;
        *a4 = v7;
        return v5;
      }
    }
    LOBYTE(v5) = (_BYTE)a2;
    *a2 = v6;
    *a4 = v7;
  }
  return v5;
}
