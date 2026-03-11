/*
 * func-name: sub_1005FC50
 * func-address: 0x1005fc50
 * callers: none
 * callees: none
 */

int __thiscall sub_1005FC50(_DWORD *this, unsigned __int16 a2)
{
  int result; // eax

  result = 44 * a2;
  *(_DWORD *)(result + this[5] + 8) = 0;
  return result;
}
