/*
 * func-name: ??0Asynch_Ack_Handler@Message@Outpop@@QAE@AAVRequest_Ack@12@AAVApp_Asynch_Ack_Handler@12@W4EDispatchType@Utility@2@PAVDispatch_Thread@62@@Z
 * func-address: 0x10023f00
 * callers: 0x10026fb0
 * callees: none
 */

_DWORD *__thiscall Outpop::Message::Asynch_Ack_Handler::Asynch_Ack_Handler(
        _DWORD *this,
        int a2,
        int a3,
        int a4,
        int a5)
{
  _DWORD *result; // eax

  result = this;
  *this = &Outpop::Message::Message_Handler::`vftable';
  this[1] = a2;
  this[2] = a3;
  *this = &Outpop::Message::Asynch_Ack_Handler::`vftable';
  this[3] = a4;
  this[4] = a5;
  return result;
}
