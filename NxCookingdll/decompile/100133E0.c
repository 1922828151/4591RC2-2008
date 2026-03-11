/*
 * func-name: sub_100133E0
 * func-address: 0x100133e0
 * callers: 0x10007d70, 0x100242e0, 0x1002fc50
 * callees: none
 */

char __cdecl sub_100133E0(int a1, int a2, int a3, int a4, int a5, char a6, int a7)
{
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  bool v15; // [esp+Ch] [ebp-4h]
  int v16; // [esp+28h] [ebp+18h]

  v15 = a6 == 0;
  v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a7 + 28))(a7, 78);
  v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v7 + 28))(v7, 88);
  v9 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v8 + 28))(v8, 83);
  (*(void (__thiscall **)(int, bool))(*(_DWORD *)v9 + 28))(v9, v15);
  v10 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a7 + 28))(a7, a1);
  v11 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v10 + 28))(v10, a2);
  v12 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v11 + 28))(v11, a3);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 28))(v12, a4);
  v13 = a5;
  if ( a6 )
  {
    LOBYTE(v16) = HIBYTE(a5);
    BYTE1(v16) = BYTE2(a5);
    BYTE2(v16) = BYTE1(a5);
    HIBYTE(v16) = a5;
    v13 = v16;
  }
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a7 + 36))(a7, v13);
  return 1;
}
