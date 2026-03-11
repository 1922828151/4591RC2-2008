/*
 * func-name: ?init@Message_Facade@Message@Outpop@@SAXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAVConfig_Paser@Utility@3@AAVMessage_Service_Handler@23@PAVValidate_Handler@23@PAVFirst_Message_Handler@23@W4EDispatchType@73@PAVDispatch_Thread@73@@Z
 * func-address: 0x1000c3b0
 * callers: none
 * callees: 0x10001550, 0x100052a0, 0x100295c0
 */

void *__cdecl Outpop::Message::Message_Facade::init(
        int a1,
        struct Outpop::Utility::Config_Paser *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  Outpop::Utility::Timer_Queue *v7; // eax
  struct Outpop::Message::Request_Ack **v8; // eax
  Outpop::Message::Context *v9; // eax
  _DWORD *v10; // eax
  Outpop::IONetwork::Network_Init *v11; // eax
  char v13; // [esp+9h] [ebp-1Dh] BYREF
  struct Outpop::Message::Request_Ack **v14; // [esp+Ah] [ebp-1Ch]
  _DWORD v15[3]; // [esp+Eh] [ebp-18h] BYREF
  int v16; // [esp+22h] [ebp-4h]

  Outpop::Utility::Singleton_Manager::init();
  Outpop::IONetwork::socket_init((Outpop::IONetwork *)2, 2);
  v7 = (Outpop::Utility::Timer_Queue *)Outpop::Utility::Timer_Queue::instance();
  Outpop::Utility::Timer_Queue::start(v7);
  v8 = (struct Outpop::Message::Request_Ack **)operator new(0x84u);
  v14 = v8;
  v16 = 0;
  if ( v8 )
    v9 = Outpop::Message::Context::Context(v8);
  else
    v9 = 0;
  v16 = -1;
  Outpop::Message::Message_Facade::g_c_ = v9;
  v10 = (_DWORD *)*((_DWORD *)v9 + 12);
  v10[11] = a3;
  v10[12] = a7;
  v10[13] = a6;
  *(_DWORD *)(*((_DWORD *)Outpop::Message::Message_Facade::g_c_ + 9) + 128) = a5;
  *(_DWORD *)(*((_DWORD *)Outpop::Message::Message_Facade::g_c_ + 7) + 44) = a4;
  Outpop::Message::Message_Config_Paser::Message_Config_Paser(
    (Outpop::Message::Message_Config_Paser *)v15,
    Outpop::Message::Message_Facade::g_c_,
    a2);
  v16 = 1;
  Outpop::Utility::Config::Config((Outpop::Utility::Config *)&v13);
  LOBYTE(v16) = 2;
  Outpop::Utility::Config::load_config(&v13, a1, v15);
  v11 = (Outpop::IONetwork::Network_Init *)Outpop::IONetwork::Network_Init::instance();
  Outpop::IONetwork::Network_Init::init(v11);
  LOBYTE(v16) = 1;
  Outpop::Utility::Config::~Config((Outpop::Utility::Config *)&v13);
  return Outpop::Utility::Config_Paser::`vftable';
}
