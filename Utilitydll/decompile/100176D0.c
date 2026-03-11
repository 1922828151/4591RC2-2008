/*
 * func-name: ??4Shared_Data@Utility@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x100176d0
 * callers: none
 * callees: none
 */

_DWORD *__thiscall Outpop::Utility::Shared_Data::operator=(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax

  result = this;
  if ( this != a2 )
    this[1] = 0;
  this[2] = a2[2];
  this[3] = a2[3];
  return result;
}
