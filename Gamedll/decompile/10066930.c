/*
 * func-name: ??0FuncManager@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10066930
 * callers: 0x10007a13
 * callees: 0x10007851
 */

GameClient::FuncManager *__thiscall GameClient::FuncManager::FuncManager(
        GameClient::FuncManager *this,
        const struct GameClient::FuncManager *a2)
{
  *(_DWORD *)this = &GameClient::FuncManager::`vftable';
  sub_10007851((int)a2 + 4);
  return this;
}
