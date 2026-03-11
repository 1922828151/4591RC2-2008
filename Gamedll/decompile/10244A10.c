/*
 * func-name: ??1?$ProductorTemplate@VFWeapon@GameClient@@@GameClient@@UAE@XZ_0
 * func-address: 0x10244a10
 * callers: 0x10013296
 * callees: none
 */

void __thiscall GameClient::ProductorTemplate<GameClient::FWeapon>::~ProductorTemplate<GameClient::FWeapon>(
        GameClient::Productor *this)
{
  *(_DWORD *)this = &GameClient::ProductorTemplate<GameClient::FWeapon>::`vftable';
  GameClient::Productor::~Productor(this);
}
