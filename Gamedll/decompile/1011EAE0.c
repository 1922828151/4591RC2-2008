/*
 * func-name: ?GetLocation@Establishment@GameClient@@UBE?AVVector@@XZ_0
 * func-address: 0x1011eae0
 * callers: 0x1000c67b
 * callees: none
 */

_DWORD *__thiscall GameClient::Establishment::GetLocation(_DWORD *this, _DWORD *a2)
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
