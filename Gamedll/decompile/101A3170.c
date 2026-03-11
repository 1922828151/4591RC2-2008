/*
 * func-name: ?OnBegin@EndUseEstabObserver@GameClient@@UAEXAAVEvent@@@Z_0
 * func-address: 0x101a3170
 * callers: 0x10005164
 * callees: 0x1000a3a8, 0x1000ed13, 0x1000f119, 0x10016a4f, 0x10017a44, 0x102c9ea8
 */

void __thiscall GameClient::EndUseEstabObserver::OnBegin(GameClient::EndUseEstabObserver *this, struct Event *a2)
{
  char Owner; // al
  int v3; // eax
  GameClient::RobotManager *v4; // eax
  struct GameClient::Robot *Robot; // ebx
  struct BinStream *Stream; // eax
  unsigned int v7; // ecx
  CDlgMgr *v8; // eax
  struct CTYDialog *Dialog; // eax
  CEstablishmentUI *v10; // eax
  CDlgMgr *v11; // eax
  struct CTYDialog *v12; // eax
  int v13; // eax
  CDlgMgr *v14; // eax
  int v15; // [esp+8h] [ebp-10h]

  Owner = Event::GetOwner(a2);
  v3 = sub_10016A4F(Owner);
  if ( v3 )
  {
    v15 = *(_DWORD *)(v3 + 292);
    v4 = GameClient::RobotManager::Instance();
    Robot = GameClient::RobotManager::GetRobot(v4, v15);
    if ( Robot )
    {
      Stream = Event::GetStream(a2);
      v7 = *((_DWORD *)Stream + 3) + 4;
      if ( v7 <= *((_DWORD *)Stream + 2) )
        *((_DWORD *)Stream + 3) = v7;
      v8 = (CDlgMgr *)CDlgMgr::Instance();
      Dialog = CDlgMgr::GetDialog(v8);
      v10 = (CEstablishmentUI *)_RTDynamicCast(
                                  Dialog,
                                  0,
                                  &CTYDialog `RTTI Type Descriptor',
                                  &CEstablishmentUI `RTTI Type Descriptor',
                                  0);
      if ( v10 )
        CEstablishmentUI::SetEstablishment(v10, 0xFFFFFFFF);
      v11 = (CDlgMgr *)CDlgMgr::Instance();
      v12 = CDlgMgr::GetDialog(v11);
      v13 = _RTDynamicCast(v12, 0, &CTYDialog `RTTI Type Descriptor', &CFixtureUIHeader `RTTI Type Descriptor', 0);
      if ( v13 )
      {
        if ( *(_DWORD *)(v13 + 3896) == 6 )
          sub_10017A44();
      }
      v14 = (CDlgMgr *)CDlgMgr::Instance();
      CDlgMgr::ShowDialog(v14);
      *((_DWORD *)Robot + 228) = -1;
    }
  }
}
