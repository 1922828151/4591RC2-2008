/*
 * func-name: ?OnRobotRelive@BigMapState@@IAEXAAVEvent@@@Z_0
 * func-address: 0x1027d3f0
 * callers: 0x1001465a
 * callees: 0x1000194c, 0x1000a3a8, 0x1000ed13
 */

void __thiscall BigMapState::OnRobotRelive(BigMapState *this, struct Event *a2)
{
  struct BinStream *Stream; // eax
  int v4; // ecx
  struct Event *v5; // edi
  int v6; // eax
  struct Event *v7; // eax
  GameClient::RobotManager *v8; // eax
  struct GameClient::Robot *Robot; // eax
  bool v10; // al
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // [esp-4h] [ebp-Ch]

  Stream = Event::GetStream(a2);
  v4 = *((_DWORD *)Stream + 3);
  if ( (unsigned int)(v4 + 4) > *((_DWORD *)Stream + 2) )
  {
    v5 = a2;
  }
  else
  {
    v5 = *(struct Event **)(v4 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v4 + 4;
  }
  v6 = sub_1000194C(0);
  if ( v6 )
  {
    v7 = *(struct Event **)(v6 + 292);
    if ( v5 == v7 )
    {
      v15 = (int)v7;
      v8 = GameClient::RobotManager::Instance();
      Robot = GameClient::RobotManager::GetRobot(v8, v15);
      if ( Robot )
      {
        v10 = *((_DWORD *)Robot + 90) != 0;
        *((_BYTE *)this + 48) = v10;
        if ( v10 )
        {
          v11 = *((_DWORD *)this + 1);
          if ( v11 )
          {
            if ( *(_BYTE *)(v11 + 4090) && *(_DWORD *)(v11 + 3876) == 1 )
            {
              v12 = *(_DWORD *)(v11 + 3896);
              *(_BYTE *)(v11 + 4090) = 0;
              CHotZonePic::SetPic(v12, v11 + 3960);
              v13 = *((_DWORD *)this + 1);
              *((_DWORD *)this + 24) = 1;
              *((_DWORD *)this + 23) = *(_DWORD *)(v13 + 4096);
            }
          }
        }
        v14 = *((_DWORD *)this + 1);
        if ( v14 )
        {
          if ( !*((_BYTE *)this + 48) )
            CHotZonePic::RemoveAllHotZone(*(CHotZonePic **)(v14 + 3896));
        }
      }
    }
  }
}
