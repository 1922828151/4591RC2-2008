/*
 * func-name: ??0FARepair@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101d03b0
 * callers: 0x1000beab
 * callees: 0x1000ed77
 */

GameClient::FARepair *__thiscall GameClient::FARepair::FARepair(
        GameClient::FARepair *this,
        const struct GameClient::FARepair *a2)
{
  GameClient::FARepair *result; // eax

  GameClient::FAura::FAura(this, a2);
  *(_DWORD *)this = &GameClient::FARepair::`vftable';
  *((_DWORD *)this + 65) = *((_DWORD *)a2 + 65);
  *((_DWORD *)this + 66) = *((_DWORD *)a2 + 66);
  *((float *)this + 67) = *((float *)a2 + 67);
  result = this;
  *((float *)this + 68) = *((float *)a2 + 68);
  *((float *)this + 69) = *((float *)a2 + 69);
  return result;
}
