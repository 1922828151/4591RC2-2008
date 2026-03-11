/*
 * func-name: sub_1002DCB0
 * func-address: 0x1002dcb0
 * callers: 0x10097ea0
 * callees: 0x10011510
 */

_BYTE *__thiscall sub_1002DCB0(_BYTE *this, int a2)
{
  sub_10011510((int)this, a2);
  sub_10011510((int)(this + 16), a2 + 16);
  sub_10011510((int)(this + 32), a2 + 32);
  sub_10011510((int)(this + 48), a2 + 48);
  std::string::operator=(this + 64, a2 + 64);
  this[92] = *(_BYTE *)(a2 + 92);
  return this;
}
