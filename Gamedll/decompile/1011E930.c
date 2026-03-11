/*
 * func-name: ?GetRotationSpeed@Seat@GameClient@@QAE?AVVector@@XZ_0
 * func-address: 0x1011e930
 * callers: 0x1000a551
 * callees: none
 */

_DWORD *__thiscall GameClient::Seat::GetRotationSpeed(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax
  int v3; // edx
  int v4; // ecx

  result = a2;
  *a2 = this[73];
  v3 = this[74];
  v4 = this[75];
  a2[1] = v3;
  a2[2] = v4;
  return result;
}
