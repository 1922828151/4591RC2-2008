/*
 * func-name: sub_10013020
 * func-address: 0x10013020
 * callers: 0x100134a0
 * callees: none
 */

int __cdecl sub_10013020(_BYTE *a1, _BYTE *a2, _BYTE *a3, _BYTE *a4, int a5)
{
  int result; // eax

  *a1 = (*(int (__thiscall **)(int))(*(_DWORD *)a5 + 4))(a5);
  *a2 = (*(int (__thiscall **)(int))(*(_DWORD *)a5 + 4))(a5);
  *a3 = (*(int (__thiscall **)(int))(*(_DWORD *)a5 + 4))(a5);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)a5 + 4))(a5);
  *a4 = result;
  return result;
}
