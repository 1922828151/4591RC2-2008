/*
 * func-name: ?SetCurrentNation@Establishment@GameClient@@UAEXW4NATION_TYPE@@@Z_0
 * func-address: 0x101a25b0
 * callers: 0x10010582
 * callees: 0x1000194c, 0x10006947, 0x1000a3a8, 0x1000a506, 0x1000ed13
 */

char __thiscall GameClient::Establishment::SetCurrentNation(_DWORD *this, int a2)
{
  unsigned int i; // edi
  int v4; // ecx
  int v5; // ecx
  struct GameClient::Robot *Robot; // eax
  GameClient::RobotManager *v7; // eax
  struct GameClient::Robot *v8; // edi
  GameClient::FuncManager *v9; // eax
  CDlgMgr *v10; // eax
  int v12; // [esp+0h] [ebp-14h]
  unsigned int v13; // [esp+0h] [ebp-14h]

  this[27] = a2;
  for ( i = 0; ; ++i )
  {
    v4 = this[65];
    if ( !v4 || i >= (this[66] - v4) >> 2 )
      break;
    v5 = *(_DWORD *)(this[65] + 4 * i);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 48))(v5, a2);
  }
  Robot = (struct GameClient::Robot *)sub_1000194C(0);
  if ( Robot )
  {
    if ( *((_DWORD *)Robot + 12) != a2 )
    {
      v12 = *((_DWORD *)Robot + 73);
      v7 = GameClient::RobotManager::Instance();
      Robot = GameClient::RobotManager::GetRobot(v7, v12);
      v8 = Robot;
      if ( Robot )
      {
        Robot = (struct GameClient::Robot *)*((_DWORD *)Robot + 226);
        if ( Robot != (struct GameClient::Robot *)-1 )
        {
          v13 = *((_DWORD *)v8 + 226);
          v9 = GameClient::FuncManager::Instance();
          Robot = GameClient::FuncManager::GetFunction(v9, v13);
          if ( Robot )
          {
            if ( *((_DWORD **)Robot + 7) == this )
            {
              *((_DWORD *)v8 + 226) = -1;
              v10 = (CDlgMgr *)CDlgMgr::Instance();
              LOBYTE(Robot) = CDlgMgr::ShowDialog(v10);
            }
          }
        }
      }
    }
  }
  return (char)Robot;
}
