/*
 * func-name: ?RequestDismiss@GroupManager@GameClient@@QAEXPAVLocalCharacter@2@@Z_0
 * func-address: 0x101f8850
 * callers: 0x10014f6a
 * callees: 0x10001b04, 0x100020c2, 0x10004665, 0x1001116c
 */

void __thiscall GameClient::GroupManager::RequestDismiss(
        GameClient::GroupManager *this,
        struct GameClient::LocalCharacter *a2)
{
  struct GameClient::LocalCharacter *v2; // esi
  struct GameClient::LocalCharacter *v3; // [esp-4h] [ebp-24h] BYREF
  _DWORD v4[2]; // [esp+Ch] [ebp-14h] BYREF
  int v5; // [esp+1Ch] [ebp-4h]

  v2 = a2;
  if ( a2
    && *((_DWORD *)a2 + 54)
    && *((_DWORD *)GameClient::GroupManager::GetGroup(this, *((_DWORD *)a2 + 54)) + 2) == *((_DWORD *)v2 + 1) )
  {
    GameClient::GroupManager::CreateMessage((int)&a2);
    v5 = 0;
    Outpop::Message::Message::set_protocol_type(a2, 0x5217u);
    v4[0] = *((_DWORD *)v2 + 54);
    sub_10001B04((int)v4);
    v3 = a2;
    v4[1] = &v3;
    if ( a2 )
      Outpop::Utility::Ref_Object::addref(a2);
    GameClient::GroupManager::SendMessageA((int)v2, (int)v3);
    v5 = -1;
    if ( a2 )
      Outpop::Utility::Ref_Object::release(a2);
  }
}
