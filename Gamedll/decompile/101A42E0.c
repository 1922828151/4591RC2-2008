/*
 * func-name: ??0Establishment@GameClient@@QAE@K@Z_0
 * func-address: 0x101a42e0
 * callers: 0x10005a60
 * callees: 0x1000d3e6, 0x10016fef
 */

GameClient::Establishment *__thiscall GameClient::Establishment::Establishment(
        GameClient::Establishment *this,
        unsigned int a2)
{
  GameClient::WorldObject::WorldObject(this, a2);
  GameClient::DamageUnit::DamageUnit((GameClient::Establishment *)((char *)this + 148));
  *(_DWORD *)this = &GameClient::Establishment::`vftable'{for `GameClient::WorldObject'};
  *((_DWORD *)this + 37) = &GameClient::Establishment::`vftable'{for `GameClient::DamageUnit'};
  *((_DWORD *)this + 42) = 0;
  *((_BYTE *)this + 172) = 0;
  *((_DWORD *)this + 49) = 0;
  *((_DWORD *)this + 50) = 0;
  *((_DWORD *)this + 51) = 0;
  std::vector<ModelFrame *>::vector<ModelFrame *>((char *)this + 208);
  std::vector<ModelFrame *>::vector<ModelFrame *>((char *)this + 224);
  *((_DWORD *)this + 61) = 0;
  *((_DWORD *)this + 62) = 0;
  *((_DWORD *)this + 63) = 0;
  *((_DWORD *)this + 65) = 0;
  *((_DWORD *)this + 66) = 0;
  *((_DWORD *)this + 67) = 0;
  std::string::string((char *)this + 272);
  *((_DWORD *)this + 75) = 0;
  *((_DWORD *)this + 77) = 0;
  *((_DWORD *)this + 80) = 0;
  *((float *)this + 82) = 0.0;
  *((float *)this + 83) = 0.0;
  *((float *)this + 84) = 0.0;
  *((_BYTE *)this + 348) = 0;
  *((_BYTE *)this + 372) = 0;
  *((_DWORD *)this + 95) = 0;
  *((_DWORD *)this + 96) = 0;
  *((_DWORD *)this + 97) = 0;
  *((_DWORD *)this + 98) = 0;
  *((_DWORD *)this + 99) = 0;
  std::string::string((char *)this + 400);
  std::string::string((char *)this + 428);
  *((_DWORD *)this + 76) = 0;
  *((_DWORD *)this + 78) = 0;
  return this;
}
