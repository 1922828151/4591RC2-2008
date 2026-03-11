/*
 * func-name: sub_10023610
 * func-address: 0x10023610
 * callers: 0x10023a90, 0x10023e50
 * callees: 0x1000d700, 0x10017390, 0x10017de0, 0x100183a0, 0x10024560
 */

char __thiscall sub_10023610(int *this)
{
  int *v2; // edi
  int v3; // eax
  int v4; // ecx
  bool v5; // zf
  int v6; // eax
  unsigned __int8 (__thiscall *v7)(int *, float *); // edx
  int v9; // [esp+0h] [ebp-28h]
  float v10[6]; // [esp+Ch] [ebp-1Ch] BYREF
  char v11; // [esp+24h] [ebp-4h]
  bool v12; // [esp+25h] [ebp-3h]
  char v13; // [esp+26h] [ebp-2h]
  char v14; // [esp+27h] [ebp-1h]

  v2 = this + 2;
  sub_10017DE0(this + 2);
  this[24] = (*(int (__thiscall **)(int *))(*this + 48))(this);
  v3 = (*(int (__thiscall **)(int *))(*this + 52))(this);
  v4 = this[41];
  this[23] = v3;
  sub_100183A0(this + 21, v4, this[43]);
  sub_10017390(v10);
  LODWORD(v10[0]) = this + 21;
  v11 = 1;
  v5 = *(_BYTE *)(NxGetCookingParams() + 8) == 0;
  v6 = *v2;
  v12 = v5;
  v7 = *(unsigned __int8 (__thiscall **)(int *, float *))(v6 + 8);
  LODWORD(v10[1]) = 1;
  LODWORD(v10[2]) = 34;
  v13 = 0;
  v14 = 0;
  if ( v7(v2, v10) )
    return 1;
  sub_1000D700(
    4,
    (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Cooking\\src\\ConvexMeshBuilder.cpp",
    373,
    0,
    "Opcode is not OK.",
    v9);
  return 0;
}
