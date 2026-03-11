/*
 * func-name: sub_1006F000
 * func-address: 0x1006f000
 * callers: 0x10068320
 * callees: 0x1006cf90, 0x1006d1b0
 */

int __thiscall sub_1006F000(_DWORD *this, int a2)
{
  int v3; // edi
  char *v4; // ebx
  int result; // eax

  v3 = this[1];
  v4 = sub_1006D1B0(v3, *(_DWORD *)(v3 + 4), a2);
  result = sub_1006CF90(this, 1u);
  *(_DWORD *)(v3 + 4) = v4;
  **((_DWORD **)v4 + 1) = v4;
  return result;
}
