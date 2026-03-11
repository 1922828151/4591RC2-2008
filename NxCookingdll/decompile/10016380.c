/*
 * func-name: sub_10016380
 * func-address: 0x10016380
 * callers: 0x1000c840, 0x1000ce00, 0x1000f620, 0x1000f7b0, 0x10014680
 * callees: none
 */

char __cdecl sub_10016380(char a1, char a2, char a3, char a4, int *a5, bool *a6, int a7)
{
  char v8; // bl
  char v9; // al
  char v10; // bl
  char v11; // al
  bool v12; // bl
  int v13; // eax
  char v15; // [esp+Bh] [ebp-1h]
  char v16; // [esp+Bh] [ebp-1h]
  char v17; // [esp+28h] [ebp+1Ch]
  char v18; // [esp+28h] [ebp+1Ch]
  int v19; // [esp+28h] [ebp+1Ch]

  v8 = (*(int (__thiscall **)(int))(*(_DWORD *)a7 + 4))(a7);
  v17 = (*(int (__thiscall **)(int))(*(_DWORD *)a7 + 4))(a7);
  v15 = (*(int (__thiscall **)(int))(*(_DWORD *)a7 + 4))(a7);
  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)a7 + 4))(a7);
  if ( v8 != 73 || v17 != 67 || v15 != 69 )
    return 0;
  *a6 = (v9 & 1) != 1;
  v10 = (*(int (__thiscall **)(int))(*(_DWORD *)a7 + 4))(a7);
  v18 = (*(int (__thiscall **)(int))(*(_DWORD *)a7 + 4))(a7);
  v16 = (*(int (__thiscall **)(int))(*(_DWORD *)a7 + 4))(a7);
  v11 = (*(int (__thiscall **)(int))(*(_DWORD *)a7 + 4))(a7);
  if ( v10 != a1 || v18 != a2 || v16 != a3 || v11 != a4 )
    return 0;
  v12 = *a6;
  v13 = (*(int (__thiscall **)(int))(*(_DWORD *)a7 + 12))(a7);
  v19 = v13;
  if ( v12 )
  {
    HIBYTE(v19) = v13;
    LOBYTE(v19) = HIBYTE(v13);
    BYTE1(v19) = BYTE2(v13);
    BYTE2(v19) = BYTE1(v13);
  }
  *a5 = v19;
  return 1;
}
