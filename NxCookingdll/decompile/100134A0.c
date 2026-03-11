/*
 * func-name: sub_100134A0
 * func-address: 0x100134a0
 * callers: 0x10009820, 0x1000dbc0, 0x10013840
 * callees: 0x10013020, 0x100130a0
 */

char __cdecl sub_100134A0(char a1, char a2, char a3, char a4, int *a5, char *a6, int a7)
{
  int v7; // esi
  char v8; // bl
  int (__thiscall *v9)(int); // edx
  char v10; // al
  char v12; // [esp+9h] [ebp-3h] BYREF
  char v13; // [esp+Ah] [ebp-2h] BYREF
  char v14; // [esp+Bh] [ebp-1h] BYREF

  v7 = a7;
  v8 = (*(int (__thiscall **)(int))(*(_DWORD *)a7 + 4))(a7);
  v9 = *(int (__thiscall **)(int))(*(_DWORD *)v7 + 4);
  v13 = v8;
  LOBYTE(a7) = v9(v7);
  v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 4))(v7);
  v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 4))(v7);
  v14 = v10;
  if ( v8 != 78 || (_BYTE)a7 != 88 || v12 != 83 )
    return 0;
  *a6 = (v10 & 1) != 1;
  sub_10013020(&v13, &a7, &v12, &v14, v7);
  if ( v13 != a1 || (_BYTE)a7 != a2 || v12 != a3 || v14 != a4 )
    return 0;
  *a5 = sub_100130A0(*a6, v7);
  return 1;
}
