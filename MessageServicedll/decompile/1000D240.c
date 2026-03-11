/*
 * func-name: ?set_default_message_handler@Message_Facade@Message@Outpop@@SAXAAVMessage_Handler@23@W4EDispatchType@Utility@3@PAVDispatch_Thread@63@@Z
 * func-address: 0x1000d240
 * callers: none
 * callees: none
 */

_DWORD *__cdecl Outpop::Message::Message_Facade::set_default_message_handler(int a1, int a2, int a3)
{
  int v3; // ecx
  _DWORD *result; // eax

  v3 = a3;
  if ( !a3 )
    v3 = *((_DWORD *)Outpop::Message::Message_Facade::g_c_ + 15);
  result = (_DWORD *)*((_DWORD *)Outpop::Message::Message_Facade::g_c_ + 12);
  result[14] = a1;
  result[15] = v3;
  result[16] = a2;
  return result;
}
