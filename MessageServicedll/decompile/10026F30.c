/*
 * func-name: ?create_request_handler@Request_Ack@Message@Outpop@@QAEPAVRequest_Handler@23@AAVApp_Request_Handler@23@W4EDispatchType@Utility@3@PAVDispatch_Thread@73@@Z
 * func-address: 0x10026f30
 * callers: 0x1000cf80, 0x10016b80
 * callees: 0x10023be0, 0x100295c0
 */

_DWORD *__thiscall Outpop::Message::Request_Ack::create_request_handler(void *this, int a2, int a3, int a4)
{
  _DWORD *v5; // eax

  v5 = operator new(0x14u);
  if ( v5 )
    return Outpop::Message::Request_Handler::Request_Handler(v5, (int)this, a2, a3, a4);
  else
    return 0;
}
