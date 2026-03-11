/*
 * func-name: sub_10018210
 * func-address: 0x10018210
 * callers: none
 * callees: none
 */

void __cdecl sub_10018210(int a1, unsigned __int8 **a2, unsigned __int8 *a3, unsigned __int8 **a4, unsigned __int8 *a5)
{
  unsigned __int8 **v5; // ebp
  unsigned __int8 *v6; // edi
  unsigned __int8 v7; // dl
  unsigned __int8 v8; // cl
  unsigned __int8 v9; // si
  unsigned __int8 *v10; // edx
  unsigned __int8 *v11; // esi
  char v12; // dl
  unsigned __int8 v13; // bl
  unsigned __int8 v14; // dl

  v5 = a2;
  v6 = *a2;
  if ( *a2 == a3 )
  {
LABEL_5:
    *v5 = v6;
    return;
  }
  while ( 2 )
  {
    v7 = *v6;
    v8 = v6[1];
    v9 = *v6;
    switch ( *v6 )
    {
      case 0u:
        if ( v8 >= 0x80u )
          goto LABEL_6;
        v10 = *a4;
        if ( *a4 == a5 )
          goto LABEL_5;
        goto LABEL_13;
      case 1u:
      case 2u:
      case 3u:
      case 4u:
      case 5u:
      case 6u:
      case 7u:
LABEL_6:
        v11 = *a4;
        if ( a5 - *a4 < 2 )
          goto LABEL_5;
        v12 = v7 | 0xF0;
        goto LABEL_12;
      case 0xD8u:
      case 0xD9u:
      case 0xDAu:
      case 0xDBu:
        if ( a5 - *a4 >= 4 )
        {
          *(*a4)++ = ((((4 * (v9 & 3)) | (v8 >> 6)) + 1) >> 2) | 0xF0;
          v5 = a2;
          *(*a4)++ = (v8 >> 2) & 0xF | (16 * ((((4 * (v9 & 3)) | (v8 >> 6)) + 1) & 3 | 0xF8));
          v13 = v6[2];
          v14 = v6[3];
          v6 += 2;
          *(*a4)++ = (v14 >> 6) | (4 * (v13 & 3 | (4 * (v8 & 3 | 0xF8))));
          **a4 = v14 & 0x3F | 0x80;
LABEL_14:
          ++*a4;
          v6 += 2;
          if ( v6 == a3 )
          {
            *v5 = v6;
            return;
          }
          continue;
        }
        *a2 = v6;
        return;
      default:
        if ( a5 - *a4 < 3 )
          goto LABEL_5;
        *(*a4)++ = (v7 >> 4) | 0xE0;
        v11 = *a4;
        v12 = v7 & 0xF | 0xE0;
LABEL_12:
        *v11 = (v8 >> 6) | (4 * v12);
        v10 = ++*a4;
        v8 = v8 & 0x3F | 0x80;
LABEL_13:
        *v10 = v8;
        goto LABEL_14;
    }
  }
}
