/*
 * func-name: ??0FAEnergy@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10248370
 * callers: 0x1000e4ee
 * callees: 0x1000ed77
 */

GameClient::FAEnergy *__thiscall GameClient::FAEnergy::FAEnergy(
        GameClient::FAEnergy *this,
        const struct GameClient::FAEnergy *a2)
{
  GameClient::FAura::FAura(this, a2);
  *(_DWORD *)this = &GameClient::FAEnergy::`vftable';
  *((_DWORD *)this + 65) = *((_DWORD *)a2 + 65);
  *((_DWORD *)this + 66) = *((_DWORD *)a2 + 66);
  return this;
}
