/*
 * func-name: ?OnBegin@ChangeLeaderObserver@GameClient@@UAEXAAVEvent@@@Z_0
 * func-address: 0x10203a70
 * callers: 0x100157a3
 * callees: 0x10017260, 0x10017c29
 */

void __thiscall GameClient::ChangeLeaderObserver::OnBegin(GameClient::ChangeLeaderObserver *this, struct Event *a2)
{
  struct BinStream *Stream; // eax
  int v3; // ecx
  unsigned int v4; // esi
  int v5; // edi
  int v6; // ecx
  GameClient::GroupManager *v7; // eax
  GameClient::GroupManager *v8; // eax
  unsigned int v9; // [esp-4h] [ebp-Ch]

  Stream = Event::GetStream(a2);
  v3 = *((_DWORD *)Stream + 3);
  v4 = *((_DWORD *)Stream + 2);
  if ( v3 + 4 > v4 )
  {
    LOBYTE(v5) = (_BYTE)a2;
  }
  else
  {
    v5 = *(_DWORD *)(v3 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v3 + 4;
  }
  v6 = *((_DWORD *)Stream + 3);
  if ( v6 + 4 > v4 )
  {
    v8 = GameClient::GroupManager::Instance();
    GameClient::GroupManager::ChangeLeader(v8, v5, (unsigned int)a2);
  }
  else
  {
    v9 = *(_DWORD *)(v6 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v6 + 4;
    v7 = GameClient::GroupManager::Instance();
    GameClient::GroupManager::ChangeLeader(v7, v5, v9);
  }
}
