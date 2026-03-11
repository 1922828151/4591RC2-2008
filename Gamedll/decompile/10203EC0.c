/*
 * func-name: ?OnBegin@AddToGroupObserver@GameClient@@UAEXAAVEvent@@@Z_0
 * func-address: 0x10203ec0
 * callers: 0x10015c8a
 * callees: 0x10003d82, 0x1001576c, 0x10017c29, 0x102c9d62, 0x102ca13e
 */

void __thiscall GameClient::AddToGroupObserver::OnBegin(GameClient::AddToGroupObserver *this, struct Event *a2)
{
  struct BinStream *Stream; // esi
  int v3; // eax
  unsigned int v4; // edx
  int v5; // eax
  size_t v6; // edi
  int v7; // eax
  int v8; // ecx
  unsigned int v9; // eax
  int v10; // ebp
  int v11; // ecx
  int v12; // edi
  int v13; // ecx
  int v14; // ecx
  int v15; // edx
  int v16; // ecx
  int v17; // [esp-4h] [ebp-50h]
  int v18; // [esp+14h] [ebp-38h]
  int v19; // [esp+18h] [ebp-34h]
  int v20; // [esp+1Ch] [ebp-30h]
  _BYTE v21[28]; // [esp+20h] [ebp-2Ch] BYREF
  int v22; // [esp+48h] [ebp-4h]

  std::string::string(v21);
  v22 = 0;
  Stream = Event::GetStream(a2);
  v3 = *((_DWORD *)Stream + 3);
  v4 = *((_DWORD *)Stream + 2);
  if ( v3 + 4 <= v4 )
  {
    v18 = *(_DWORD *)(v3 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v3 + 4;
  }
  v5 = *((_DWORD *)Stream + 3);
  if ( v5 + 4 <= v4 )
  {
    v19 = *(_DWORD *)(v5 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v5 + 4;
  }
  v6 = sub_10003D82();
  v7 = *((_DWORD *)Stream + 3);
  if ( v7 + v6 <= *((_DWORD *)Stream + 2) )
  {
    memcpy(byte_103B6158, (const void *)(v7 + *((_DWORD *)Stream + 1)), v6);
    byte_103B6158[v6] = 0;
    std::string::operator=(v21, byte_103B6158);
    *((_DWORD *)Stream + 3) += v6;
  }
  v8 = *((_DWORD *)Stream + 3);
  v9 = *((_DWORD *)Stream + 2);
  if ( v8 + 4 > v9 )
  {
    v10 = v18;
  }
  else
  {
    v10 = *(_DWORD *)(v8 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v8 + 4;
  }
  v11 = *((_DWORD *)Stream + 3);
  if ( v11 + 4 > v9 )
  {
    v12 = v18;
  }
  else
  {
    v12 = *(_DWORD *)(v11 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v11 + 4;
  }
  v13 = *((_DWORD *)Stream + 3);
  if ( v13 + 1 <= v9 )
  {
    LOBYTE(v20) = *(_BYTE *)(v13 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v13 + 1;
  }
  v14 = *((_DWORD *)Stream + 3);
  v15 = v14 + 4;
  if ( v14 + 4 > v9 )
  {
    v16 = v18;
  }
  else
  {
    v16 = *(_DWORD *)(v14 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v15;
  }
  v17 = v16;
  GameClient::GroupManager::Instance();
  GameClient::GroupManager::AddToGroup(v18, v19, (int)v21, v12, v10, v20, v17);
  v22 = -1;
  std::string::~string(v21);
}
