/*
 * func-name: ?set@Time_Value@Utility@Outpop@@QAEXABUtimeval@@@Z
 * func-address: 0x10001470
 * callers: none
 * callees: 0x100018c0
 */

void __thiscall Outpop::Utility::Time_Value::set(Outpop::Utility::Time_Value *this, const struct timeval *a2)
{
  *(struct timeval *)this = *a2;
  Outpop::Utility::Time_Value::normalize(this);
}
