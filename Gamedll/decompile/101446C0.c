/*
 * func-name: ?SubmitImbileEnergy@Booty@GameClient@@QAEX_N@Z_0
 * func-address: 0x101446c0
 * callers: 0x1000810c
 * callees: 0x1000194c, 0x10001b04, 0x10005f8d, 0x10006618, 0x10007766, 0x100077ed, 0x1000a3a8, 0x1000ed13, 0x10013647
 */

void __thiscall GameClient::Booty::SubmitImbileEnergy(GameClient::Booty *this, bool a2)
{
  GameClient::RobotManager *v3; // eax
  GameClient::Robot *Robot; // eax
  GameClient::Robot *v5; // ebx
  Outpop::Utility::Ref_Object *v6; // ecx
  int v7; // [esp+8h] [ebp-30h]
  Outpop::Utility::Ref_Object *v8; // [esp+1Ch] [ebp-1Ch] BYREF
  Outpop::Utility::Ref_Object *v9; // [esp+20h] [ebp-18h] BYREF
  double Energy; // [esp+24h] [ebp-14h]
  int v11; // [esp+34h] [ebp-4h]

  if ( *((_BYTE *)this + 172) && sub_1000194C(0) )
  {
    if ( !a2 )
    {
      sub_100077ED((int)&v9, 9, 77, COERCE_INT(0.0), 1, 512);
      v11 = 1;
      sub_10001B04((int)this + 12);
      sub_10006618((int)&a2);
      j_nullsub_44((int)&v9);
      v6 = v9;
LABEL_9:
      v11 = -1;
      if ( v6 )
        Outpop::Utility::Ref_Object::release(v6);
      return;
    }
    if ( *((float *)this + 42) > 0.0 )
    {
      v7 = *((_DWORD *)this + 44);
      v3 = GameClient::RobotManager::Instance();
      Robot = GameClient::RobotManager::GetRobot(v3, v7);
      v5 = Robot;
      if ( Robot )
      {
        Energy = GameClient::Robot::GetEnergy(Robot);
        if ( GameClient::Robot::GetMaxEnergy(v5) > Energy )
        {
          sub_100077ED((int)&v8, 9, 76, COERCE_INT(0.0), 1, 512);
          v11 = 0;
          sub_10001B04((int)this + 12);
          sub_10006618((int)&a2);
          j_nullsub_44((int)&v8);
          v6 = v8;
          goto LABEL_9;
        }
      }
    }
  }
}
