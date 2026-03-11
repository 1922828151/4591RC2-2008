/*
 * func-name: ?OnBegin@ChangeSeatObserver@GameClient@@UAEXAAVEvent@@@Z_0
 * func-address: 0x101a2d10
 * callers: 0x10011856
 * callees: 0x1000a3a8, 0x1000adc6, 0x1000dafd, 0x1000ed13
 */

void __thiscall GameClient::ChangeSeatObserver::OnBegin(GameClient::ChangeSeatObserver *this, struct Event *a2)
{
  struct BinStream *Stream; // eax
  int v3; // ecx
  int v4; // edx
  struct Event *v5; // ecx
  GameClient::RobotManager *v6; // eax
  struct GameClient::Robot *Robot; // ebx
  struct BinStream *v8; // eax
  int v9; // ecx
  int v10; // edx
  struct Event *v11; // ecx
  GameClient::EstabManager *v12; // eax
  struct GameClient::Establishment *Establishment; // esi
  struct BinStream *v14; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // ecx
  int v18; // [esp-4h] [ebp-10h]
  unsigned int v19; // [esp-4h] [ebp-10h]

  Stream = Event::GetStream(a2);
  v3 = *((_DWORD *)Stream + 3);
  v4 = v3 + 4;
  if ( (unsigned int)(v3 + 4) > *((_DWORD *)Stream + 2) )
  {
    v5 = a2;
  }
  else
  {
    v5 = *(struct Event **)(v3 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v4;
  }
  v18 = (int)v5;
  v6 = GameClient::RobotManager::Instance();
  Robot = GameClient::RobotManager::GetRobot(v6, v18);
  if ( Robot )
  {
    v8 = Event::GetStream(a2);
    v9 = *((_DWORD *)v8 + 3);
    v10 = v9 + 4;
    if ( (unsigned int)(v9 + 4) > *((_DWORD *)v8 + 2) )
    {
      v11 = a2;
    }
    else
    {
      v11 = *(struct Event **)(v9 + *((_DWORD *)v8 + 1));
      *((_DWORD *)v8 + 3) = v10;
    }
    if ( *((struct Event **)Robot + 70) == v11 )
    {
      v19 = (unsigned int)v11;
      v12 = GameClient::EstabManager::Instance();
      Establishment = GameClient::EstabManager::GetEstablishment(v12, v19);
      if ( Establishment )
      {
        v14 = Event::GetStream(a2);
        v15 = *((_DWORD *)v14 + 3);
        v16 = v15 + 4;
        if ( (unsigned int)(v15 + 4) > *((_DWORD *)v14 + 2) )
        {
          (*(void (__thiscall **)(struct GameClient::Establishment *, struct GameClient::Robot *, struct Event *))(*(_DWORD *)Establishment + 124))(
            Establishment,
            Robot,
            a2);
        }
        else
        {
          v17 = *(_DWORD *)(v15 + *((_DWORD *)v14 + 1));
          *((_DWORD *)v14 + 3) = v16;
          (*(void (__thiscall **)(struct GameClient::Establishment *, struct GameClient::Robot *, int))(*(_DWORD *)Establishment + 124))(
            Establishment,
            Robot,
            v17);
        }
      }
    }
  }
}
