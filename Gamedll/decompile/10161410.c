/*
 * func-name: ?CanUseSkill@Item@GameClient@@UAE_NXZ_0
 * func-address: 0x10161410
 * callers: 0x10003044
 * callees: none
 */

bool __thiscall GameClient::Item::CanUseSkill(GameClient::Item *this)
{
  return *((_DWORD *)this + 194) == -1;
}
