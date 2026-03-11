/*
 * func-name: sub_1001DB90
 * func-address: 0x1001db90
 * callers: none
 * callees: 0x10017ef0
 */

int __cdecl sub_1001DB90(int a1, char *a2, char *a3)
{
  char *v3; // edx
  char v5; // bl
  int v6; // eax
  char v7; // al
  char v8; // cl
  char v9; // al
  char v10; // cl
  char v11; // al
  char *v12; // esi
  char *v13; // edx
  char v14; // cl
  char v15; // al
  int result; // eax
  char v17; // cl
  char *v18; // edx
  char *v19; // esi
  char v20; // al
  char v21; // cl
  int v22; // eax

  v3 = a2;
  while ( 2 )
  {
    v5 = *v3;
    if ( *v3 )
      v6 = sub_10017EF0(*v3, v3[1]);
    else
      v6 = *(unsigned __int8 *)((unsigned __int8)v3[1] + a1 + 72);
    switch ( v6 )
    {
      case 5:
        goto LABEL_8;
      case 6:
        goto LABEL_7;
      case 7:
        v7 = *a3++;
        ++v3;
        if ( v5 != v7 )
          return 0;
LABEL_7:
        v8 = *v3;
        v9 = *a3++;
        ++v3;
        if ( v8 != v9 )
          return 0;
LABEL_8:
        v10 = *v3;
        v11 = *a3;
        v12 = a3 + 1;
        v13 = v3 + 1;
        if ( v10 == v11 )
        {
          v14 = *v13;
          v15 = *v12;
          a3 = v12 + 1;
          v3 = v13 + 1;
          if ( v14 == v15 )
            continue;
        }
        return 0;
      case 22:
      case 24:
      case 25:
      case 26:
      case 27:
      case 29:
        v17 = *a3;
        v18 = v3 + 1;
        v19 = a3 + 1;
        if ( v17 != v5 )
          return 0;
        v20 = *v19;
        v21 = *v18;
        v3 = v18 + 1;
        a3 = v19 + 1;
        if ( v20 == v21 )
          continue;
        return 0;
      default:
        if ( *a3 )
          v22 = sub_10017EF0(*a3, a3[1]);
        else
          v22 = *(unsigned __int8 *)((unsigned __int8)a3[1] + a1 + 72);
        switch ( v22 )
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
