/*
 * func-name: ??4Task@Utility@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x100028b0
 * callers: none
 * callees: 0x100067f0
 */

_DWORD *__thiscall Outpop::Utility::Task::operator=(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // ecx

  this[1] = a2[1];
  this[2] = a2[2];
  v3 = this + 3;
  if ( v3 != a2 + 3 )
    sub_100067F0(v3, a2 + 3);
  this[13] = a2[13];
  this[14] = a2[14];
  this[15] = a2[15];
  this[16] = a2[16];
  this[17] = a2[17];
  this[18] = a2[18];
  return this;
}
