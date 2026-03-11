/*
 * func-name: ??0FAMovement@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101d0000
 * callers: 0x100015cd
 * callees: 0x1000ed77
 */

GameClient::FAMovement *__thiscall GameClient::FAMovement::FAMovement(
        GameClient::FAMovement *this,
        const struct GameClient::FAMovement *a2)
{
  GameClient::FAMovement *result; // eax

  GameClient::FAura::FAura(this, a2);
  *(_DWORD *)this = &GameClient::FAMovement::`vftable';
  *((_BYTE *)this + 260) = *((_BYTE *)a2 + 260);
  *((float *)this + 66) = *((float *)a2 + 66);
  result = this;
  *((float *)this + 67) = *((float *)a2 + 67);
  return result;
}
