/*
 * func-name: ??0ChatManager@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10079010
 * callers: 0x10002aef
 * callees: 0x1000c211, 0x10010d93
 */

GameClient::ChatManager *__thiscall GameClient::ChatManager::ChatManager(
        GameClient::ChatManager *this,
        const struct GameClient::ChatManager *a2)
{
  *(_DWORD *)this = &GameClient::ChatManager::`vftable';
  sub_1000C211((int)a2 + 4);
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
  *((_DWORD *)this + 5) = &GameClient::CAnalyzeSystem::`vftable';
  sub_10010D93((int)a2 + 24);
  return this;
}
