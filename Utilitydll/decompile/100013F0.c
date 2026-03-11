/*
 * func-name: ??BTime_Value@Utility@Outpop@@QBE?AUtimeval@@XZ
 * func-address: 0x100013f0
 * callers: none
 * callees: none
 */

_DWORD *__thiscall Outpop::Utility::Time_Value::operator timeval(int *this, _DWORD *a2)
{
  int v2; // edx
  _DWORD *result; // eax
  int v4; // ecx

  v2 = *this;
  result = a2;
  v4 = this[1];
  *a2 = v2;
  a2[1] = v4;
  return result;
}
