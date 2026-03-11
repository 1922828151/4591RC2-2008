/*
 * func-name: ??1FARetrieval@GameClient@@UAE@XZ_0
 * func-address: 0x10249150
 * callers: 0x1001a1a4
 * callees: none
 */

void __thiscall GameClient::FARetrieval::~FARetrieval(GameClient::FAura *this)
{
  *(_DWORD *)this = &GameClient::FARetrieval::`vftable';
  GameClient::FAura::~FAura(this);
}
