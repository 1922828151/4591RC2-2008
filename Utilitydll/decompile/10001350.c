/*
 * func-name: ??0Time_Value@Utility@Outpop@@QAE@ABUtimeval@@@Z
 * func-address: 0x10001350
 * callers: none
 * callees: 0x100018c0
 */

int __thiscall Outpop::Utility::Time_Value::Time_Value(Outpop::Utility::Time_Value *this, const struct timeval *a2)
{
  int v2; // ecx

  *(struct timeval *)this = *a2;
  Outpop::Utility::Time_Value::normalize(this);
  return v2;
}
