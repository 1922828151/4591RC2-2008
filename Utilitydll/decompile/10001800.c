/*
 * func-name: ??FTime_Value@Utility@Outpop@@QAEAAV012@XZ
 * func-address: 0x10001800
 * callers: none
 * callees: 0x100018c0
 */

int __thiscall Outpop::Utility::Time_Value::operator--(Outpop::Utility::Time_Value *this)
{
  int v1; // ecx

  --*((_DWORD *)this + 1);
  Outpop::Utility::Time_Value::normalize(this);
  return v1;
}
