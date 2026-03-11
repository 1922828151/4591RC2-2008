/*
 * func-name: ?OnBegin@CtlEsabHeartMoveP2PObserver@GameClient@@UAEXAAVEvent@@@Z_0
 * func-address: 0x1019dd60
 * callers: 0x10019bb9
 * callees: 0x10003909, 0x10008e04, 0x10008e6d, 0x1000a3a8, 0x1000adc6, 0x1000dafd, 0x1000ed13, 0x10014669, 0x10017eb3
 */

void __thiscall GameClient::CtlEsabHeartMoveP2PObserver::OnBegin(
        GameClient::CtlEsabHeartMoveP2PObserver *this,
        struct Event *a2)
{
  struct BinStream *Stream; // eax
  int v3; // ecx
  unsigned int v4; // esi
  struct Event *v5; // edi
  int v6; // ecx
  int v7; // edx
  struct Event *v8; // ecx
  GameClient::EstabManager *v9; // eax
  GameClient::ControlledEstab *Establishment; // eax
  GameClient::ControlledEstab *v11; // ebx
  struct GameClient::Seat *DriverSeat; // eax
  int v13; // eax
  GameClient::RobotManager *v14; // eax
  struct GameClient::Robot *Robot; // eax
  _DWORD *v16; // eax
  int v17; // ecx
  unsigned int v18; // [esp-4h] [ebp-60h]
  int v19; // [esp-4h] [ebp-60h]
  float v20[3]; // [esp+10h] [ebp-4Ch] BYREF
  _BYTE v21[64]; // [esp+1Ch] [ebp-40h] BYREF

  Stream = Event::GetStream(a2);
  v3 = *((_DWORD *)Stream + 3);
  v4 = *((_DWORD *)Stream + 2);
  if ( v3 + 4 > v4 )
  {
    v5 = a2;
  }
  else
  {
    v5 = *(struct Event **)(v3 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v3 + 4;
  }
  v6 = *((_DWORD *)Stream + 3);
  v7 = v6 + 4;
  if ( v6 + 4 > v4 )
  {
    v8 = a2;
  }
  else
  {
    v8 = *(struct Event **)(v6 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v7;
  }
  v18 = (unsigned int)v8;
  v9 = GameClient::EstabManager::Instance();
  Establishment = GameClient::EstabManager::GetEstablishment(v9, v18);
  v11 = Establishment;
  if ( Establishment )
  {
    DriverSeat = GameClient::ControlledEstab::GetDriverSeat(Establishment);
    if ( DriverSeat )
    {
      v13 = *((_DWORD *)DriverSeat + 19);
      if ( v13 != -1 )
      {
        v19 = v13;
        v14 = GameClient::RobotManager::Instance();
        Robot = GameClient::RobotManager::GetRobot(v14, v19);
        if ( Robot )
        {
          if ( *((struct Event **)Robot + 3) == v5 )
          {
            v20[0] = 0.0;
            v20[1] = 0.0;
            v20[2] = 0.0;
            sub_10014669(v21);
            Event::GetStream(a2);
            v16 = (_DWORD *)sub_10017EB3((int)v20);
            v17 = v16[3];
            if ( (unsigned int)(v17 + 64) <= v16[2] )
            {
              qmemcpy(v21, (const void *)(v17 + v16[1]), sizeof(v21));
              v16[3] += 64;
            }
            GameClient::ControlledEstab::SetCorrectPos(v11, (const struct Vector *)v20);
            GameClient::ControlledEstab::SetCorrectRotation(v11, (const struct Matrix *)v21);
          }
        }
      }
    }
  }
}
