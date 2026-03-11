/*
 * func-name: sub_102ACC70
 * func-address: 0x102acc70
 * callers: 0x10017d23
 * callees: none
 */

int __thiscall sub_102ACC70(_DWORD *this, int a2, Outpop::Utility::Stream_Base **a3)
{
  this[47] += Outpop::Utility::Stream_Base::get_readable(*a3);
  ++this[48];
  return Outpop::Message::Message_Facade::cache_send_message(a2, a3);
}
