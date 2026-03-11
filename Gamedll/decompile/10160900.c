/*
 * func-name: sub_10160900
 * func-address: 0x10160900
 * callers: 0x1001632e
 * callees: 0x10001dfc, 0x10008e6d, 0x1000a3a8, 0x1000a7d6, 0x1000ca7c, 0x1000ed13, 0x1001a5be, 0x102c9ea8
 */

void __userpurge sub_10160900(int a1@<ecx>, int a2, int a3)
{
  struct GameClient::Robot *Robot; // eax
  int v5; // ecx
  GameClient::ControlledEstab *v6; // eax
  struct GameClient::Seat *DriverSeat; // eax
  GameClient::RobotManager *v8; // eax
  struct GameClient::Robot *v9; // edi
  int v10; // eax
  _DWORD *v11; // esi
  int v12; // esi
  CDlgMgr *v13; // eax
  int v14; // [esp+4h] [ebp-Ch]

  Robot = (struct GameClient::Robot *)sub_10001DFC(a2);
  if ( !Robot )
    return;
  v5 = *((_DWORD *)Robot + 28);
  if ( v5 != 1 )
  {
    if ( v5 != 4 && v5 != 8 )
      return;
    v6 = (GameClient::ControlledEstab *)_RTDynamicCast(
                                          Robot,
                                          0,
                                          &GameClient::WorldObject `RTTI Type Descriptor',
                                          &GameClient::ControlledEstab `RTTI Type Descriptor',
                                          0);
    if ( !v6 )
      return;
    DriverSeat = GameClient::ControlledEstab::GetDriverSeat(v6);
    if ( !DriverSeat )
      return;
    v14 = *((_DWORD *)DriverSeat + 19);
    v8 = GameClient::RobotManager::Instance();
    Robot = GameClient::RobotManager::GetRobot(v8, v14);
  }
  v9 = Robot;
  if ( Robot )
  {
    v10 = *((_DWORD *)Robot + 5);
    if ( v10 )
    {
      if ( *(_BYTE *)(v10 + 212) )
      {
        v11 = *(_DWORD **)(a1 + 4);
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*v11 + 28))(v11, *((_DWORD *)v9 + 5)) )
        {
          LogPrintf("Enter Function: %d", v11[8]);
          *((_DWORD *)v9 + 226) = v11[8];
          a3 = 0;
          sub_1001A5BE(3, (int)&a3);
          if ( a3 )
          {
            sub_1000CA7C();
            v12 = v11[7];
            if ( v12 )
              sub_1000A7D6(*(_DWORD *)(v12 + 12));
          }
          v13 = (CDlgMgr *)CDlgMgr::Instance(3);
          CDlgMgr::ShowDialog(v13);
        }
        else
        {
          LogPrintf("Function cannot active: %d", v11[8]);
        }
      }
    }
  }
}
