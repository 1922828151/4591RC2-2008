/*
 * func-name: ?UnBoard@Seat@GameClient@@QAE_NPAVRobot@2@_N@Z_0
 * func-address: 0x101b0f20
 * callers: 0x10003175
 * callees: 0x10005af1, 0x10006a19, 0x1000a06f, 0x100156bd
 */

char __thiscall GameClient::Seat::UnBoard(GameClient::Seat *this, struct GameClient::Robot *a2, bool a3)
{
  int v5; // ecx
  unsigned int i; // edi
  int v7; // ecx
  int v8; // ecx
  GameClient::Establishment *v9; // ecx
  int v10; // eax

  if ( *((_DWORD *)a2 + 3) != *((_DWORD *)this + 19) )
    return 0;
  *((_DWORD *)this + 19) = -1;
  if ( !a3 )
    GameClient::Robot::OutOffEstablishment(a2);
  v5 = *((_DWORD *)this + 24);
  if ( v5 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5);
    *((_DWORD *)this + 24) = 0;
  }
  for ( i = 0; ; ++i )
  {
    v7 = *((_DWORD *)this + 8);
    if ( !v7 || i >= (*((_DWORD *)this + 9) - v7) >> 2 )
      break;
    *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 8) + 4 * i) + 148) = 0;
    v8 = *((_DWORD *)this + 8);
    if ( !v8 || i >= (*((_DWORD *)this + 9) - v8) >> 2 )
      _invalid_parameter_noinfo();
    GameClient::Equip::UnloadHUD(*(GameClient::Equip **)(*((_DWORD *)this + 8) + 4 * i));
  }
  *((_BYTE *)this + 345) = 0;
  if ( GameClient::WorldObject::IsLocal(a2) )
  {
    v9 = (GameClient::Establishment *)*((_DWORD *)this + 22);
    if ( v9 )
      GameClient::Establishment::CheckSeatHideModelFrame(v9, *((_DWORD *)this + 3), 0);
    v10 = EventAttemper::Instance(9, 4156);
    EventAttemper::AddEvent(v10);
  }
  return 1;
}
