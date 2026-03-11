/*
 * func-name: ??4ActorInstancer@@QAEAAV0@ABV0@@Z
 * func-address: 0x10054ba0
 * callers: none
 * callees: 0x1002dd40
 */

_BYTE *__thiscall ActorInstancer::operator=(_BYTE *this, int a2)
{
  Actor::operator=((int)this, a2);
  this[1052] = *(_BYTE *)(a2 + 1052);
  this[1053] = *(_BYTE *)(a2 + 1053);
  std::string::operator=(this + 1056, a2 + 1056);
  std::string::operator=(this + 1084, a2 + 1084);
  return this;
}
