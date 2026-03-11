/*
 * func-name: ??4Time_Value@Utility@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x100010a0
 * callers: none
 * callees: none
 */

_DWORD *__thiscall Outpop::Utility::Time_Value::operator=(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax

  result = this;
  *this = *a2;
  this[1] = a2[1];
  return result;
}
