/*
 * func-name: ?msec@Time_Value@Utility@Outpop@@QAEXK@Z
 * func-address: 0x100014f0
 * callers: none
 * callees: none
 */

void __thiscall Outpop::Utility::Time_Value::msec(Outpop::Utility::Time_Value *this, unsigned int a2)
{
  *(_DWORD *)this = a2 / 0x3E8;
  *((_DWORD *)this + 1) = 1000 * (a2 % 0x3E8);
}
