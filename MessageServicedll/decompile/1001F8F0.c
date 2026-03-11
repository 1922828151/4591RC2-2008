/*
 * func-name: ?set_message_service_handler@Handler_Manager@Message@Outpop@@QAEXAAVMessage_Service_Handler@23@W4EDispatchType@Utility@3@PAVDispatch_Thread@63@@Z
 * func-address: 0x1001f8f0
 * callers: none
 * callees: none
 */

int __thiscall Outpop::Message::Handler_Manager::set_message_service_handler(_DWORD *this, int a2, int a3, int a4)
{
  int result; // eax

  this[11] = a2;
  result = a4;
  this[13] = a3;
  this[12] = a4;
  return result;
}
