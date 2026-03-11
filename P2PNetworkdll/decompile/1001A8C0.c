/*
 * func-name: sub_1001A8C0
 * func-address: 0x1001a8c0
 * callers: none
 * callees: 0x10017ef0
 */

int __cdecl sub_1001A8C0(int a1, int a2, int a3, _DWORD *a4)
{
  int v4; // esi
  char v5; // dl
  unsigned __int8 v6; // cl
  int v7; // eax
  int v9; // eax

  v4 = a2 + 2;
  if ( a2 + 2 == a3 - 2 )
    return 1;
  while ( 2 )
  {
    v5 = *(_BYTE *)(v4 + 1);
    v6 = *(_BYTE *)v4;
    if ( v5 )
      v7 = sub_10017EF0(*(_BYTE *)(v4 + 1), v6);
    else
      v7 = *(unsigned __int8 *)(v6 + a1 + 72);
    switch ( v7 )
    {
      case 9:
      case 10:
      case 13:
      case 14:
      case 15:
      case 16:
      case 17:
      case 18:
      case 19:
      case 24:
      case 25:
      case 27:
      case 30:
      case 31:
      case 32:
      case 33:
      case 34:
      case 35:
        goto LABEL_16;
      case 21:
        if ( v5 || v6 != 9 )
          goto LABEL_16;
        *a4 = v4;
        return 0;
      case 22:
      case 26:
        if ( v5 )
          v9 = -1;
        else
          v9 = (char)v6;
        if ( (v9 & 0xFFFFFF80) != 0 )
          goto LABEL_13;
        goto LABEL_16;
      default:
LABEL_13:
        if ( !v5 && (v6 == 36 || v6 == 64) )
        {
LABEL_16:
          v4 += 2;
          if ( v4 == a3 - 2 )
            return 1;
          continue;
        }
        *a4 = v4;
        return 0;
    }
  }
}
