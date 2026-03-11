/*
 * func-name: ?GetLocalRotation@Seat@GameClient@@QAE?AVVector@@XZ_0
 * func-address: 0x1011e960
 * callers: 0x1001ac0d
 * callees: none
 */

_DWORD *__thiscall GameClient::Seat::GetLocalRotation(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax
  int v3; // edx
  int v4; // ecx

  result = a2;
  *a2 = this[44];
  v3 = this[45];
  v4 = this[46];
  a2[1] = v3;
  a2[2] = v4;
  return result;
}
