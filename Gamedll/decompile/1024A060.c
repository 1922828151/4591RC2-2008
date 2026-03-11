/*
 * func-name: ??1?$ProductorTemplate@VFASummon@GameClient@@@GameClient@@UAE@XZ_0
 * func-address: 0x1024a060
 * callers: 0x10010ac8
 * callees: none
 */

void __thiscall GameClient::ProductorTemplate<GameClient::FASummon>::~ProductorTemplate<GameClient::FASummon>(
        GameClient::Productor *this)
{
  *(_DWORD *)this = &GameClient::ProductorTemplate<GameClient::FASummon>::`vftable';
  GameClient::Productor::~Productor(this);
}
