/*
 * func-name: sub_1021B4B0
 * func-address: 0x1021b4b0
 * callers: 0x10009c0f
 * callees: 0x10001181, 0x100052b8, 0x100076a8, 0x1000bb36, 0x1000d364, 0x1000e56b, 0x1000f259, 0x10017fe9, 0x1001a2e9, 0x102c9d62
 */

void __stdcall sub_1021B4B0(int a1)
{
  Outpop::Message::Message *v1; // ecx
  bool v2; // bl
  Outpop::Message::Message *v3; // ecx
  unsigned __int16 result; // ax
  int v5; // edi
  Outpop::Message::Message *v6; // ecx
  int v7; // eax
  int v8; // [esp-38h] [ebp-12Ch]
  unsigned int v9; // [esp-34h] [ebp-128h]
  int v10; // [esp-2Ch] [ebp-120h]
  int v11; // [esp+4h] [ebp-F0h]
  int v12; // [esp+4h] [ebp-F0h]
  int v13; // [esp+8h] [ebp-ECh]
  int v14; // [esp+8h] [ebp-ECh]
  Outpop::Utility::Ref_Object *v15; // [esp+14h] [ebp-E0h] BYREF
  unsigned __int16 v16; // [esp+18h] [ebp-DCh] BYREF
  unsigned int v17; // [esp+1Ch] [ebp-D8h] BYREF
  Outpop::Utility::Ref_Object *v18; // [esp+20h] [ebp-D4h] BYREF
  int v19; // [esp+24h] [ebp-D0h] BYREF
  _BYTE v20[4]; // [esp+28h] [ebp-CCh] BYREF
  _BYTE v21[28]; // [esp+2Ch] [ebp-C8h] BYREF
  _BYTE v22[28]; // [esp+48h] [ebp-ACh] BYREF
  _BYTE v23[28]; // [esp+64h] [ebp-90h] BYREF
  _BYTE v24[28]; // [esp+80h] [ebp-74h] BYREF
  int v25; // [esp+9Ch] [ebp-58h] BYREF
  _BYTE v26[32]; // [esp+A0h] [ebp-54h] BYREF
  _BYTE v27[36]; // [esp+C0h] [ebp-34h] BYREF
  int v28; // [esp+F0h] [ebp-4h]

  v1 = *(Outpop::Message::Message **)Event::GetAckMessage(a1, &v15);
  v28 = 0;
  v2 = Outpop::Message::Message::get_result(v1) != 0;
  v28 = -1;
  if ( v15 )
    Outpop::Utility::Ref_Object::release(v15);
  if ( v2 )
  {
    v3 = *(Outpop::Message::Message **)Event::GetAckMessage(a1, &v15);
    v28 = 1;
    result = Outpop::Message::Message::get_result(v3);
    LogPrintf("validate failed. Error Code: %d", result);
    v28 = -1;
    if ( v15 )
      Outpop::Utility::Ref_Object::release(v15);
  }
  else
  {
    LogPrintf("validate success.");
    std::string::string(v22);
    v28 = 2;
    Event::GetAckMessage(a1, &v15);
    LOBYTE(v28) = 3;
    sub_1000F259((int)&v19);
    sub_1000F259((int)&v17);
    sub_100052B8((int)&v16);
    sub_10017FE9((int)v22);
    LOBYTE(v28) = 2;
    if ( v15 )
      Outpop::Utility::Ref_Object::release(v15);
    v5 = ++dword_103B67BC;
    std::string::string(v23);
    LOBYTE(v28) = 4;
    std::string::string(v24);
    LOBYTE(v28) = 5;
    v6 = *(Outpop::Message::Message **)Event::GetRequestMessage(a1, &v15);
    LOBYTE(v28) = 6;
    Outpop::Message::Message::reset_to_data(v6);
    LOBYTE(v28) = 5;
    if ( v15 )
      Outpop::Utility::Ref_Object::release(v15);
    Event::GetRequestMessage(a1, &v15);
    LOBYTE(v28) = 7;
    sub_10001181((int)v20);
    sub_10017FE9((int)v23);
    sub_10017FE9((int)v24);
    LOBYTE(v28) = 5;
    if ( v15 )
      Outpop::Utility::Ref_Object::release(v15);
    sub_1000D364(v11, v13);
    LOBYTE(v28) = 8;
    v25 = v5;
    std::string::operator=(v26, v23);
    std::string::operator=(v27, v22);
    GameClient::LocalUserManager::AddUser(
      GameClient::LocalUserManager::s_pInstance,
      (const struct GameClient::DESC_LOCALUSER *)&v25);
    v18 = 0;
    LOBYTE(v28) = 9;
    v7 = Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)v21, v16, v17);
    v10 = v19;
    LOBYTE(v28) = 10;
    sub_1000E56B(v7, v5);
    sub_1001A2E9(v8, v9, 9, v10, 11, (int)&v18, 0, 0, 0, 0xFFFF, 0xFFFF, 0xFFFF, 10000, 1, 5);
    LOBYTE(v28) = 9;
    Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)v21);
    LOBYTE(v28) = 8;
    if ( v18 )
      Outpop::Utility::Ref_Object::release(v18);
    LogPrintf("connect gate. IP: %d, Port: %d, UserID: %d, GateID: %d", v17, v16, v5, v19);
    LOBYTE(v28) = 5;
    sub_100076A8(v12, v14);
    LOBYTE(v28) = 4;
    std::string::~string(v24);
    LOBYTE(v28) = 2;
    std::string::~string(v23);
    v28 = -1;
    std::string::~string(v22);
  }
}
