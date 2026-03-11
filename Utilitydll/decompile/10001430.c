/*
 * func-name: ?set@Time_Value@Utility@Outpop@@QAEXN@Z
 * func-address: 0x10001430
 * callers: none
 * callees: 0x100018c0, 0x10019870
 */

void __thiscall Outpop::Utility::Time_Value::set(Outpop::Utility::Time_Value *this, double a2)
{
  *(_DWORD *)this = (int)a2;
  *((_DWORD *)this + 1) = (int)((a2 - (double)(int)a2) * 1000000.0 + 0.5);
  Outpop::Utility::Time_Value::normalize(this);
}
