/*
 * func-name: ?IsInitiative@Aura@GameClient@@QBE_NXZ_0
 * func-address: 0x101d1730
 * callers: 0x10013660
 * callees: none
 */

bool __thiscall GameClient::Aura::IsInitiative(GameClient::Aura *this)
{
  return *(_DWORD *)(*((_DWORD *)this + 2) + 108) == 0;
}
