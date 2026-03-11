/*
 * func-name: ??BTime_Value@Utility@Outpop@@QBE?AUtimespec@12@XZ
 * func-address: 0x100018a0
 * callers: none
 * callees: none
 */

_DWORD *__thiscall Outpop::Utility::Time_Value::operator Outpop::Utility::timespec(int *this, _DWORD *a2)
{
  __int64 v2; // rax

  v2 = *this;
  *a2 = v2;
  a2[2] = 1000 * this[1];
  a2[1] = HIDWORD(v2);
  return a2;
}
