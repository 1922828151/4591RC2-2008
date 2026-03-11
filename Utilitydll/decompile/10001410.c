/*
 * func-name: ?set@Time_Value@Utility@Outpop@@QAEXJJ@Z
 * func-address: 0x10001410
 * callers: none
 * callees: 0x100018c0
 */

void __thiscall Outpop::Utility::Time_Value::set(Outpop::Utility::Time_Value *this, int a2, int a3)
{
  *(_DWORD *)this = a2;
  *((_DWORD *)this + 1) = a3;
  Outpop::Utility::Time_Value::normalize(this);
}
