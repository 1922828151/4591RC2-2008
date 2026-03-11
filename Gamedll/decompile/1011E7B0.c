/*
 * func-name: ?GetSeatID@Seat@GameClient@@QAEKXZ_0
 * func-address: 0x1011e7b0
 * callers: 0x100149bb
 * callees: none
 */

unsigned int __thiscall GameClient::Seat::GetSeatID(GameClient::Seat *this)
{
  return *((_DWORD *)this + 21);
}
