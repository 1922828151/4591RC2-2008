/*
 * func-name: ?DoOpen@Booty@GameClient@@QAEX_N@Z_0
 * func-address: 0x10144840
 * callers: 0x1000c1fd
 * callees: 0x10006a19, 0x1000a3a8, 0x1000d855, 0x1000ed13, 0x100174ef, 0x102c9ea8
 */

void __thiscall GameClient::Booty::DoOpen(GameClient::Booty *this, bool a2)
{
  CDlgMgr *v3; // eax
  struct CTYDialog *Dialog; // eax
  CTYDialog *v5; // eax
  CDropBagUI *v6; // esi
  char Visible; // al
  GameClient::RobotManager *v8; // eax
  GameClient::WorldObject *Robot; // eax
  CDlgMgr *v10; // eax
  int v11; // [esp-8h] [ebp-20h]
  int v12; // [esp+4h] [ebp-14h]

  *((_BYTE *)this + 172) = a2;
  if ( !a2 )
  {
    *((_BYTE *)this + 173) = 0;
    *((_DWORD *)this + 44) = -1;
  }
  v3 = (CDlgMgr *)CDlgMgr::Instance(27);
  Dialog = CDlgMgr::GetDialog(v3, 0);
  v5 = (CTYDialog *)_RTDynamicCast(
                      Dialog,
                      v11,
                      &CTYDialog `RTTI Type Descriptor',
                      &CDropBagUI `RTTI Type Descriptor',
                      0);
  v6 = v5;
  if ( v5 )
  {
    Visible = CTYDialog::GetVisible(v5);
    if ( a2 )
    {
      if ( !Visible )
      {
        v12 = *((_DWORD *)this + 44);
        v8 = GameClient::RobotManager::Instance();
        Robot = GameClient::RobotManager::GetRobot(v8, v12);
        if ( Robot )
        {
          if ( GameClient::WorldObject::IsLocal(Robot) )
          {
            *((_DWORD *)v6 + 1015) = *((_DWORD *)this + 3);
            v10 = (CDlgMgr *)CDlgMgr::Instance(27);
            CDlgMgr::ShowDialog(v10);
            CDropBagUI::Show(v6);
          }
        }
      }
    }
    else if ( Visible && *((_DWORD *)v6 + 1015) == *((_DWORD *)this + 3) )
    {
      CDropBagUI::Hide(v6);
    }
  }
}
