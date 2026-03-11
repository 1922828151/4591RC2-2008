/*
 * func-name: sub_1018EDE0
 * func-address: 0x1018ede0
 * callers: 0x100125f3
 * callees: 0x1000a3a8, 0x1000ed13
 */

struct GameClient::Robot *__stdcall sub_1018EDE0(Event *a1)
{
  struct BinStream *Stream; // eax
  int v2; // ecx
  GameClient::RobotManager *v3; // eax
  GameClient::RobotManager *v5; // eax
  int v6; // [esp-4h] [ebp-4h]

  Stream = Event::GetStream(a1);
  v2 = *((_DWORD *)Stream + 3);
  if ( (unsigned int)(v2 + 4) > *((_DWORD *)Stream + 2) )
  {
    v5 = GameClient::RobotManager::Instance();
    return GameClient::RobotManager::GetRobot(v5, (int)a1);
  }
  else
  {
    v6 = *(_DWORD *)(v2 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v2 + 4;
    v3 = GameClient::RobotManager::Instance();
    return GameClient::RobotManager::GetRobot(v3, v6);
  }
}
