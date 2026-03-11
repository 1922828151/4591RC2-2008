/*
 * func-name: ?SetOwnerDamaged@Seat@GameClient@@QAEX_N@Z_0
 * func-address: 0x1011ea30
 * callers: 0x1000b00a
 * callees: none
 */

void __thiscall GameClient::Seat::SetOwnerDamaged(GameClient::Seat *this, bool a2)
{
  *((_BYTE *)this + 346) = a2;
}
