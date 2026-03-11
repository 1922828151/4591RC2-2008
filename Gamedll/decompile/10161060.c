/*
 * func-name: ?DisableSkill@Item@GameClient@@QAEXXZ_0
 * func-address: 0x10161060
 * callers: 0x1000921e
 * callees: none
 */

void __thiscall GameClient::Item::DisableSkill(GameClient::Item *this)
{
  *((_DWORD *)this + 194) = -1;
}
