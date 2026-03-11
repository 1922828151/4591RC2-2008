/*
 * func-name: ??YTime_Value@Utility@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x100016f0
 * callers: none
 * callees: 0x100018c0
 */

int __thiscall Outpop::Utility::Time_Value::operator+=(Outpop::Utility::Time_Value *this, _DWORD *a2)
{
  int v2; // ecx

  *(_DWORD *)this += *a2;
  *((_DWORD *)this + 1) += a2[1];
  Outpop::Utility::Time_Value::normalize(this);
  return v2;
}
