/*
 * func-name: ?SyncSeatRotation@Seat@GameClient@@QAEXABVVector@@@Z_0
 * func-address: 0x1011e820
 * callers: 0x1000e953
 * callees: none
 */

void __thiscall GameClient::Seat::SyncSeatRotation(GameClient::Seat *this, const struct Vector *a2)
{
  *((_DWORD *)this + 80) = *(_DWORD *)a2;
  *((_DWORD *)this + 81) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 82) = *((_DWORD *)a2 + 2);
}
