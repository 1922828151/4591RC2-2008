/*
 * func-name: sub_10015510
 * func-address: 0x10015510
 * callers: 0x1001ff20
 * callees: none
 */

bool __thiscall sub_10015510(int *this)
{
  int v1; // edx
  int v2; // eax
  bool result; // al
  int v4; // ecx

  v1 = *this;
  v2 = this[1];
  result = *this == v2 || (v4 = this[2], v2 == v4) || v4 == v1;
  return result;
}
