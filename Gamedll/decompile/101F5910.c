/*
 * func-name: sub_101F5910
 * func-address: 0x101f5910
 * callers: 0x10017e04
 * callees: 0x100013d9
 */

_DWORD *__thiscall sub_101F5910(_DWORD *this)
{
  _DWORD *v2; // esi
  int v3; // eax
  _DWORD *result; // eax

  v2 = this + 1;
  *this = 0;
  v3 = sub_100013D9();
  v2[1] = v3;
  *(_BYTE *)(v3 + 21) = 1;
  *(_DWORD *)(v2[1] + 4) = v2[1];
  *(_DWORD *)v2[1] = v2[1];
  *(_DWORD *)(v2[1] + 8) = v2[1];
  result = this;
  v2[2] = 0;
  return result;
}
