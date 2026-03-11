/*
 * func-name: ?Tick@CRadarMapUI@@UAEXM@Z_0
 * func-address: 0x1027b600
 * callers: 0x100089cc
 * callees: 0x1000194c, 0x1000516e, 0x1000a3a8, 0x1000ed13, 0x10011a4f, 0x102c9d62, 0x102c9fe0
 */

void __thiscall CRadarMapUI::Tick(CRadarMapUI *this, float a2)
{
  int v3; // ecx
  int v4; // eax
  GameClient::RobotManager *v5; // eax
  float *Robot; // esi
  struct Game *v7; // eax
  int v8; // [esp+8h] [ebp-1ACh]
  float v9; // [esp+14h] [ebp-1A0h] BYREF
  float v10; // [esp+18h] [ebp-19Ch]
  float v11; // [esp+1Ch] [ebp-198h]
  wchar_t Buffer[200]; // [esp+20h] [ebp-194h] BYREF

  v3 = *((_DWORD *)this + 968);
  if ( v3 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 4))(v3);
  v4 = sub_1000194C(0);
  if ( v4 )
  {
    v8 = *(_DWORD *)(v4 + 292);
    v5 = GameClient::RobotManager::Instance();
    Robot = (float *)GameClient::RobotManager::GetRobot(v5, v8);
    if ( Robot )
    {
      v9 = 0.0;
      v10 = 0.0;
      v11 = 0.0;
      v7 = Game::Instance();
      World::GetLogicCoordOffset(*((World **)v7 + 25), (struct Vector *)&v9);
      v9 = Robot[6] + v9;
      v10 = Robot[7] + v10;
      v11 = Robot[8] + v11;
      sub_10011A4F(Buffer, (size_t)L"%d %d", (int)v9);
      CREStatic::SetText(*((CREStatic **)this + 976), Buffer);
    }
    CTYDialog::Tick(this, a2);
  }
}
