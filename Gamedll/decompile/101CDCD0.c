/*
 * func-name: sub_101CDCD0
 * func-address: 0x101cdcd0
 * callers: 0x1001a825
 * callees: 0x1000194c, 0x10006947, 0x1000a3a8, 0x1000a506, 0x1000ed13
 */

struct GameClient::Robot *__stdcall sub_101CDCD0(Event *a1)
{
  struct BinStream *Stream; // eax
  int v2; // ecx
  unsigned int v3; // esi
  struct GameClient::Robot *result; // eax
  GameClient::RobotManager *v5; // eax
  GameClient::FuncManager *v6; // eax
  int v7; // [esp-4h] [ebp-8h]

  Stream = Event::GetStream(a1);
  v2 = *((_DWORD *)Stream + 3);
  if ( (unsigned int)(v2 + 4) > *((_DWORD *)Stream + 2) )
  {
    v3 = (unsigned int)a1;
  }
  else
  {
    v3 = *(_DWORD *)(v2 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v2 + 4;
  }
  result = (struct GameClient::Robot *)sub_1000194C(0);
  if ( result )
  {
    v7 = *((_DWORD *)result + 73);
    v5 = GameClient::RobotManager::Instance();
    result = GameClient::RobotManager::GetRobot(v5, v7);
    if ( result )
    {
      *((_DWORD *)result + 227) = -1;
      v6 = GameClient::FuncManager::Instance();
      result = GameClient::FuncManager::GetFunction(v6, v3);
      if ( result )
        return (struct GameClient::Robot *)(*(int (__thiscall **)(struct GameClient::Robot *))(*(_DWORD *)result + 36))(result);
    }
  }
  return result;
}
