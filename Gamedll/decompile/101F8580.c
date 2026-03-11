/*
 * func-name: ?RequestInviteMember@GroupManager@GameClient@@QAEXPAVLocalCharacter@2@K@Z_0
 * func-address: 0x101f8580
 * callers: 0x10018ce6
 * callees: 0x10001b04, 0x10004665, 0x1000e56b, 0x10013eb7
 */

void __thiscall GameClient::GroupManager::RequestInviteMember(
        GameClient::GroupManager *this,
        struct GameClient::LocalCharacter *a2,
        unsigned int a3)
{
  struct GameClient::LocalCharacter *v3; // edi
  struct GameClient::LocalCharacter *v4; // eax
  struct GameClient::LocalCharacter *v5; // esi
  struct GameClient::LocalCharacter *v6; // ecx
  int v7; // [esp-8h] [ebp-24h]
  int v8; // [esp-4h] [ebp-20h]

  v3 = a2;
  if ( a2
    && (!*((_DWORD *)a2 + 54)
     || *((_DWORD *)GameClient::GroupManager::GetGroup(this, *((_DWORD *)a2 + 54)) + 2) == *((_DWORD *)v3 + 1)) )
  {
    v4 = (struct GameClient::LocalCharacter *)Outpop::Message::Message::operator new(0x6Cu);
    v5 = v4;
    if ( v4 )
    {
      Outpop::Message::Message::Message(v4, 1, 1, 1, 0, 512);
      *(_DWORD *)v5 = &Outpop::Message::Message::`vftable';
      v6 = v5;
    }
    else
    {
      v6 = 0;
    }
    a2 = v6;
    if ( v6 )
      Outpop::Utility::Ref_Object::addref(v6);
    Outpop::Message::Message::set_protocol_catalog(a2, 0x15u);
    Outpop::Message::Message::set_protocol_type(a2, 0x5213u);
    sub_10001B04((int)&a3);
    sub_1000E56B(*((_DWORD *)v3 + 59), (int)&a2);
    sub_10013EB7(v7, v8);
    if ( a2 )
      Outpop::Utility::Ref_Object::release(a2);
  }
}
