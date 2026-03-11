/*
 * func-name: ??1?$ProductorTemplate@VFADamage@GameClient@@@GameClient@@UAE@XZ_0
 * func-address: 0x10247d30
 * callers: 0x10010eb5
 * callees: none
 */

void __thiscall GameClient::ProductorTemplate<GameClient::FADamage>::~ProductorTemplate<GameClient::FADamage>(
        GameClient::Productor *this)
{
  *(_DWORD *)this = &GameClient::ProductorTemplate<GameClient::FADamage>::`vftable';
  GameClient::Productor::~Productor(this);
}
