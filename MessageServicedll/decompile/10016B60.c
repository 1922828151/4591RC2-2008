/*
 * func-name: sub_10016B60
 * func-address: 0x10016b60
 * callers: none
 * callees: 0x10016af0, 0x100294f2
 */

Outpop::Utility::Thread_Message *__thiscall sub_10016B60(Outpop::Utility::Thread_Message *this, char a2)
{
  sub_10016AF0(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
