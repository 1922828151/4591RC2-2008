/*
 * func-name: ?GetLocation@Robot@GameClient@@UBE?AVVector@@XZ_0
 * func-address: 0x10172900
 * callers: 0x10005718
 * callees: none
 */

_DWORD *__thiscall GameClient::Robot::GetLocation(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax
  int v3; // edx
  int v4; // ecx

  result = a2;
  *a2 = *(this - 31);
  v3 = *(this - 30);
  v4 = *(this - 29);
  a2[1] = v3;
  a2[2] = v4;
  return result;
}
