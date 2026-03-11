/*
 * func-name: sub_1019FE90
 * func-address: 0x1019fe90
 * callers: 0x10010b9a
 * callees: 0x102c9dbc
 */

bool __thiscall sub_1019FE90(_DWORD **this, int a2)
{
  float *v3; // eax
  float v5; // [esp+0h] [ebp-14h]
  float v6; // [esp+0h] [ebp-14h]
  _BYTE v7[12]; // [esp+8h] [ebp-Ch] BYREF

  v3 = (float *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*this[1] + 44))(this[1], v7);
  v5 = v3[1] * v3[1] + *v3 * *v3 + v3[2] * v3[2];
  v6 = sqrt(v5);
  return *(float *)(this[1][115] + 840) >= (double)v6;
}
