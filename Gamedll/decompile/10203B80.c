/*
 * func-name: ?OnBegin@UpdateGroupCmdObserver@GameClient@@UAEXAAVEvent@@@Z_0
 * func-address: 0x10203b80
 * callers: 0x100092eb
 * callees: 0x10008f3f, 0x10017c29
 */

void __thiscall GameClient::UpdateGroupCmdObserver::OnBegin(GameClient::UpdateGroupCmdObserver *this, struct Event *a2)
{
  struct BinStream *Stream; // eax
  int v3; // ecx
  unsigned int v4; // esi
  int v5; // ebp
  int v6; // ecx
  struct Event *v7; // ebx
  int v8; // ecx
  struct Event *v9; // edi
  int v10; // edx
  float *v11; // ecx
  GameClient::GroupManager *v12; // eax
  float v13; // [esp+4h] [ebp-Ch] BYREF
  float v14; // [esp+8h] [ebp-8h]
  float v15; // [esp+Ch] [ebp-4h]

  v13 = 0.0;
  v14 = 0.0;
  v15 = 0.0;
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
    v7 = a2;
  }
  else
  {
    v7 = *(struct Event **)(v6 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v6 + 4;
  }
  v8 = *((_DWORD *)Stream + 3);
  if ( v8 + 4 > v4 )
  {
    v9 = a2;
  }
  else
  {
    v9 = *(struct Event **)(v8 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v8 + 4;
  }
  v10 = *((_DWORD *)Stream + 3);
  if ( v10 + 12 <= v4 )
  {
    v11 = (float *)(v10 + *((_DWORD *)Stream + 1));
    v13 = *v11;
    v14 = v11[1];
    v15 = v11[2];
    *((_DWORD *)Stream + 3) += 12;
  }
  v12 = GameClient::GroupManager::Instance();
  GameClient::GroupManager::UpdateGroupCmd(v12, v5, (int)v7, (int)v9, (const struct Vector *)&v13);
}
