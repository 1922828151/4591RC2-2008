/*
 * func-name: ??1FADamage@GameClient@@UAE@XZ_0
 * func-address: 0x10247c30
 * callers: 0x10010361
 * callees: none
 */

void __thiscall GameClient::FADamage::~FADamage(GameClient::FAura *this)
{
  *(_DWORD *)this = &GameClient::FADamage::`vftable';
  GameClient::FAura::~FAura(this);
}
