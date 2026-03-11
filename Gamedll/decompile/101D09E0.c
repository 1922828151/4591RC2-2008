/*
 * func-name: ?Cast@ASummon@GameClient@@UAEXM@Z_0
 * func-address: 0x101d09e0
 * callers: 0x100188db
 * callees: 0x10005c40
 */

void __thiscall GameClient::ASummon::Cast(GameClient::ASummon *this, float a2)
{
  if ( *((_DWORD *)this + 8) )
    GameClient::Aura::Cast(this, a2);
}
