/*
 * func-name: ??0Date_Time@Utility@Outpop@@QAE@_J@Z
 * func-address: 0x100010f0
 * callers: none
 * callees: 0x100011c0, 0x100018c0
 */

Outpop::Utility::Date_Time *__thiscall Outpop::Utility::Date_Time::Date_Time(
        Outpop::Utility::Date_Time *this,
        __int64 a2)
{
  const struct Outpop::Utility::Time_Value *v3; // ecx
  _DWORD v5[2]; // [esp+8h] [ebp-8h] BYREF

  v5[0] = a2;
  v5[1] = 0;
  Outpop::Utility::Time_Value::normalize((Outpop::Utility::Time_Value *)v5);
  Outpop::Utility::Date_Time::update(this, v3);
  return this;
}
