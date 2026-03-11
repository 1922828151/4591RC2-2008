/*
 * func-name: ?OnEnd@GMKickResObserver@GameClient@@UAEXAAVEvent@@@Z_0
 * func-address: 0x101f4e70
 * callers: 0x10006866
 * callees: 0x10001181, 0x10003bf2, 0x10017fe9, 0x1001a159, 0x102c9d62, 0x102ca0a0
 */

void __thiscall GameClient::GMKickResObserver::OnEnd(GameClient::GMKickResObserver *this, struct Event *a2)
{
  Outpop::Message::Message *v2; // ecx
  Outpop::Message::Message *v3; // ecx
  _BYTE *v4; // ecx
  const char *v5; // [esp-4h] [ebp-10084h]
  bool v6; // [esp+13h] [ebp-1006Dh]
  Outpop::Utility::Ref_Object *v7; // [esp+14h] [ebp-1006Ch] BYREF
  _BYTE v8[4]; // [esp+18h] [ebp-10068h] BYREF
  _BYTE v9[28]; // [esp+1Ch] [ebp-10064h] BYREF
  _BYTE v10[28]; // [esp+38h] [ebp-10048h] BYREF
  char v11[28]; // [esp+54h] [ebp-1002Ch] BYREF
  char Buffer[65536]; // [esp+70h] [ebp-10010h] BYREF
  int v13; // [esp+1007Ch] [ebp-4h]

  v2 = *(Outpop::Message::Message **)Event::GetRequestMessage(a2, &v7);
  v13 = 0;
  Outpop::Message::Message::reset_to_data(v2);
  v13 = -1;
  if ( v7 )
    Outpop::Utility::Ref_Object::release(v7);
  std::string::string(v11);
  v13 = 1;
  Event::GetRequestMessage(a2, &v7);
  LOBYTE(v13) = 2;
  sub_10001181((int)v8);
  sub_10017FE9((int)v11);
  LOBYTE(v13) = 1;
  if ( v7 )
    Outpop::Utility::Ref_Object::release(v7);
  v3 = *(Outpop::Message::Message **)Event::GetAckMessage(a2, &v7);
  LOBYTE(v13) = 3;
  v6 = Outpop::Message::Message::get_result(v3) != 0;
  LOBYTE(v13) = 1;
  if ( v7 )
    Outpop::Utility::Ref_Object::release(v7);
  v5 = (const char *)std::string::c_str(v11);
  if ( v6 )
  {
    sprintf(Buffer, "Kick %s Failed!", v5);
    std::string::string(v9, Buffer);
    LOBYTE(v13) = 4;
    std::string::string(v10, &unk_103174C5);
    LOBYTE(v13) = 5;
    GameClient::ChatManager::Instance();
    GameClient::ChatManager::AddMessage(0, (int)v10, (int)v9);
    LOBYTE(v13) = 4;
    std::string::~string(v10);
    v4 = v9;
  }
  else
  {
    sprintf(Buffer, "Kick %s Success!", v5);
    std::string::string(v10, Buffer);
    LOBYTE(v13) = 6;
    std::string::string(v9, &unk_103174C6);
    LOBYTE(v13) = 7;
    GameClient::ChatManager::Instance();
    GameClient::ChatManager::AddMessage(0, (int)v9, (int)v10);
    LOBYTE(v13) = 6;
    std::string::~string(v9);
    v4 = v10;
  }
  LOBYTE(v13) = 1;
  std::string::~string(v4);
  v13 = -1;
  std::string::~string(v11);
}
