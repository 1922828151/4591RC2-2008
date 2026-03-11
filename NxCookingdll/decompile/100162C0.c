/*
 * func-name: sub_100162C0
 * func-address: 0x100162c0
 * callers: 0x1001e350, 0x10022c20, 0x1002b280, 0x1002b810, 0x100302d0
 * callees: none
 */

char __cdecl sub_100162C0(int a1, int a2, int a3, int a4, int a5, char a6, int a7)
{
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  bool v15; // [esp+Ch] [ebp-4h]
  int v16; // [esp+28h] [ebp+18h]

  v15 = a6 == 0;
  v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a7 + 28))(a7, 73);
  v9 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v8 + 28))(v8, 67);
  v10 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v9 + 28))(v9, 69);
  (*(void (__thiscall **)(int, bool))(*(_DWORD *)v10 + 28))(v10, v15);
  v11 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a7 + 28))(a7, a1);
  v12 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v11 + 28))(v11, a2);
  v13 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v12 + 28))(v12, a3);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v13 + 28))(v13, a4);
  v16 = a5;
  if ( a6 )
  {
    HIBYTE(v16) = a5;
    LOBYTE(v16) = HIBYTE(a5);
    BYTE1(v16) = BYTE2(a5);
    BYTE2(v16) = BYTE1(a5);
  }
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a7 + 36))(a7, v16);
  return 1;
}
