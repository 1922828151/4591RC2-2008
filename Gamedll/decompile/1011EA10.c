/*
 * func-name: ?SetFreeCamera@Seat@GameClient@@QAEX_N@Z_0
 * func-address: 0x1011ea10
 * callers: 0x10016b2b
 * callees: none
 */

void __thiscall GameClient::Seat::SetFreeCamera(GameClient::Seat *this, bool a2)
{
  *((_BYTE *)this + 344) = a2;
}
