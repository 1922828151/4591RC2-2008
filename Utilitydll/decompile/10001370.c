/*
 * func-name: ??0Time_Value@Utility@Outpop@@QAE@ABU_FILETIME@@@Z
 * func-address: 0x10001370
 * callers: none
 * callees: 0x100018c0, 0x10019760, 0x100197d0
 */

Outpop::Utility::Time_Value *__thiscall Outpop::Utility::Time_Value::Time_Value(
        Outpop::Utility::Time_Value *this,
        const struct _FILETIME *a2)
{
  unsigned __int64 v4; // [esp-10h] [ebp-20h]

  v4 = *(_QWORD *)a2 - 116444736000000000LL;
  *(_DWORD *)this = v4 / 0x989680;
  *((_DWORD *)this + 1) = v4 % 0x989680 / 0xA;
  Outpop::Utility::Time_Value::normalize(this);
  return this;
}
