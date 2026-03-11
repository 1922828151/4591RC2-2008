/*
 * func-name: ?set_protocol_type@Message@1Outpop@@QAEXG@Z
 * func-address: 0x10004360
 * callers: none
 * callees: none
 */

void __thiscall Outpop::Message::Message::set_protocol_type(Outpop::Message::Message *this, unsigned __int16 a2)
{
  unsigned __int16 v2; // ax

  v2 = *((_WORD *)this + 48) >> 12;
  if ( v2 )
    *(_WORD *)(v2 + *((_DWORD *)this + 25)) = a2;
}
