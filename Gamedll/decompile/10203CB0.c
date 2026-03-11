/*
 * func-name: ?OnEnd@UpdateCorpInfoObserver@GameClient@@UAEXAAVEvent@@@Z_0
 * func-address: 0x10203cb0
 * callers: 0x1000bad2
 * callees: 0x10001181, 0x10008fbc, 0x10017c29, 0x10017fe9, 0x102c9d62
 */

void __thiscall GameClient::UpdateCorpInfoObserver::OnEnd(GameClient::UpdateCorpInfoObserver *this, struct Event *a2)
{
  char v2; // [esp-8h] [ebp-48h]
  Outpop::Message::Message *v3; // [esp+8h] [ebp-38h] BYREF
  Outpop::Utility::Ref_Object *v4; // [esp+Ch] [ebp-34h] BYREF
  char v5[4]; // [esp+10h] [ebp-30h] BYREF
  _BYTE v6[28]; // [esp+14h] [ebp-2Ch] BYREF
  int v7; // [esp+3Ch] [ebp-4h]

  Event::GetRequestMessage(a2, &v3);
  v7 = 0;
  Outpop::Message::Message::reset_to_data(v3);
  sub_10001181((int)v5);
  std::string::string(v6);
  LOBYTE(v7) = 1;
  Event::GetAckMessage(a2, &v4);
  LOBYTE(v7) = 2;
  sub_10017FE9((int)v6);
  v2 = v5[0];
  GameClient::GroupManager::Instance();
  GameClient::GroupManager::UpdateCorpInfo(v2, (int)v6);
  LOBYTE(v7) = 1;
  if ( v4 )
    Outpop::Utility::Ref_Object::release(v4);
  LOBYTE(v7) = 0;
  std::string::~string(v6);
  v7 = -1;
  if ( v3 )
    Outpop::Utility::Ref_Object::release(v3);
}
