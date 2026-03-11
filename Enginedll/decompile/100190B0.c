/*
 * func-name: ?SetTimeStamp@Event@@QAEXM@Z
 * func-address: 0x100190b0
 * callers: none
 * callees: none
 */

void __thiscall Event::SetTimeStamp(Event *this, float a2)
{
  *((float *)this + 2) = a2;
}
