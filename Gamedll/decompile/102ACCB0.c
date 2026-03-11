/*
 * func-name: sub_102ACCB0
 * func-address: 0x102accb0
 * callers: 0x10015816
 * callees: none
 */

int __thiscall sub_102ACCB0(_DWORD *this, int a2, Outpop::Utility::Stream_Base **a3)
{
  this[55] += Outpop::Utility::Stream_Base::get_readable(*a3);
  ++this[56];
  return Outpop::Message::Message_Facade::cache_send_message(a2, a3);
}
