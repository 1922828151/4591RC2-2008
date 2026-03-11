/*
 * func-name: ??0Aura@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10140d30
 * callers: 0x10014cd6
 * callees: 0x1000b53c
 */

GameClient::Aura *__thiscall GameClient::Aura::Aura(GameClient::Aura *this, const struct GameClient::Aura *a2)
{
  *(_DWORD *)this = &GameClient::DataObject::`vftable';
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  *(_DWORD *)this = &GameClient::Aura::`vftable';
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 5);
  *((float *)this + 6) = *((float *)a2 + 6);
  *((float *)this + 7) = *((float *)a2 + 7);
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  sub_1000B53C((char *)a2 + 36);
  return this;
}
