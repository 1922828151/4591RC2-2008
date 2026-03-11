/*
 * func-name: ??0FProductInfo@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10063fc0
 * callers: 0x10005ec5
 * callees: 0x10019a97
 */

GameClient::FProductInfo *__thiscall GameClient::FProductInfo::FProductInfo(
        GameClient::FProductInfo *this,
        const struct GameClient::FProductInfo *a2)
{
  GameClient::Flyweight::Flyweight(this, a2);
  *(_DWORD *)this = &GameClient::FProductInfo::`vftable';
  *((_DWORD *)this + 27) = *((_DWORD *)a2 + 27);
  *((_DWORD *)this + 28) = *((_DWORD *)a2 + 28);
  *((_DWORD *)this + 29) = *((_DWORD *)a2 + 29);
  std::string::string((char *)this + 120, (char *)a2 + 120);
  std::string::string((char *)this + 148, (char *)a2 + 148);
  std::string::string((char *)this + 176, (char *)a2 + 176);
  std::string::string((char *)this + 204, (char *)a2 + 204);
  std::string::string((char *)this + 232, (char *)a2 + 232);
  return this;
}
