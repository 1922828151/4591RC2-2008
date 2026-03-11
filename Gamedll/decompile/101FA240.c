/*
 * func-name: sub_101FA240
 * func-address: 0x101fa240
 * callers: 0x10009f8e
 * callees: 0x1000194c, 0x10016194, 0x10017c29
 */

void sub_101FA240()
{
  int v0; // eax
  GameClient::GroupManager *v1; // eax
  CDlgMgr *v2; // eax
  struct GameClient::LocalCharacter *v3; // [esp-8h] [ebp-8h]

  v0 = sub_1000194C(0);
  if ( v0 )
  {
    v3 = (struct GameClient::LocalCharacter *)v0;
    v1 = GameClient::GroupManager::Instance();
    GameClient::GroupManager::AnswerInviteRequest(v1, v3, 1);
  }
  v2 = (CDlgMgr *)CDlgMgr::Instance();
  CDlgMgr::EndMessage(v2);
}
