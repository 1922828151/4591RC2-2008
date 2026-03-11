/*
 * func-name: ?set@Time_Value@Utility@Outpop@@QAEX_J@Z
 * func-address: 0x10001010
 * callers: none
 * callees: 0x100018c0, 0x10019760, 0x100197d0
 */

void __thiscall Outpop::Utility::Time_Value::set(Outpop::Utility::Time_Value *this, __int64 a2)
{
  *(_DWORD *)this = (a2 - 621356256000000000LL) / 0x989680uLL;
  *((_DWORD *)this + 1) = (a2 - 621356256000000000LL) % 0x989680uLL / 0xA;
  Outpop::Utility::Time_Value::normalize(this);
}
