/*
 * func-name: ?SetLocation@Seat@GameClient@@QAEXABVVector@@@Z_0
 * func-address: 0x1011e7e0
 * callers: 0x10017fcb
 * callees: none
 */

void __thiscall GameClient::Seat::SetLocation(GameClient::Seat *this, const struct Vector *a2)
{
  *((_DWORD *)this + 25) = *(_DWORD *)a2;
  *((_DWORD *)this + 26) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 27) = *((_DWORD *)a2 + 2);
}
