/*
 * func-name: ?Tick@CGroupMemberUI@@UAEXM@Z_0
 * func-address: 0x10270c60
 * callers: 0x1000fc27
 * callees: 0x1000194c, 0x1000efca, 0x10017c29
 */

void __thiscall CGroupMemberUI::Tick(CGroupMemberUI *this, float a2)
{
  int v3; // eax
  GameClient::GroupManager *v4; // eax
  struct GameClient::LocalCharacter *v5; // [esp+8h] [ebp-Ch]
  float v6; // [esp+10h] [ebp-4h]
  float v7; // [esp+10h] [ebp-4h]

  CTYDialog::CenterDialog(this, 0, 1);
  v6 = *(float *)&GSeconds - *((float *)this + 975);
  v7 = fabs(v6);
  if ( v7 > 3.0 )
  {
    v3 = sub_1000194C(0);
    if ( v3 )
    {
      v5 = (struct GameClient::LocalCharacter *)v3;
      v4 = GameClient::GroupManager::Instance();
      GameClient::GroupManager::RequestUpdateGroupData(v4, v5);
    }
    *((float *)this + 975) = *(float *)&GSeconds;
  }
  CTYDialog::Tick(this, a2);
}
