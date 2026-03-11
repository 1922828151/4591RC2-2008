/*
 * func-name: sub_10020400
 * func-address: 0x10020400
 * callers: 0x1001ee70
 * callees: none
 */

int __stdcall sub_10020400(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  _DWORD *v8; // esi
  _DWORD *v9; // eax

  v8 = (_DWORD *)(*(int (__thiscall **)(int *))(a2 + 16))(&a2);
  v9 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)(a1 + 76) + 16))(a1 + 76);
  *v9 = *v8;
  v9[1] = v8[1];
  v9[2] = v8[2];
  v9[3] = v8[3];
  return -1;
}
