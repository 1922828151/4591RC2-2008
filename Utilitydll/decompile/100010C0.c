/*
 * func-name: ??0Date_Time@Utility@Outpop@@QAE@XZ
 * func-address: 0x100010c0
 * callers: none
 * callees: 0x100011c0, 0x10001940
 */

Outpop::Utility::Date_Time *__thiscall Outpop::Utility::Date_Time::Date_Time(Outpop::Utility::Date_Time *this)
{
  const struct Outpop::Utility::Time_Value *v2; // eax
  _BYTE v4[8]; // [esp+8h] [ebp-8h] BYREF

  v2 = (const struct Outpop::Utility::Time_Value *)Outpop::Utility::Time_Value::gettimeofday(v4);
  Outpop::Utility::Date_Time::update(this, v2);
  return this;
}
