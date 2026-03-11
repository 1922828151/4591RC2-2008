/*
 * func-name: ?GetRotationAccel@Seat@GameClient@@QAE?AVVector@@XZ_0
 * func-address: 0x1011e900
 * callers: 0x100179d6
 * callees: none
 */

_DWORD *__thiscall GameClient::Seat::GetRotationAccel(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax
  int v3; // edx
  int v4; // ecx

  result = a2;
  *a2 = this[70];
  v3 = this[71];
  v4 = this[72];
  a2[1] = v3;
  a2[2] = v4;
  return result;
}
