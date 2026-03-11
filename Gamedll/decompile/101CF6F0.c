/*
 * func-name: ??0ACapability@GameClient@@QAE@K@Z_0
 * func-address: 0x101cf6f0
 * callers: 0x10009d59
 * callees: 0x10001154
 */

GameClient::ACapability *__thiscall GameClient::ACapability::ACapability(
        GameClient::ACapability *this,
        unsigned int a2)
{
  GameClient::Aura::Aura(this, a2);
  *(_DWORD *)this = &GameClient::ACapability::`vftable';
  return this;
}
