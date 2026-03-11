/*
 * func-name: sub_10029C10
 * func-address: 0x10029c10
 * callers: 0x1002e500, 0x10030270
 * callees: 0x1000f380
 */

_BYTE *__thiscall sub_10029C10(_BYTE *this, int a2)
{
  sub_1000F380((int)this, a2);
  sub_1000F380((int)(this + 16), a2 + 16);
  sub_1000F380((int)(this + 32), a2 + 32);
  sub_1000F380((int)(this + 48), a2 + 48);
  std::string::string(this + 64, a2 + 64);
  this[92] = *(_BYTE *)(a2 + 92);
  return this;
}
