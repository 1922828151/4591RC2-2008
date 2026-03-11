/*
 * func-name: ??FTime_Value@Utility@Outpop@@QAE?AV012@H@Z
 * func-address: 0x100017d0
 * callers: none
 * callees: 0x100018c0
 */

_DWORD *__thiscall Outpop::Utility::Time_Value::operator--(Outpop::Utility::Time_Value *this, _DWORD *a2, int a3)
{
  int v3; // edx

  v3 = *((_DWORD *)this + 1);
  *a2 = *(_DWORD *)this;
  a2[1] = v3;
  *((_DWORD *)this + 1) = v3 - 1;
  Outpop::Utility::Time_Value::normalize(this);
  return a2;
}
