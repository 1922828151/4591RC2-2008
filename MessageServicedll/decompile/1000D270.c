/*
 * func-name: ?set_defaule_type_handler@Message_Facade@Message@Outpop@@SAXAAVMessage_Handler@23@AAVApp_Request_Handler@23@AAVApp_Asynch_Ack_Handler@23@AAVApp_Asynch_Group_Ack_Handler@23@W4EDispatchType@Utility@3@PAVDispatch_Thread@93@@Z
 * func-address: 0x1000d270
 * callers: none
 * callees: 0x10006c90
 */

int __cdecl Outpop::Message::Message_Facade::set_defaule_type_handler(int a1, int a2, int a3, int a4, int a5, int a6)
{
  if ( a6 )
    return Outpop::Message::Context::set_defaule_type_handler(
             Outpop::Message::Message_Facade::g_c_,
             a1,
             a2,
             a3,
             a4,
             a5,
             a6);
  else
    return Outpop::Message::Context::set_defaule_type_handler(
             Outpop::Message::Message_Facade::g_c_,
             a1,
             a2,
             a3,
             a4,
             a5,
             *((_DWORD *)Outpop::Message::Message_Facade::g_c_ + 15));
}
