/*
 * func-name: ??0ASatelliteCapability@GameClient@@QAE@K@Z_0
 * func-address: 0x101d05d0
 * callers: 0x100087e7
 * callees: 0x10009d59
 */

GameClient::ASatelliteCapability *__thiscall GameClient::ASatelliteCapability::ASatelliteCapability(
        GameClient::ASatelliteCapability *this,
        unsigned int a2)
{
  GameClient::ACapability::ACapability(this, a2);
  *(_DWORD *)this = &GameClient::ASatelliteCapability::`vftable';
  return this;
}
