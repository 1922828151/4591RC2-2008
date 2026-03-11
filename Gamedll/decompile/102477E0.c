/*
 * func-name: ??1?$ProductorTemplate@VFACapability@GameClient@@@GameClient@@UAE@XZ_0
 * func-address: 0x102477e0
 * callers: 0x100177c9
 * callees: none
 */

void __thiscall GameClient::ProductorTemplate<GameClient::FACapability>::~ProductorTemplate<GameClient::FACapability>(
        GameClient::Productor *this)
{
  *(_DWORD *)this = &GameClient::ProductorTemplate<GameClient::FACapability>::`vftable';
  GameClient::Productor::~Productor(this);
}
