/*
 * func-name: ?OnBegin@UseEstabObserver@GameClient@@UAEXAAVEvent@@@Z_0
 * func-address: 0x101a3050
 * callers: 0x10007531
 * callees: 0x10005cf4, 0x1000a3a8, 0x1000adc6, 0x1000dafd, 0x1000ddaa, 0x1000ed13, 0x1000f119, 0x10016a4f, 0x102c9ea8
 */

void __thiscall GameClient::UseEstabObserver::OnBegin(GameClient::UseEstabObserver *this, struct Event *a2)
{
  char Owner; // al
  int v3; // eax
  GameClient::RobotManager *v4; // eax
  struct GameClient::Robot *Robot; // ebp
  unsigned int v6; // edi
  struct BinStream *Stream; // eax
  int v8; // ecx
  CDlgMgr *v9; // eax
  struct CTYDialog *Dialog; // eax
  CEstablishmentUI *v11; // eax
  CDlgMgr *v12; // eax
  CDlgMgr *v13; // eax
  struct CTYDialog *v14; // eax
  GameClient::EstabManager *v15; // eax
  struct GameClient::Establishment *Establishment; // eax
  int v17; // ecx
  int v18; // [esp+8h] [ebp-10h]

  Owner = Event::GetOwner(a2);
  v3 = sub_10016A4F(Owner);
  if ( v3 )
  {
    v18 = *(_DWORD *)(v3 + 292);
    v4 = GameClient::RobotManager::Instance();
    Robot = GameClient::RobotManager::GetRobot(v4, v18);
    if ( Robot )
    {
      v6 = -1;
      Stream = Event::GetStream(a2);
      v8 = *((_DWORD *)Stream + 3);
      if ( (unsigned int)(v8 + 4) <= *((_DWORD *)Stream + 2) )
      {
        v6 = *(_DWORD *)(v8 + *((_DWORD *)Stream + 1));
        *((_DWORD *)Stream + 3) = v8 + 4;
      }
      v9 = (CDlgMgr *)CDlgMgr::Instance();
      Dialog = CDlgMgr::GetDialog(v9);
      v11 = (CEstablishmentUI *)_RTDynamicCast(
                                  Dialog,
                                  0,
                                  &CTYDialog `RTTI Type Descriptor',
                                  &CEstablishmentUI `RTTI Type Descriptor',
                                  0);
      if ( v11 )
        CEstablishmentUI::SetEstablishment(v11, v6);
      v12 = (CDlgMgr *)CDlgMgr::Instance();
      CDlgMgr::ShowDialog(v12);
      *((_DWORD *)Robot + 228) = v6;
      v13 = (CDlgMgr *)CDlgMgr::Instance();
      v14 = CDlgMgr::GetDialog(v13);
      if ( _RTDynamicCast(v14, 3, 0, &CTYDialog `RTTI Type Descriptor', &CFixtureUIHeader `RTTI Type Descriptor') )
      {
        sub_1000DDAA(6);
        sub_10005CF4();
      }
      v15 = GameClient::EstabManager::Instance();
      Establishment = GameClient::EstabManager::GetEstablishment(v15, v6);
      if ( Establishment )
      {
        v17 = *((_DWORD *)Establishment + 90);
        *((_DWORD *)Establishment + 92) = -1;
        *((_DWORD *)Establishment + 91) = v17;
      }
    }
  }
}
