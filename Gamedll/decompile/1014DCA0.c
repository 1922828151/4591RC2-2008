/*
 * func-name: ?GetLocation@DamageEquip@GameClient@@UBE?AVVector@@XZ_0
 * func-address: 0x1014dca0
 * callers: 0x100193fd
 * callees: none
 */

_DWORD *__thiscall GameClient::DamageEquip::GetLocation(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax
  int v3; // edx
  int v4; // ecx

  result = a2;
  *a2 = *(this - 189);
  v3 = *(this - 188);
  v4 = *(this - 187);
  a2[1] = v3;
  a2[2] = v4;
  return result;
}
