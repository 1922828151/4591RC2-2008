/*
 * func-name: ?GetSeatIndex@Seat@GameClient@@QAEJXZ_0
 * func-address: 0x101b2d40
 * callers: 0x10012a58
 * callees: none
 */

int __thiscall GameClient::Seat::GetSeatIndex(GameClient::Seat *this)
{
  return *((_DWORD *)this + 3);
}
