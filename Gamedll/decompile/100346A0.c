/*
 * func-name: sub_100346A0
 * func-address: 0x100346a0
 * callers: 0x10001acd
 * callees: none
 */

_DWORD *__thiscall sub_100346A0(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax
  int v3; // edx
  int v4; // ecx

  result = a2;
  *a2 = this[1];
  v3 = this[2];
  v4 = this[3];
  a2[1] = v3;
  a2[2] = v4;
  return result;
}
