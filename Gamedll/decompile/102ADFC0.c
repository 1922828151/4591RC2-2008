/*
 * func-name: sub_102ADFC0
 * func-address: 0x102adfc0
 * callers: 0x10005bf0
 * callees: 0x102c9d50
 */

_DWORD *__thiscall sub_102ADFC0(_DWORD *this, char a2)
{
  *this = &GameDefaultGroupAckHandler::`vftable';
  *this = Outpop::Message::App_Asynch_Group_Ack_Handler::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
