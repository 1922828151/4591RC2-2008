/*
 * func-name: ?Open@Booty@GameClient@@QAEXPAVRobot@2@@Z_0
 * func-address: 0x101444c0
 * callers: 0x10007ed2
 * callees: 0x10001b04, 0x100077ed, 0x1000a3a8, 0x1000ed13, 0x10013647, 0x102c9dbc, 0x102c9ea8
 */

void __thiscall GameClient::Booty::Open(GameClient::Booty *this, struct GameClient::Robot *a2)
{
  struct GameClient::Robot *v3; // edi
  GameClient::RobotManager *v4; // eax
  int v5; // ebx
  int v6; // [esp+8h] [ebp-28h]
  float v7; // [esp+1Ch] [ebp-14h]
  float v8; // [esp+20h] [ebp-10h]

  v3 = a2;
  if ( *(float *)&a2 != 0.0 )
  {
    if ( *((_DWORD *)this + 44) == -1
      || (v6 = *((_DWORD *)this + 44),
          v4 = GameClient::RobotManager::Instance(),
          !GameClient::RobotManager::GetRobot(v4, v6)) )
    {
      v5 = *((_DWORD *)this + 2);
      v7 = *((float *)v3 + 6) - *((float *)this + 6);
      *(float *)&a2 = *((float *)v3 + 7) - *((float *)this + 7);
      v8 = *((float *)v3 + 8) - *((float *)this + 8);
      *(float *)&a2 = *(float *)&a2 * *(float *)&a2 + v7 * v7 + v8 * v8;
      *(float *)&a2 = sqrt(*(float *)&a2);
      if ( *(float *)(v5 + 112) > (double)*(float *)&a2
        && _RTDynamicCast(
             *((_DWORD *)v3 + 5),
             0,
             &GameClient::Character `RTTI Type Descriptor',
             &GameClient::LocalCharacter `RTTI Type Descriptor',
             0) )
      {
        sub_100077ED((int)&a2, 9, 74, COERCE_INT(0.0), 1, 512);
        sub_10001B04((int)this + 12);
        j_nullsub_44((int)&a2);
        if ( *(float *)&a2 != 0.0 )
          Outpop::Utility::Ref_Object::release(a2);
      }
    }
  }
}
