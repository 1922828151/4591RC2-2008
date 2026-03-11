/*
 * func-name: sub_1000EEC0
 * func-address: 0x1000eec0
 * callers: none
 * callees: none
 */

int __thiscall sub_1000EEC0(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int v9; // [esp-8h] [ebp-8h]

  v5 = this[9];
  v6 = this[7];
  v7 = this[8];
  v9 = *(unsigned __int16 *)(v6 + 162);
  *(_DWORD *)(v6 + 164) = v7;
  return (*(int (__cdecl **)(_DWORD, int, int, int))(v6 + 92))(*(_DWORD *)(v6 + 96), v7, v9, v5);
}
