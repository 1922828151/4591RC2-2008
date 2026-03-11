/*
 * func-name: sub_10160A30
 * func-address: 0x10160a30
 * callers: 0x10001186
 * callees: 0x10001b04, 0x10001dfc, 0x100077ed, 0x10008e6d, 0x1000a3a8, 0x1000ed13, 0x10013647, 0x102c9ea8
 */

char __thiscall sub_10160A30(_DWORD *this, Outpop::Utility::Ref_Object *a2)
{
  struct GameClient::Robot *DriverSeat; // eax
  int v4; // ecx
  GameClient::RobotManager *v5; // eax
  struct GameClient::Robot *v6; // esi
  int v7; // ecx
  int v8; // edi
  int v9; // eax
  int v10; // eax
  CDlgMgr *v11; // eax
  int v13; // [esp+8h] [ebp-20h]
  int v14; // [esp+18h] [ebp-10h] BYREF
  int v15; // [esp+24h] [ebp-4h]

  DriverSeat = (struct GameClient::Robot *)sub_10001DFC((int)a2);
  if ( !DriverSeat )
    return (char)DriverSeat;
  v4 = *((_DWORD *)DriverSeat + 28);
  if ( v4 != 1 )
  {
    if ( v4 != 4 && v4 != 8 )
      return (char)DriverSeat;
    DriverSeat = (struct GameClient::Robot *)_RTDynamicCast(
                                               DriverSeat,
                                               0,
                                               &GameClient::WorldObject `RTTI Type Descriptor',
                                               &GameClient::ControlledEstab `RTTI Type Descriptor',
                                               0);
    if ( !DriverSeat )
      return (char)DriverSeat;
    DriverSeat = GameClient::ControlledEstab::GetDriverSeat(DriverSeat);
    if ( !DriverSeat )
      return (char)DriverSeat;
    v13 = *((_DWORD *)DriverSeat + 19);
    v5 = GameClient::RobotManager::Instance();
    DriverSeat = GameClient::RobotManager::GetRobot(v5, v13);
  }
  v6 = DriverSeat;
  if ( DriverSeat )
  {
    v7 = *((_DWORD *)DriverSeat + 5);
    if ( v7 )
    {
      if ( *(_BYTE *)(v7 + 212) )
      {
        v8 = this[1];
        v9 = *((_DWORD *)DriverSeat + 227);
        *((_DWORD *)v6 + 226) = -1;
        if ( v9 == *(_DWORD *)(v8 + 32) )
        {
          sub_100077ED((int)&a2, 9, 206, COERCE_INT(0.0), 1, 512);
          v10 = *(_DWORD *)(v8 + 32);
          v15 = 0;
          v14 = v10;
          sub_10001B04((int)&v14);
          j_nullsub_44((int)&a2);
          v15 = -1;
          if ( a2 )
            Outpop::Utility::Ref_Object::release(a2);
        }
        v11 = (CDlgMgr *)CDlgMgr::Instance(3);
        LOBYTE(DriverSeat) = CDlgMgr::ShowDialog(v11);
      }
    }
  }
  return (char)DriverSeat;
}
