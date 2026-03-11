/*
 * func-name: ??0Time_Value@Utility@Outpop@@QAE@JJ@Z
 * func-address: 0x10001330
 * callers: none
 * callees: 0x100018c0
 */

int __thiscall Outpop::Utility::Time_Value::Time_Value(Outpop::Utility::Time_Value *this, int a2, int a3)
{
  int v3; // ecx

  *(_DWORD *)this = a2;
  *((_DWORD *)this + 1) = a3;
  Outpop::Utility::Time_Value::normalize(this);
  return v3;
}
