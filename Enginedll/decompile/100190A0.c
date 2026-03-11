/*
 * func-name: ?GetSubID@Event@@QBEIXZ
 * func-address: 0x100190a0
 * callers: none
 * callees: none
 */

unsigned int __thiscall Event::GetSubID(Event *this)
{
  return *((unsigned __int16 *)this + 2);
}
