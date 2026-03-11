/*
 * func-name: ??0Date_Time@Utility@Outpop@@QAE@ABVTime_Value@12@@Z
 * func-address: 0x10001130
 * callers: none
 * callees: 0x100011c0
 */

Outpop::Utility::Date_Time *__thiscall Outpop::Utility::Date_Time::Date_Time(
        Outpop::Utility::Date_Time *this,
        const struct Outpop::Utility::Time_Value *a2)
{
  Outpop::Utility::Date_Time::update(this, a2);
  return this;
}
