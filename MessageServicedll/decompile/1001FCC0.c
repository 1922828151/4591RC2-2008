/*
 * func-name: ?set_default_message_handler@Handler_Manager@Message@Outpop@@QAEXPAVMessage_Handler@23@W4EDispatchType@Utility@3@PAVDispatch_Thread@63@@Z
 * func-address: 0x1001fcc0
 * callers: none
 * callees: none
 */

int __thiscall Outpop::Message::Handler_Manager::set_default_message_handler(_DWORD *this, int a2, int a3, int a4)
{
  int result; // eax

  this[14] = a2;
  result = a4;
  this[16] = a3;
  this[15] = a4;
  return result;
}
