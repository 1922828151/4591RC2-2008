/*
 * func-name: ?OnBegin@UpdateCorpCmdObserver@GameClient@@UAEXAAVEvent@@@Z_0
 * func-address: 0x10203db0
 * callers: 0x1001364c
 * callees: 0x10003d82, 0x1000df08, 0x10017c29, 0x102c9d62, 0x102ca13e
 */

void __thiscall GameClient::UpdateCorpCmdObserver::OnBegin(GameClient::UpdateCorpCmdObserver *this, struct Event *a2)
{
  struct BinStream *Stream; // esi
  int v3; // ecx
  int v4; // eax
  size_t v5; // edi
  int v6; // eax
  int v7; // [esp+Ch] [ebp-38h] BYREF
  float v8; // [esp+10h] [ebp-34h]
  float v9; // [esp+14h] [ebp-30h]
  _BYTE v10[28]; // [esp+18h] [ebp-2Ch] BYREF
  int v11; // [esp+40h] [ebp-4h]

  *(float *)&v7 = 0.0;
  v8 = 0.0;
  v9 = 0.0;
  std::string::string(v10);
  v11 = 0;
  Stream = Event::GetStream(a2);
  v3 = *((_DWORD *)Stream + 3);
  if ( (unsigned int)(v3 + 12) <= *((_DWORD *)Stream + 2) )
  {
    v4 = v3 + *((_DWORD *)Stream + 1);
    v7 = *(int *)v4;
    v8 = *(float *)(v4 + 4);
    v9 = *(float *)(v4 + 8);
    *((_DWORD *)Stream + 3) += 12;
  }
  v5 = sub_10003D82();
  v6 = *((_DWORD *)Stream + 3);
  if ( v6 + v5 <= *((_DWORD *)Stream + 2) )
  {
    memcpy(byte_103B6158, (const void *)(v6 + *((_DWORD *)Stream + 1)), v5);
    byte_103B6158[v5] = 0;
    std::string::operator=(v10, byte_103B6158);
    *((_DWORD *)Stream + 3) += v5;
  }
  GameClient::GroupManager::Instance();
  GameClient::GroupManager::UpdateCorpCmd((int)&v7, v10);
  v11 = -1;
  std::string::~string(v10);
}
