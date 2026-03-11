/*
 * func-name: ?OnBegin@EstabDoorState@GameClient@@UAEXAAVEvent@@@Z_0
 * func-address: 0x101a0fc0
 * callers: 0x1000a4ac
 * callees: 0x1000adc6, 0x1000dafd, 0x10018845
 */

void __thiscall GameClient::EstabDoorState::OnBegin(GameClient::EstabDoorState *this, struct Event *a2)
{
  struct BinStream *Stream; // eax
  int v3; // ecx
  int v4; // edx
  struct Event *v5; // ecx
  GameClient::EstabManager *v6; // eax
  struct BinStream *v7; // eax
  int v8; // ecx
  unsigned int v9; // [esp-4h] [ebp-Ch]
  int v10; // [esp-4h] [ebp-Ch]

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
  v9 = (unsigned int)v5;
  v6 = GameClient::EstabManager::Instance();
  if ( GameClient::EstabManager::GetEstablishment(v6, v9) )
  {
    v7 = Event::GetStream(a2);
    v8 = *((_DWORD *)v7 + 3);
    if ( (unsigned int)(v8 + 4) > *((_DWORD *)v7 + 2) )
    {
      GameClient::EstabDoor::SetDoorState((int)a2);
    }
    else
    {
      v10 = *(_DWORD *)(v8 + *((_DWORD *)v7 + 1));
      *((_DWORD *)v7 + 3) = v8 + 4;
      GameClient::EstabDoor::SetDoorState(v10);
    }
  }
}
