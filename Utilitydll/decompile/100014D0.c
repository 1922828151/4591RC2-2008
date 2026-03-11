/*
 * func-name: ?msec@Time_Value@Utility@Outpop@@QAEKXZ
 * func-address: 0x100014d0
 * callers: none
 * callees: none
 */

int __thiscall Outpop::Utility::Time_Value::msec(Outpop::Utility::Time_Value *this)
{
  return 1000 * *(_DWORD *)this + *((_DWORD *)this + 1) / 1000;
}
