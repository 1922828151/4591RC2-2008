/*
 * func-name: ?create_asynch_ack_handler@Request_Ack@Message@Outpop@@QAEPAVAsynch_Ack_Handler@23@AAVApp_Asynch_Ack_Handler@23@W4EDispatchType@Utility@3@PAVDispatch_Thread@73@@Z
 * func-address: 0x10026fb0
 * callers: 0x1000d000, 0x10016b80
 * callees: 0x10023f00, 0x100295c0
 */

_DWORD *__thiscall Outpop::Message::Request_Ack::create_asynch_ack_handler(void *this, int a2, int a3, int a4)
{
  _DWORD *v5; // eax

  v5 = operator new(0x14u);
  if ( v5 )
    return Outpop::Message::Asynch_Ack_Handler::Asynch_Ack_Handler(v5, (int)this, a2, a3, a4);
  else
    return 0;
}
