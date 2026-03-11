/*
 * func-name: ?GetDriverSeat@ControlledEstab@GameClient@@QAEPAVSeat@2@XZ_0
 * func-address: 0x1019d030
 * callers: 0x10008e6d
 * callees: none
 */

struct GameClient::Seat *__thiscall GameClient::ControlledEstab::GetDriverSeat(GameClient::ControlledEstab *this)
{
  int v2; // edx
  int v4; // ecx
  unsigned int v5; // eax
  unsigned int v6; // edi

  v2 = *((_DWORD *)this + 115);
  if ( !v2 )
    return 0;
  v4 = *((_DWORD *)this + 49);
  if ( v4 )
    v5 = (*((_DWORD *)this + 50) - v4) >> 2;
  else
    v5 = 0;
  v6 = *(_DWORD *)(v2 + 516);
  if ( v5 <= v6 )
    return 0;
  if ( !v4 || v6 >= (*((_DWORD *)this + 50) - v4) >> 2 )
    _invalid_parameter_noinfo();
  return *(struct GameClient::Seat **)(*((_DWORD *)this + 49) + 4 * v6);
}
