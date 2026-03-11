/*
 * func-name: ??1?$ProductorTemplate@VFBullet@GameClient@@@GameClient@@UAE@XZ_0
 * func-address: 0x102248e0
 * callers: 0x100172ce
 * callees: none
 */

void __thiscall GameClient::ProductorTemplate<GameClient::FBullet>::~ProductorTemplate<GameClient::FBullet>(
        GameClient::Productor *this)
{
  *(_DWORD *)this = &GameClient::ProductorTemplate<GameClient::FBullet>::`vftable';
  GameClient::Productor::~Productor(this);
}
