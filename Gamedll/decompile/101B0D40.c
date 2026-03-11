/*
 * func-name: ?Board@Seat@GameClient@@QAE_NPAVRobot@2@@Z_0
 * func-address: 0x101b0d40
 * callers: 0x10003d37
 * callees: 0x10005803, 0x10006a19, 0x10007f59, 0x1000a939, 0x10016f59
 */

char __thiscall GameClient::Seat::Board(GameClient::Seat *this, struct GameClient::Robot *a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int Controller; // eax
  int v7; // ecx
  unsigned int i; // edi
  int v9; // ecx
  int v10; // ecx
  int v11; // eax
  int v13; // [esp-4h] [ebp-14h]

  v3 = *((_DWORD *)this + 3);
  v4 = *((_DWORD *)this + 22);
  *((_DWORD *)this + 19) = *((_DWORD *)a2 + 3);
  GameClient::Robot::IntoEstablishment(a2, *(_DWORD *)(v4 + 12), v3);
  v5 = *((_DWORD *)a2 + 5);
  if ( v5 )
  {
    if ( *(_BYTE *)(v5 + 212) )
    {
      if ( *((_DWORD *)this + 22) )
      {
        v13 = *((_DWORD *)this + 23);
        GameClient::EstabControllerManager::Instance();
        Controller = GameClient::EstabControllerManager::GetController(v13);
        v7 = *((_DWORD *)this + 22);
        *((_DWORD *)this + 24) = Controller;
        if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)Controller + 12))(Controller, v7) )
        {
          (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 24) + 8))(*((_DWORD *)this + 24));
          *((_DWORD *)this + 24) = 0;
        }
      }
    }
  }
  for ( i = 0; ; ++i )
  {
    v9 = *((_DWORD *)this + 8);
    if ( !v9 || i >= (*((_DWORD *)this + 9) - v9) >> 2 )
      break;
    *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 8) + 4 * i) + 148) = a2;
    v10 = *((_DWORD *)this + 8);
    if ( !v10 || i >= (*((_DWORD *)this + 9) - v10) >> 2 )
      _invalid_parameter_noinfo();
    GameClient::Equip::LoadHUD(*(GameClient::Equip **)(*((_DWORD *)this + 8) + 4 * i));
  }
  if ( GameClient::WorldObject::IsLocal(a2) )
  {
    v11 = EventAttemper::Instance(9, 4156);
    EventAttemper::AddEvent(v11);
  }
  return 1;
}
