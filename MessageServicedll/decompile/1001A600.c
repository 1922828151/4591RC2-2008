/*
 * func-name: sub_1001A600
 * func-address: 0x1001a600
 * callers: none
 * callees: 0x100294f2
 */

_DWORD *__thiscall sub_1001A600(_DWORD *this, char a2)
{
  *this = &Outpop::Message::Synch_Group_Ack_Handler::`vftable';
  *this = &Outpop::Message::Message_Handler::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
