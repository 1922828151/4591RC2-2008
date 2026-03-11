/*
 * func-name: ?ConfirmChangeSeat@Establishment@GameClient@@UAE_NPAVRobot@2@H@Z_0
 * func-address: 0x101a2110
 * callers: 0x100071c1
 * callees: 0x10003175
 */

bool __thiscall GameClient::Establishment::ConfirmChangeSeat(
        GameClient::Establishment *this,
        struct GameClient::Robot *a2,
        int a3)
{
  int v4; // ecx
  unsigned int v5; // edi

  v4 = *((_DWORD *)this + 49);
  v5 = *((_DWORD *)a2 + 71);
  if ( !v4 || v5 >= (*((_DWORD *)this + 50) - v4) >> 2 )
    return 0;
  GameClient::Seat::UnBoard(*(GameClient::Seat **)(*((_DWORD *)this + 49) + 4 * v5), a2, 1);
  return (*(int (__thiscall **)(GameClient::Establishment *, int, struct GameClient::Robot *))(*(_DWORD *)this + 116))(
           this,
           a3,
           a2);
}
