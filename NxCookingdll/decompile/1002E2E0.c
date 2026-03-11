/*
 * func-name: sub_1002E2E0
 * func-address: 0x1002e2e0
 * callers: 0x1002f7f0
 * callees: 0x1000d700, 0x10014910, 0x10017390, 0x100178d0, 0x100183a0, 0x10024560
 */

char __thiscall sub_1002E2E0(_DWORD **this, int a2, int a3)
{
  void (__thiscall ***v4)(_DWORD, int); // ecx
  bool v5; // zf
  _DWORD *v6; // ecx
  int (__stdcall ***v7)(size_t, int); // eax
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  int v11[6]; // [esp+Ch] [ebp-1Ch] BYREF
  char v12; // [esp+24h] [ebp-4h]
  bool v13; // [esp+25h] [ebp-3h]
  char v14; // [esp+26h] [ebp-2h]
  char v15; // [esp+27h] [ebp-1h]

  v4 = (void (__thiscall ***)(_DWORD, int))(*this)[11];
  if ( v4 )
  {
    (**v4)(v4, 1);
    (*this)[11] = 0;
  }
  (*this)[28] = **this;
  (*this)[27] = (*this)[1];
  sub_100183A0(*this + 25, (*this)[3], (*this)[2]);
  sub_10017390((float *)v11);
  v11[0] = (int)(*this + 25);
  v12 = 1;
  v5 = *((_BYTE *)NxGetCookingParams() + 8) == 0;
  v11[1] = 1;
  v13 = v5;
  v11[2] = 34;
  if ( a2 != 255 )
  {
    v11[4] = a2;
    v11[3] = a3;
  }
  v6 = *this;
  v14 = 0;
  v15 = 1;
  v6[25] = sub_1002E280;
  (*this)[26] = this;
  v7 = sub_10014910();
  v8 = (_DWORD *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v7)(v7, 36, 12);
  if ( v8 )
    v9 = sub_100178D0(v8);
  else
    v9 = 0;
  (*this)[11] = v9;
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int *))(*(_DWORD *)(*this)[11] + 8))((*this)[11], v11) )
    return 1;
  sub_1000D700(
    4,
    (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Cooking\\src\\InternalTriangleMeshBuilder.cpp",
    164,
    0,
    "Opcode is not OK.",
    v11[0]);
  return 0;
}
