/*
 * func-name: ?GetTimeStamp@Event@@QBEMXZ
 * func-address: 0x10016a60
 * callers: none
 * callees: none
 */

double __thiscall Event::GetTimeStamp(Event *this)
{
  return *((float *)this + 2);
}
