/*
 * func-name: ?OnEnter@EnterEstabEffectArea@GameClient@@UAEXJ@Z_0
 * func-address: 0x101a2dd0
 * callers: 0x10015ff5
 * callees: 0x10006a19, 0x1000a3a8, 0x1000a7d6, 0x1000ca7c, 0x1000ed13, 0x102c9ea8
 */

void __thiscall GameClient::EnterEstabEffectArea::OnEnter(GameClient::EnterEstabEffectArea *this, int a2)
{
  GameClient::RobotManager *v3; // eax
  GameClient::WorldObject *Robot; // eax
  GameClient::WorldObject *v5; // esi
  CDlgMgr *v6; // eax
  struct CTYDialog *Dialog; // eax
  CDlgMgr *v8; // eax

  v3 = GameClient::RobotManager::Instance();
  Robot = GameClient::RobotManager::GetRobot(v3, a2);
  v5 = Robot;
  if ( Robot && GameClient::WorldObject::IsLocal(Robot) )
  {
    *((_DWORD *)v5 + 72) = *((_DWORD *)this + 1);
    v6 = (CDlgMgr *)CDlgMgr::Instance();
    Dialog = CDlgMgr::GetDialog(v6);
    if ( _RTDynamicCast(Dialog, 0, &CTYDialog `RTTI Type Descriptor', &CFixtureUIHeader `RTTI Type Descriptor', 0) )
    {
      sub_1000CA7C();
      sub_1000A7D6(*((_DWORD *)this + 1));
      v8 = (CDlgMgr *)CDlgMgr::Instance();
      CDlgMgr::ShowDialog(v8);
    }
  }
}
