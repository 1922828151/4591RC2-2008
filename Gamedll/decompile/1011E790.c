/*
 * func-name: ?SetOwner@Seat@GameClient@@QAEXPAVEstablishment@2@@Z_0
 * func-address: 0x1011e790
 * callers: 0x10010b2c
 * callees: none
 */

void __thiscall GameClient::Seat::SetOwner(GameClient::Seat *this, struct GameClient::Establishment *a2)
{
  *((_DWORD *)this + 22) = a2;
}
