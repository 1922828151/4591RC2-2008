/*
 * func-name: ??0Time_Value@Utility@Outpop@@QAE@XZ
 * func-address: 0x10001310
 * callers: none
 * callees: 0x100018c0
 */

int __thiscall Outpop::Utility::Time_Value::Time_Value(Outpop::Utility::Time_Value *this)
{
  int v1; // ecx

  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  Outpop::Utility::Time_Value::normalize(this);
  return v1;
}
