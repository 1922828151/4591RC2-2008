/*
 * func-name: ??4Handler_Manager@Message@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x100040b0
 * callers: none
 * callees: 0x10008df0
 */

_DWORD *__thiscall Outpop::Message::Handler_Manager::operator=(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // ecx

  v3 = this + 1;
  if ( v3 != a2 + 1 )
    sub_10008DF0(v3, a2 + 1);
  this[11] = a2[11];
  this[12] = a2[12];
  this[13] = a2[13];
  this[14] = a2[14];
  this[15] = a2[15];
  this[16] = a2[16];
  return this;
}
