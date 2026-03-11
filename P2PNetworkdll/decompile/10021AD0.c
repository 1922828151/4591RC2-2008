/*
 * func-name: sub_10021AD0
 * func-address: 0x10021ad0
 * callers: 0x1001f4a0, 0x10021ad0
 * callees: 0x10022290, 0x100223b0, 0x10022450
 */

int __cdecl sub_10021AD0(int a1, int a2, int a3, _DWORD *a4)
{
  int v4; // ebp
  int v5; // esi
  int (__cdecl **v6)(_DWORD, int, int, int *); // eax
  int v7; // edi
  int v8; // ecx
  int v9; // eax
  unsigned int v10; // ecx
  int v11; // eax
  int v12; // ecx
  _DWORD *v14; // eax
  int v15; // [esp-8h] [ebp-18h]

  v4 = a3;
  v5 = a1;
  v6 = *(int (__cdecl ***)(_DWORD, int, int, int *))(a1 + 120);
  v7 = a2;
  v15 = a3;
  *(_DWORD *)(a1 + 236) = sub_10021AD0;
  *(_DWORD *)(v5 + 244) = v7;
  v8 = (*v6)(v6, v7, v15, &a1);
  v9 = a1;
  v10 = v8 + 15;
  *(_DWORD *)(v5 + 248) = a1;
  while ( 2 )
  {
    switch ( v10 )
    {
      case 0u:
        if ( *(_DWORD *)(v5 + 68) )
        {
          *(_DWORD *)(v5 + 248) = v4;
          sub_10022450(v7);
        }
        goto LABEL_13;
      case 0xBu:
LABEL_13:
        if ( a4 )
          *a4 = v4;
        return 0;
      case 0xDu:
        v14 = a4;
        if ( a4 )
          goto LABEL_19;
        return 6;
      case 0xEu:
        v14 = a4;
        if ( !a4 )
          return 5;
LABEL_19:
        *v14 = v7;
        return 0;
      case 0xFu:
        *(_DWORD *)(v5 + 244) = v9;
        return 4;
      case 0x1Au:
        v11 = sub_10022290(v5, v7, v9);
        goto LABEL_7;
      case 0x1Cu:
        v11 = sub_100223B0(v5);
LABEL_7:
        if ( v11 )
          goto LABEL_8;
        return 1;
      case 0x1Eu:
        if ( !*(_DWORD *)(v5 + 68) )
          goto LABEL_9;
        sub_10022450(v7);
LABEL_8:
        v9 = a1;
LABEL_9:
        *(_DWORD *)(v5 + 244) = v9;
        v7 = v9;
        v12 = (**(int (__cdecl ***)(_DWORD, int, int, int *))(v5 + 120))(*(_DWORD *)(v5 + 120), v9, v4, &a1);
        v9 = a1;
        v10 = v12 + 15;
        *(_DWORD *)(v5 + 248) = a1;
        if ( v10 <= 0x1E )
          continue;
        return 9;
      default:
        return 9;
    }
  }
}
