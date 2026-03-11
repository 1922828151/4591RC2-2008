/*
 * func-name: ?update@Date_Time@Utility@Outpop@@QAEXXZ
 * func-address: 0x10001190
 * callers: none
 * callees: 0x100011c0, 0x10001940
 */

void __thiscall Outpop::Utility::Date_Time::update(Outpop::Utility::Date_Time *this)
{
  const struct Outpop::Utility::Time_Value *v2; // eax
  _BYTE v3[8]; // [esp+8h] [ebp-8h] BYREF

  v2 = (const struct Outpop::Utility::Time_Value *)Outpop::Utility::Time_Value::gettimeofday(v3);
  Outpop::Utility::Date_Time::update(this, v2);
}
