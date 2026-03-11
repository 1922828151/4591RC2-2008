/*
 * func-name: ?set@Time_Value@Utility@Outpop@@QAEXABU_FILETIME@@@Z
 * func-address: 0x10001810
 * callers: none
 * callees: 0x100018c0, 0x10019760, 0x100197d0
 */

void __thiscall Outpop::Utility::Time_Value::set(Outpop::Utility::Time_Value *this, const struct _FILETIME *a2)
{
  unsigned __int64 v2; // [esp-10h] [ebp-20h]

  v2 = *(_QWORD *)a2 - 116444736000000000LL;
  *(_DWORD *)this = v2 / 0x989680;
  *((_DWORD *)this + 1) = v2 % 0x989680 / 0xA;
  Outpop::Utility::Time_Value::normalize(this);
}
