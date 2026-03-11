/*
 * func-name: ?Update@Booty@GameClient@@UAEXM@Z_0
 * func-address: 0x10144960
 * callers: 0x10014146
 * callees: 0x10007766, 0x1000a3a8, 0x1000e7d7, 0x1000ed13, 0x10012deb, 0x10016fb3
 */

void __thiscall GameClient::Booty::Update(GameClient::Booty *this, float a2)
{
  int v3; // edi
  GameClient::RobotManager *v4; // eax
  GameClient::Robot *Robot; // esi
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  int v9; // [esp+4h] [ebp-54h]
  float v10; // [esp+14h] [ebp-44h]
  float v11; // [esp+14h] [ebp-44h]
  _DWORD v12[16]; // [esp+18h] [ebp-40h] BYREF

  v3 = *((_DWORD *)this + 2);
  if ( *((_BYTE *)this + 172) )
  {
    if ( *((_BYTE *)this + 173) )
    {
      v9 = *((_DWORD *)this + 44);
      v4 = GameClient::RobotManager::Instance();
      Robot = GameClient::RobotManager::GetRobot(v4, v9);
      if ( Robot )
      {
        v10 = *(float *)(v3 + 108) * a2;
        if ( *((float *)this + 42) >= (double)v10 )
        {
          *((float *)this + 42) = *((float *)this + 42) - v10;
        }
        else
        {
          v10 = *((float *)this + 42);
          *((float *)this + 42) = 0.0;
          GameClient::Booty::ImbileEnergy(this, 0);
        }
        v11 = GameClient::Robot::GetEnergy(Robot) + v10;
        GameClient::Robot::SetEnergy(Robot, v11);
      }
    }
  }
  v6 = *((_DWORD *)this + 7);
  v7 = *((_DWORD *)this + 8);
  qmemcpy(v12, (char *)this + 36, sizeof(v12));
  v12[12] = *((_DWORD *)this + 6);
  v8 = *((_DWORD *)this + 45);
  v12[13] = v6;
  v12[14] = v7;
  (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v8 + 136))(v8, v12);
  GameClient::WorldObject::Update(this, a2);
}
