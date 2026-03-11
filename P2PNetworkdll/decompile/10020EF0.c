/*
 * func-name: sub_10020EF0
 * func-address: 0x10020ef0
 * callers: 0x10020e70
 * callees: 0x10020f30
 */

int __cdecl sub_10020EF0(int a1, int a2, int a3, int a4)
{
  int v4; // ebx
  int v5; // esi
  int v6; // edi
  int v7; // eax

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = (**(int (__cdecl ***)(_DWORD, int, int, int *))(a1 + 120))(*(_DWORD *)(a1 + 120), a2, a3, &a1);
  return sub_10020F30(v5, *(_DWORD *)(v5 + 120), v4, v6, v7, a1, a4);
}
