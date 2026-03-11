/*
 * func-name: sub_100F5600
 * func-address: 0x100f5600
 * callers: 0x100157d5
 * callees: 0x1001816a
 */

_DWORD *__thiscall sub_100F5600(_DWORD *this, char a2)
{
  sub_1001816A(1);
  *(_BYTE *)(this[1] + this[2]++) = a2;
  return this;
}
