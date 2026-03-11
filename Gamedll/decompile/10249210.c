/*
 * func-name: ??1?$ProductorTemplate@VFARetrieval@GameClient@@@GameClient@@UAE@XZ_0
 * func-address: 0x10249210
 * callers: 0x10003fb2
 * callees: none
 */

void __thiscall GameClient::ProductorTemplate<GameClient::FARetrieval>::~ProductorTemplate<GameClient::FARetrieval>(
        GameClient::Productor *this)
{
  *(_DWORD *)this = &GameClient::ProductorTemplate<GameClient::FARetrieval>::`vftable';
  GameClient::Productor::~Productor(this);
}
