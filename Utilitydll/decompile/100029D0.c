/*
 * func-name: ??4Manual_Event@Utility@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x100029d0
 * callers: none
 * callees: none
 */

_DWORD *__thiscall Outpop::Utility::Manual_Event::operator=(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax

  result = this;
  *this = *a2;
  this[1] = a2[1];
  this[2] = a2[2];
  return result;
}
