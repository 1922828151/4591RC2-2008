/*
 * func-name: ?GetSeat@Establishment@GameClient@@QAEPAVSeat@2@H@Z_0
 * func-address: 0x101a1f40
 * callers: 0x1000290a
 * callees: none
 */

struct GameClient::Seat *__thiscall GameClient::Establishment::GetSeat(
        GameClient::Establishment *this,
        unsigned int a2)
{
  int v3; // ecx

  v3 = *((_DWORD *)this + 49);
  if ( v3 && a2 < (*((_DWORD *)this + 50) - v3) >> 2 )
    return *(struct GameClient::Seat **)(*((_DWORD *)this + 49) + 4 * a2);
  else
    return 0;
}
