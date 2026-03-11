/*
 * func-name: ?RequestRemoveMember@GroupManager@GameClient@@QAEXPAVLocalCharacter@2@K@Z_0
 * func-address: 0x101f8690
 * callers: 0x10003e27
 * callees: 0x10001b04, 0x100020c2, 0x10004665, 0x1001116c
 */

void __thiscall GameClient::GroupManager::RequestRemoveMember(
        GameClient::GroupManager *this,
        struct GameClient::LocalCharacter *a2,
        unsigned int a3)
{
  struct GameClient::LocalCharacter *v3; // edi
  int v4[5]; // [esp-4h] [ebp-20h] BYREF
  int v5; // [esp+18h] [ebp-4h]

  v3 = a2;
  if ( a2
    && *((_DWORD *)a2 + 54)
    && *((_DWORD *)GameClient::GroupManager::GetGroup(this, *((_DWORD *)a2 + 54)) + 2) == *((_DWORD *)v3 + 1) )
  {
    GameClient::GroupManager::CreateMessage((int)&a2);
    v5 = 0;
    Outpop::Message::Message::set_protocol_type(a2, 0x521Fu);
    sub_10001B04((int)&a3);
    v4[0] = (int)a2;
    v4[4] = (int)v4;
    if ( a2 )
      Outpop::Utility::Ref_Object::addref(a2);
    GameClient::GroupManager::SendMessageA((int)v3, v4[0]);
    v5 = -1;
    if ( a2 )
      Outpop::Utility::Ref_Object::release(a2);
  }
}
