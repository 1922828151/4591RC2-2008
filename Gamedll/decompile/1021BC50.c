/*
 * func-name: sub_1021BC50
 * func-address: 0x1021bc50
 * callers: 0x1000cec8
 * callees: 0x100016fe, 0x100052b8, 0x1000e56b, 0x1000f259, 0x10010a32, 0x10019b46, 0x102c9d62
 */

void __stdcall sub_1021BC50(int a1)
{
  Outpop::Message::Message *v1; // ecx
  bool v2; // bl
  Outpop::Message::Message *v3; // ecx
  unsigned __int16 result; // ax
  Outpop::Message::Message **RequestMessage; // eax
  GameClient::LocalUserManager *v6; // esi
  Outpop::Message::Message *v7; // ecx
  unsigned int multi_id; // eax
  struct GameClient::LocalUser *User; // esi
  const char *host_addr; // eax
  int v11; // [esp-40h] [ebp-98h]
  unsigned int v12; // [esp-40h] [ebp-98h]
  int v13; // [esp-3Ch] [ebp-94h]
  int v14; // [esp-38h] [ebp-90h]
  int v15; // [esp-30h] [ebp-88h]
  int v16; // [esp-4h] [ebp-5Ch]
  Outpop::Utility::Ref_Object *v17; // [esp+14h] [ebp-44h] BYREF
  Outpop::Utility::Ref_Object *v18; // [esp+18h] [ebp-40h] BYREF
  unsigned int v19; // [esp+1Ch] [ebp-3Ch] BYREF
  unsigned __int16 v20; // [esp+20h] [ebp-38h] BYREF
  int v21; // [esp+24h] [ebp-34h] BYREF
  int v22; // [esp+28h] [ebp-30h] BYREF
  _BYTE v23[12]; // [esp+2Ch] [ebp-2Ch] BYREF
  u_short netshort[8]; // [esp+38h] [ebp-20h]
  int v25; // [esp+54h] [ebp-4h]

  v1 = *(Outpop::Message::Message **)Event::GetAckMessage(a1, &v17);
  v25 = 0;
  v2 = Outpop::Message::Message::get_result(v1) != 0;
  v25 = -1;
  if ( v17 )
    Outpop::Utility::Ref_Object::release(v17);
  if ( v2 )
  {
    v3 = *(Outpop::Message::Message **)Event::GetAckMessage(a1, &v17);
    v25 = 1;
    result = Outpop::Message::Message::get_result(v3);
    LogPrintf("Apply into game is failed. Error code: %d", result);
    v25 = -1;
    if ( v17 )
      Outpop::Utility::Ref_Object::release(v17);
  }
  else
  {
    LogPrintf("Apply into game is success.");
    Event::GetAckMessage(a1, &v17);
    v25 = 2;
    sub_1000F259((int)&v21);
    sub_1000F259((int)&v19);
    sub_100052B8((int)&v20);
    sub_1000F259((int)&v22);
    v25 = -1;
    if ( v17 )
      Outpop::Utility::Ref_Object::release(v17);
    RequestMessage = (Outpop::Message::Message **)Event::GetRequestMessage(a1, &v17);
    v6 = GameClient::LocalUserManager::s_pInstance;
    v7 = *RequestMessage;
    v25 = 3;
    multi_id = Outpop::Message::Message::get_multi_id(v7);
    User = GameClient::LocalUserManager::GetUser(v6, multi_id);
    v25 = -1;
    if ( v17 )
      Outpop::Utility::Ref_Object::release(v17);
    if ( User )
    {
      sub_10019B46(v22);
      Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)v23, v20, v19);
      v25 = 4;
      v16 = ntohs(netshort[1]);
      host_addr = Outpop::IONetwork::INET_Addr::get_host_addr((Outpop::IONetwork::INET_Addr *)v23);
      LogPrintf("start connect GameServer. IP: %s, Port: %d", host_addr, v16);
      v18 = 0;
      v15 = v21;
      v14 = *((_DWORD *)User + 18);
      v11 = *((_DWORD *)User + 1);
      LOBYTE(v25) = 5;
      sub_1000E56B(v11, (int)v23);
      sub_100016FE(v12, v13, v14, 9, v15, 19, (int)&v18, 0, 0, 0, 0xFFFF, 0xFFFF, 0xFFFF, 10000, 0, 5);
      LOBYTE(v25) = 4;
      if ( v18 )
        Outpop::Utility::Ref_Object::release(v18);
      v25 = -1;
      Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)v23);
    }
  }
}
