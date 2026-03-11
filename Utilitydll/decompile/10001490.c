/*
 * func-name: ?set@Time_Value@Utility@Outpop@@QAEXABUtimespec@23@@Z
 * func-address: 0x10001490
 * callers: none
 * callees: 0x100018c0
 */

void __thiscall Outpop::Utility::Time_Value::set(
        Outpop::Utility::Time_Value *this,
        const struct Outpop::Utility::timespec *a2)
{
  *(_DWORD *)this = *(_DWORD *)a2;
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 2) / 1000;
  Outpop::Utility::Time_Value::normalize(this);
}
