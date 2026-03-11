/*
 * func-name: ??0Time_Value@Utility@Outpop@@QAE@ABUtimespec@12@@Z
 * func-address: 0x100013c0
 * callers: none
 * callees: 0x100018c0
 */

int __thiscall Outpop::Utility::Time_Value::Time_Value(
        Outpop::Utility::Time_Value *this,
        const struct Outpop::Utility::timespec *a2)
{
  int v2; // ecx

  *(_DWORD *)this = *(_DWORD *)a2;
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 2) / 1000;
  Outpop::Utility::Time_Value::normalize(this);
  return v2;
}
