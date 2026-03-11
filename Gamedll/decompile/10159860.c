/*
 * func-name: ?CanBeThrow@Equip@GameClient@@UAE_NXZ_0
 * func-address: 0x10159860
 * callers: 0x1000feed
 * callees: none
 */

bool __thiscall GameClient::Equip::CanBeThrow(GameClient::Equip *this)
{
  return *((_DWORD *)this + 63) == -1;
}
