/*
 * func-name: ??1?$ProductorTemplate@VFTransformItem@GameClient@@@GameClient@@UAE@XZ_0
 * func-address: 0x10241f60
 * callers: 0x1000f0d8
 * callees: none
 */

void __thiscall GameClient::ProductorTemplate<GameClient::FTransformItem>::~ProductorTemplate<GameClient::FTransformItem>(
        GameClient::Productor *this)
{
  *(_DWORD *)this = &GameClient::ProductorTemplate<GameClient::FTransformItem>::`vftable';
  GameClient::Productor::~Productor(this);
}
