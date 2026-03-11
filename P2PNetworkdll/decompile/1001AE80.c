/*
 * func-name: sub_1001AE80
 * func-address: 0x1001ae80
 * callers: none
 * callees: 0x10017ef0
 */

int __cdecl sub_1001AE80(int a1, unsigned __int8 *a2, unsigned __int8 *a3)
{
  unsigned __int8 *v3; // edx
  char v5; // al
  unsigned __int8 v6; // cl
  int v7; // eax
  char v8; // al
  unsigned __int8 v9; // cl
  char v10; // al
  unsigned __int8 v11; // cl
  unsigned __int8 v12; // al
  _BYTE *v13; // esi
  _BYTE *v14; // edx
  char v15; // cl
  char v16; // al
  int result; // eax
  unsigned __int8 v18; // al
  _BYTE *v19; // edx
  _BYTE *v20; // esi
  char v21; // cl
  char v22; // al
  char v23; // al
  int v24; // eax

  v3 = a2;
  while ( 2 )
  {
    v5 = v3[1];
    v6 = *v3;
    if ( v5 )
      v7 = sub_10017EF0(v5, v6);
    else
      v7 = *(unsigned __int8 *)(v6 + a1 + 72);
    switch ( v7 )
    {
      case 5:
        goto LABEL_8;
      case 6:
        goto LABEL_7;
      case 7:
        v8 = *a3++;
        ++v3;
        if ( v6 != v8 )
          return 0;
LABEL_7:
        v9 = *v3;
        v10 = *a3++;
        ++v3;
        if ( v9 != v10 )
          return 0;
LABEL_8:
        v11 = *v3;
        v12 = *a3;
        v13 = a3 + 1;
        v14 = v3 + 1;
        if ( v11 == v12 )
        {
          v15 = *v14;
          v16 = *v13;
          a3 = v13 + 1;
          v3 = v14 + 1;
          if ( v15 == v16 )
            continue;
        }
        return 0;
      case 22:
      case 24:
      case 25:
      case 26:
      case 27:
      case 29:
        v18 = *a3;
        v19 = v3 + 1;
        v20 = a3 + 1;
        if ( v18 != v6 )
          return 0;
        v21 = *v20;
        v22 = *v19;
        v3 = v19 + 1;
        a3 = v20 + 1;
        if ( v21 == v22 )
          continue;
        return 0;
      default:
        v23 = a3[1];
        if ( v23 )
          v24 = sub_10017EF0(v23, *a3);
        else
          v24 = *(unsigned __int8 *)(*a3 + a1 + 72);
        switch ( v24 )
        {
          case 5:
          case 6:
          case 7:
          case 22:
          case 24:
          case 25:
          case 26:
          case 27:
          case 29:
            return 0;
          default:
            result = 1;
            break;
        }
        return result;
    }
  }
}
