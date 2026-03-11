/*
 * func-name: ??0FADamage@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101cfa90
 * callers: 0x10007e55
 * callees: 0x1000ed77
 */

GameClient::FADamage *__thiscall GameClient::FADamage::FADamage(
        GameClient::FADamage *this,
        const struct GameClient::FADamage *a2)
{
  GameClient::FAura::FAura(this, a2);
  *(_DWORD *)this = &GameClient::FADamage::`vftable';
  *((float *)this + 65) = *((float *)a2 + 65);
  *((_DWORD *)this + 66) = *((_DWORD *)a2 + 66);
  return this;
}
