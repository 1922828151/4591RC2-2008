/*
 * func-name: ??4Timer_Handler@Utility@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x10002b00
 * callers: none
 * callees: none
 */

_DWORD *__thiscall Outpop::Utility::Timer_Handler::operator=(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax

  result = this;
  if ( this != a2 )
    this[1] = 0;
  return result;
}
