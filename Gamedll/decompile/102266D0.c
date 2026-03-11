/*
 * func-name: ??1?$ProductorTemplate@VFDamageEquip@GameClient@@@GameClient@@UAE@XZ_0
 * func-address: 0x102266d0
 * callers: 0x10006e8d
 * callees: none
 */

void __thiscall GameClient::ProductorTemplate<GameClient::FDamageEquip>::~ProductorTemplate<GameClient::FDamageEquip>(
        GameClient::Productor *this)
{
  *(_DWORD *)this = &GameClient::ProductorTemplate<GameClient::FDamageEquip>::`vftable';
  GameClient::Productor::~Productor(this);
}
