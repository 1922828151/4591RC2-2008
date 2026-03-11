/*
 * func-name: ??0FBooty@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10147ba0
 * callers: 0x100042af
 * callees: 0x10019a97
 */

GameClient::FBooty *__thiscall GameClient::FBooty::FBooty(
        GameClient::FBooty *this,
        const struct GameClient::FBooty *a2)
{
  GameClient::Flyweight::Flyweight(this, a2);
  *(_DWORD *)this = &GameClient::FBooty::`vftable';
  *((float *)this + 27) = *((float *)a2 + 27);
  *((float *)this + 28) = *((float *)a2 + 28);
  *((_DWORD *)this + 29) = &Volume::`vftable';
  *((_DWORD *)this + 30) = *((_DWORD *)a2 + 30);
  *((_DWORD *)this + 31) = *((_DWORD *)a2 + 31);
  *((_DWORD *)this + 32) = *((_DWORD *)a2 + 32);
  *((_DWORD *)this + 29) = &BBox::`vftable';
  *((_DWORD *)this + 33) = *((_DWORD *)a2 + 33);
  *((_DWORD *)this + 34) = *((_DWORD *)a2 + 34);
  *((_DWORD *)this + 35) = *((_DWORD *)a2 + 35);
  *((_DWORD *)this + 36) = *((_DWORD *)a2 + 36);
  *((_DWORD *)this + 37) = *((_DWORD *)a2 + 37);
  *((_DWORD *)this + 38) = *((_DWORD *)a2 + 38);
  std::string::string((char *)this + 156, (char *)a2 + 156);
  return this;
}
