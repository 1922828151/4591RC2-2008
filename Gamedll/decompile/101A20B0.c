/*
 * func-name: ?ConfirmBoard@Establishment@GameClient@@UAE_NHPAVRobot@2@@Z_0
 * func-address: 0x101a20b0
 * callers: 0x1000c031
 * callees: 0x10003d37
 */

bool __thiscall GameClient::Establishment::ConfirmBoard(
        GameClient::Establishment *this,
        int a2,
        struct GameClient::Robot *a3)
{
  int v4; // ecx

  return a2 >= 0
      && (v4 = *((_DWORD *)this + 49)) != 0
      && a2 < (unsigned int)((*((_DWORD *)this + 50) - v4) >> 2)
      && GameClient::Seat::Board(*(GameClient::Seat **)(*((_DWORD *)this + 49) + 4 * a2), a3);
}
