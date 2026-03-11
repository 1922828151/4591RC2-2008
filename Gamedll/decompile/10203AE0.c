/*
 * func-name: ?OnBegin@DismissGroupObserver@GameClient@@UAEXAAVEvent@@@Z_0
 * func-address: 0x10203ae0
 * callers: 0x10012a12
 * callees: 0x10017c29, 0x1001a6b8
 */

void __thiscall GameClient::DismissGroupObserver::OnBegin(GameClient::DismissGroupObserver *this, struct Event *a2)
{
  struct BinStream *Stream; // eax
  int v3; // ecx
  GameClient::GroupManager *v4; // eax
  GameClient::GroupManager *v5; // eax
  unsigned int v6; // [esp-4h] [ebp-4h]

  Stream = Event::GetStream(a2);
  v3 = *((_DWORD *)Stream + 3);
  if ( (unsigned int)(v3 + 4) > *((_DWORD *)Stream + 2) )
  {
    v5 = GameClient::GroupManager::Instance();
    GameClient::GroupManager::Dismiss(v5, (unsigned int)a2);
  }
  else
  {
    v6 = *(_DWORD *)(v3 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v3 + 4;
    v4 = GameClient::GroupManager::Instance();
    GameClient::GroupManager::Dismiss(v4, v6);
  }
}
