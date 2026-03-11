/*
 * func-name: ?RequestChangeLeader@GroupManager@GameClient@@QAEXPAVLocalCharacter@2@K@Z_0
 * func-address: 0x101f8760
 * callers: 0x10017963
 * callees: 0x10001b04, 0x100020c2, 0x10004665, 0x1001116c
 */

void __thiscall GameClient::GroupManager::RequestChangeLeader(
        GameClient::GroupManager *this,
        struct GameClient::LocalCharacter *a2,
        unsigned int a3)
{
  struct GameClient::LocalCharacter *v3; // esi
  struct GameClient::LocalCharacter *v4; // [esp-4h] [ebp-24h] BYREF
  _DWORD v5[2]; // [esp+Ch] [ebp-14h] BYREF
  int v6; // [esp+1Ch] [ebp-4h]

  v3 = a2;
  if ( a2
    && *((_DWORD *)a2 + 54)
    && *((_DWORD *)GameClient::GroupManager::GetGroup(this, *((_DWORD *)a2 + 54)) + 2) == *((_DWORD *)v3 + 1) )
  {
    GameClient::GroupManager::CreateMessage((int)&a2);
    v6 = 0;
    Outpop::Message::Message::set_protocol_type(a2, 0x5218u);
    v5[0] = *((_DWORD *)v3 + 54);
    sub_10001B04((int)v5);
    sub_10001B04((int)&a3);
    v4 = a2;
    v5[1] = &v4;
    if ( a2 )
      Outpop::Utility::Ref_Object::addref(a2);
    GameClient::GroupManager::SendMessageA((int)v3, (int)v4);
    v6 = -1;
    if ( a2 )
      Outpop::Utility::Ref_Object::release(a2);
  }
}
