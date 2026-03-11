/*
 * func-name: ?register_asynch_ack@Message_Facade@Message@Outpop@@SAXEGAAVApp_Asynch_Ack_Handler@23@W4EDispatchType@Utility@3@PAVDispatch_Thread@63@@Z
 * func-address: 0x1000d000
 * callers: none
 * callees: 0x1001fd80, 0x10026fb0
 */

int __cdecl Outpop::Message::Message_Facade::register_asynch_ack(
        unsigned __int8 a1,
        unsigned __int16 a2,
        int a3,
        int a4,
        int a5)
{
  int v5; // esi
  int asynch_ack_handler; // eax
  _BYTE v8[12]; // [esp+Ch] [ebp-1Ch] BYREF
  _DWORD v9[4]; // [esp+18h] [ebp-10h] BYREF

  v5 = *((_DWORD *)Outpop::Message::Message_Facade::g_c_ + 12);
  if ( a5 )
    asynch_ack_handler = Outpop::Message::Request_Ack::create_asynch_ack_handler(a3, a4, a5);
  else
    asynch_ack_handler = Outpop::Message::Request_Ack::create_asynch_ack_handler(
                           a3,
                           a4,
                           *((_DWORD *)Outpop::Message::Message_Facade::g_c_ + 15));
  v9[3] = asynch_ack_handler;
  v9[0] = a2 + (a1 << 16);
  v9[1] = 0;
  v9[2] = 0;
  return sub_1001FD80(v5 + 4, v8, v9);
}
