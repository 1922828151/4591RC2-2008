/*
 * func-name: sub_102ABDA0
 * func-address: 0x102abda0
 * callers: 0x1000be9c
 * callees: none
 */

_DWORD *__thiscall sub_102ABDA0(_DWORD *this)
{
  *this = &Ping_Manager::`vftable';
  this[3] = 0;
  Outpop::Utility::Lock::Lock((Outpop::Utility::Lock *)(this + 4));
  Outpop::Message::Message_Facade::register_asynch_message_handler(9, 9001, this, 0, 0);
  this[1] = -1;
  this[2] = 3;
  return this;
}
