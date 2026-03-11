/*
 * func-name: ?OnBegin@InviteObserver@GameClient@@UAEXAAVEvent@@@Z_0
 * func-address: 0x101fa110
 * callers: 0x10008c74
 * callees: 0x10002f31, 0x1000f6f0, 0x10017c29, 0x10017fe9, 0x102c9d62
 */

void __thiscall GameClient::InviteObserver::OnBegin(GameClient::InviteObserver *this, struct Event *a2)
{
  char Owner; // [esp-Ch] [ebp-4Ch]
  Outpop::Utility::Ref_Object *v3; // [esp-4h] [ebp-44h] BYREF
  Outpop::Utility::Ref_Object *v4; // [esp+8h] [ebp-38h] BYREF
  _DWORD v5[2]; // [esp+Ch] [ebp-34h] BYREF
  _BYTE v6[28]; // [esp+14h] [ebp-2Ch] BYREF
  int v7; // [esp+3Ch] [ebp-4h]

  Event::GetRequestMessage(a2, &v4);
  v7 = 0;
  std::string::string(v6);
  LOBYTE(v7) = 1;
  sub_10002F31((int)v5);
  sub_10017FE9((int)v6);
  v3 = v4;
  v5[1] = &v3;
  if ( v4 )
    Outpop::Utility::Ref_Object::addref(v4);
  LOBYTE(v7) = 2;
  Owner = Event::GetOwner(a2);
  GameClient::GroupManager::Instance();
  LOBYTE(v7) = 1;
  GameClient::GroupManager::ReceiveInvite(Owner, (int)v6, (int)v3);
  LOBYTE(v7) = 0;
  std::string::~string(v6);
  v7 = -1;
  if ( v4 )
    Outpop::Utility::Ref_Object::release(v4);
}
