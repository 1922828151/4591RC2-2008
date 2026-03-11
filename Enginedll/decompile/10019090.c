/*
 * func-name: ?GetMainID@Event@@QBEIXZ
 * func-address: 0x10019090
 * callers: none
 * callees: none
 */

unsigned int __thiscall Event::GetMainID(Event *this)
{
  return *((unsigned __int16 *)this + 3);
}
