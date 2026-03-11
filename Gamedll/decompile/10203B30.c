/*
 * func-name: ?OnBegin@UpdateGroupMemberInfoObserver@GameClient@@UAEXAAVEvent@@@Z_0
 * func-address: 0x10203b30
 * callers: 0x1000c572
 * callees: 0x100155be, 0x10017c29
 */

void __thiscall GameClient::UpdateGroupMemberInfoObserver::OnBegin(
        GameClient::UpdateGroupMemberInfoObserver *this,
        struct Event *a2)
{
  struct BinStream *Stream; // eax
  int v3; // ecx
  int v4; // esi
  GameClient::GroupManager *v5; // eax
  struct BinStream *v6; // [esp-4h] [ebp-Ch]

  Stream = Event::GetStream(a2);
  v3 = *((_DWORD *)Stream + 3);
  if ( (unsigned int)(v3 + 4) > *((_DWORD *)Stream + 2) )
  {
    LOBYTE(v4) = (_BYTE)a2;
  }
  else
  {
    v4 = *(_DWORD *)(v3 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v3 + 4;
  }
  v6 = Event::GetStream(a2);
  v5 = GameClient::GroupManager::Instance();
  GameClient::GroupManager::UpdateGroupMemberInfo(v5, v4, v6);
}
