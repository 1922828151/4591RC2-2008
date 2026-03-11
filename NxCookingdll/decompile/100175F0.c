/*
 * func-name: sub_100175F0
 * func-address: 0x100175f0
 * callers: 0x10017ac0
 * callees: 0x10014910, 0x10017360, 0x100173f0
 */

char __thiscall sub_100175F0(_DWORD *this, int a2)
{
  int v3; // esi
  int (__stdcall ***v4)(size_t, int); // eax
  void (__thiscall ***v5)(_DWORD, int); // ecx
  char v7; // bl
  char v8; // al
  bool v9; // bl
  int v10; // eax
  int v11; // eax
  char v13; // [esp+Fh] [ebp-5h]
  bool v14; // [esp+10h] [ebp-4h]
  char v15; // [esp+18h] [ebp+4h]
  int v16; // [esp+18h] [ebp+4h]
  int v17; // [esp+18h] [ebp+4h]

  v3 = this[3];
  if ( v3 )
  {
    sub_10017360(this[3]);
    v4 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), int))(*v4)[3])(v4, v3);
    this[3] = 0;
  }
  v5 = (void (__thiscall ***)(_DWORD, int))this[4];
  if ( v5 )
  {
    (**v5)(v5, 1);
    this[4] = 0;
  }
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2);
  v15 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2);
  v13 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2);
  v8 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2);
  if ( v7 != 79 || v15 != 80 || v13 != 67 )
    return 0;
  v9 = v8 != 1;
  v14 = v8 != 1;
  v10 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 12))(a2);
  v16 = v10;
  if ( v9 )
  {
    HIBYTE(v16) = v10;
    LOBYTE(v16) = HIBYTE(v10);
    BYTE1(v16) = BYTE2(v10);
    BYTE2(v16) = BYTE1(v10);
  }
  if ( !v16 )
    return 0;
  v11 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 12))(a2);
  LOBYTE(v17) = v11;
  if ( v9 )
  {
    HIBYTE(v17) = v11;
    LOBYTE(v17) = HIBYTE(v11);
    BYTE1(v17) = BYTE2(v11);
    BYTE2(v17) = BYTE1(v11);
    v11 = v17;
  }
  this[2] = v11;
  if ( (v17 & 4) != 0 )
    return 1;
  if ( sub_100173F0(this, (v11 & 2) != 0, v11 & 1) )
    return (*(int (__thiscall **)(_DWORD, bool, int))(*(_DWORD *)this[4] + 24))(this[4], v14, a2);
  else
    return 0;
}
