/*
 * func-name: sub_1000ED90
 * func-address: 0x1000ed90
 * callers: none
 * callees: none
 */

int __thiscall sub_1000ED90(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int v5; // eax
  int v6; // ecx
  int v8; // [esp-4h] [ebp-4h]

  v5 = this[7];
  v6 = this[8];
  v8 = *(unsigned __int16 *)(v5 + 162);
  *(_DWORD *)(v5 + 164) = v6;
  return (*(int (__cdecl **)(_DWORD, int, int))(v5 + 84))(*(_DWORD *)(v5 + 88), v6, v8);
}
