/*
 * func-name: sub_100179C0
 * func-address: 0x100179c0
 * callers: none
 * callees: none
 */

int __cdecl sub_100179C0(int a1, char *a2, char *a3)
{
  char *v3; // eax
  unsigned __int8 v4; // dl
  unsigned int v6; // ecx
  char v7; // cl
  char v8; // dl
  char v9; // cl
  char v10; // dl
  char v11; // cl
  char *v12; // esi
  char *v13; // eax
  char v14; // dl
  char v15; // cl
  bool v16; // zf
  char v17; // cl

  v3 = a2;
  v4 = *a2;
  v6 = *(unsigned __int8 *)((unsigned __int8)*a2 + a1 + 72) - 5;
  while ( 2 )
  {
    switch ( v6 )
    {
      case 0u:
        goto LABEL_5;
      case 1u:
        goto LABEL_4;
      case 2u:
        v7 = *a3++;
        ++v3;
        if ( v4 != v7 )
          return 0;
LABEL_4:
        v8 = *v3;
        v9 = *a3++;
        ++v3;
        if ( v8 != v9 )
          return 0;
LABEL_5:
        v10 = *v3;
        v11 = *a3;
        v12 = a3 + 1;
        v13 = v3 + 1;
        if ( v10 != v11 )
          return 0;
        v14 = *v13;
        v15 = *v12;
        a3 = v12 + 1;
        v3 = v13 + 1;
        v16 = v14 == v15;
LABEL_8:
        if ( !v16 )
          return 0;
        v4 = *v3;
        v6 = *(unsigned __int8 *)((unsigned __int8)*v3 + a1 + 72) - 5;
        if ( v6 <= 0x18 )
          continue;
LABEL_10:
        if ( *v3 != *a3 )
        {
          switch ( *(_BYTE *)((unsigned __int8)*a3 + a1 + 72) )
          {
            case 5:
            case 6:
            case 7:
            case 0x16:
            case 0x18:
            case 0x19:
            case 0x1A:
            case 0x1B:
            case 0x1D:
              return 0;
            default:
              return 1;
          }
        }
        return 1;
      case 0x11u:
      case 0x13u:
      case 0x14u:
      case 0x15u:
      case 0x16u:
      case 0x18u:
        v17 = *a3;
        ++v3;
        ++a3;
        v16 = v17 == (char)v4;
        goto LABEL_8;
      default:
        goto LABEL_10;
    }
  }
}
