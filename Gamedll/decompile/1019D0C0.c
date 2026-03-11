/*
 * func-name: ?SetCurDriverStageLocal@ControlledEstab@GameClient@@QAEXH@Z_0
 * func-address: 0x1019d0c0
 * callers: 0x1000e363
 * callees: 0x10001032, 0x10001b04, 0x10004b79, 0x10006802, 0x100077ed, 0x10008e6d, 0x1000a3a8, 0x1000ed13, 0x10013647, 0x10016a4f
 */

void __thiscall GameClient::ControlledEstab::SetCurDriverStageLocal(GameClient::ControlledEstab *this, int a2)
{
  Concurrency::details::SchedulerBase *v3; // ecx
  int AnonymousScheduleGroup; // eax
  struct GameClient::Robot *DriverSeat; // eax
  int v6; // eax
  GameClient::RobotManager *v7; // eax
  int v8; // [esp+8h] [ebp-24h]
  Outpop::Utility::Ref_Object *v9; // [esp+18h] [ebp-14h] BYREF
  int v10; // [esp+1Ch] [ebp-10h] BYREF
  int v11; // [esp+28h] [ebp-4h]

  v3 = (Concurrency::details::SchedulerBase *)*((_DWORD *)this + 114);
  if ( v3 )
    AnonymousScheduleGroup = (int)Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(v3);
  else
    AnonymousScheduleGroup = -1;
  if ( a2 != AnonymousScheduleGroup )
  {
    DriverSeat = GameClient::ControlledEstab::GetDriverSeat(this);
    if ( DriverSeat )
    {
      v6 = *((_DWORD *)DriverSeat + 19);
      if ( v6 == -1 )
      {
        DriverSeat = 0;
      }
      else
      {
        v8 = v6;
        v7 = GameClient::RobotManager::Instance();
        DriverSeat = GameClient::RobotManager::GetRobot(v7, v8);
      }
    }
    if ( sub_10016A4F(*((_DWORD *)DriverSeat + 4)) )
    {
      sub_100077ED((int)&v9, 9, 4, COERCE_INT(0.0), 1, 512);
      v10 = *((_DWORD *)this + 3);
      v11 = 0;
      sub_10001B04((int)&v10);
      sub_10006802((int)&a2);
      j_nullsub_44((int)&v9);
      v11 = -1;
      if ( v9 )
        Outpop::Utility::Ref_Object::release(v9);
    }
  }
  if ( *((_DWORD *)this + 114) )
    sub_10004B79(a2);
}
