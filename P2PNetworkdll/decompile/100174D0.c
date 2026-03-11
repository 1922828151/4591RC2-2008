/*
 * func-name: sub_100174D0
 * func-address: 0x100174d0
 * callers: none
 * callees: none
 */

int __cdecl sub_100174D0(int a1, int a2, int a3, char **a4)
{
  char *v4; // edx
  char v5; // al

  v4 = (char *)(a2 + 1);
  if ( a2 + 1 == a3 - 1 )
    return 1;
  while ( 2 )
  {
    v5 = *v4;
    switch ( *(_BYTE *)((unsigned __int8)*v4 + a1 + 72) )
    {
      case 9:
      case 0xA:
      case 0xD:
      case 0xE:
      case 0xF:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x18:
      case 0x19:
      case 0x1B:
      case 0x1E:
      case 0x1F:
      case 0x20:
      case 0x21:
      case 0x22:
      case 0x23:
        goto LABEL_8;
      case 0x15:
        if ( v5 != 9 )
          goto LABEL_8;
        *a4 = v4;
        return 0;
      case 0x16:
      case 0x1A:
        if ( v5 < 0 )
          goto LABEL_6;
        goto LABEL_8;
      default:
LABEL_6:
        if ( v5 == 36 || v5 == 64 )
        {
LABEL_8:
          if ( ++v4 == (char *)(a3 - 1) )
            return 1;
          continue;
        }
        *a4 = v4;
        return 0;
    }
  }
}
