/*
 * func-name: sub_1004A370
 * func-address: 0x1004a370
 * callers: 0x1004a540
 * callees: 0x10025d80, 0x1004a3a0
 */

int __thiscall sub_1004A370(_DWORD *this, int a2, int a3, int a4)
{
  _DWORD *v4; // esi
  int result; // eax

  v4 = sub_10025D80(this, a4, *(_DWORD *)(a4 + 4));
  result = sub_1004A3A0(1, a2);
  *(_DWORD *)(a4 + 4) = v4;
  *(_DWORD *)v4[1] = v4;
  return result;
}
