/*
 * func-name: ?PlaySkillAnim@Equip@GameClient@@QAEX_N@Z_0
 * func-address: 0x10035270
 * callers: 0x10019885
 * callees: none
 */

void __thiscall GameClient::Equip::PlaySkillAnim(GameClient::Equip *this, bool a2)
{
  *((_BYTE *)this + 184) = a2;
}
