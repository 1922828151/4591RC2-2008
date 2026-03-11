/*
 * func-name: ??0FSystemPart@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x100640d0
 * callers: 0x10011f27
 * callees: 0x10017bb1
 */

GameClient::FSystemPart *__thiscall GameClient::FSystemPart::FSystemPart(
        GameClient::FSystemPart *this,
        const struct GameClient::FSystemPart *a2)
{
  GameClient::FProduct::FProduct(this, a2);
  *(_DWORD *)this = &GameClient::FSystemPart::`vftable';
  *((_DWORD *)this + 49) = *((_DWORD *)a2 + 49);
  *((_DWORD *)this + 50) = *((_DWORD *)a2 + 50);
  *((_DWORD *)this + 51) = *((_DWORD *)a2 + 51);
  *((_DWORD *)this + 52) = *((_DWORD *)a2 + 52);
  std::string::string((char *)this + 212, (char *)a2 + 212);
  *((_DWORD *)this + 60) = *((_DWORD *)a2 + 60);
  std::string::string((char *)this + 244, (char *)a2 + 244);
  return this;
}
