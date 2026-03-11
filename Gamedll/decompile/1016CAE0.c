/*
 * func-name: ??0FNonControlledEstab@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x1016cae0
 * callers: 0x1000d189
 * callees: 0x10018fb1
 */

GameClient::FNonControlledEstab *__thiscall GameClient::FNonControlledEstab::FNonControlledEstab(
        GameClient::FNonControlledEstab *this,
        const struct GameClient::FNonControlledEstab *a2)
{
  GameClient::FEstablishment::FEstablishment(this, a2);
  *(_DWORD *)this = &GameClient::FNonControlledEstab::`vftable';
  *((_BYTE *)this + 516) = *((_BYTE *)a2 + 516);
  return this;
}
