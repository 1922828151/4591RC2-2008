/*
 * func-name: ?Cast@ADamage@GameClient@@UAEXM@Z_0
 * func-address: 0x101cf970
 * callers: 0x100030d0
 * callees: 0x10005c40
 */

void __thiscall GameClient::ADamage::Cast(GameClient::ADamage *this, float a2)
{
  if ( *((_DWORD *)this + 8) )
    GameClient::Aura::Cast(this, a2);
}
