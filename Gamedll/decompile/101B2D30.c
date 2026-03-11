/*
 * func-name: ?SetSeatIndex@Seat@GameClient@@QAEXJ@Z_0
 * func-address: 0x101b2d30
 * callers: 0x100095b1
 * callees: none
 */

void __thiscall GameClient::Seat::SetSeatIndex(GameClient::Seat *this, int a2)
{
  *((_DWORD *)this + 3) = a2;
}
