/*
 * func-name: sub_102ADF50
 * func-address: 0x102adf50
 * callers: 0x10004c14
 * callees: 0x102c9d50
 */

_DWORD *__thiscall sub_102ADF50(_DWORD *this, char a2)
{
  *this = &GameDefaultAckHandler::`vftable';
  *this = Outpop::Message::App_Asynch_Ack_Handler::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
