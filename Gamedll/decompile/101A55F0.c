/*
 * func-name: ?AddSeat@Establishment@GameClient@@QAE_NPAVSeat@2@@Z_0
 * func-address: 0x101a55f0
 * callers: 0x100137eb
 * callees: 0x10003a6c, 0x100095b1
 */

char __thiscall GameClient::Establishment::AddSeat(GameClient::Establishment *this, struct GameClient::Seat *a2)
{
  int v3; // ecx
  int v4; // eax
  struct GameClient::Seat *v5; // ebx

  v3 = *((_DWORD *)this + 49);
  if ( v3 )
    v4 = (*((_DWORD *)this + 50) - v3) >> 2;
  else
    v4 = 0;
  v5 = a2;
  GameClient::Seat::SetSeatIndex(a2, v4);
  *((_DWORD *)v5 + 22) = this;
  sub_10003A6C((char *)this + 192, (int)&a2);
  return 1;
}
