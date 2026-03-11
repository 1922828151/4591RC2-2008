/*
 * func-name: ??4Priority_Container@IONetwork@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x10009ce0
 * callers: none
 * callees: 0x1000ada0
 */

_DWORD *__thiscall Outpop::IONetwork::Priority_Container::operator=(_DWORD *this, _DWORD *a2)
{
  *this = *a2;
  this[1] = a2[1];
  this[2] = a2[2];
  this[3] = a2[3];
  this[4] = a2[4];
  this[5] = a2[5];
  sub_1000ADA0(this + 6);
  sub_1000ADA0(this + 11);
  sub_1000ADA0(this + 16);
  return this;
}
