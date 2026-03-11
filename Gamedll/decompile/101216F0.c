/*
 * func-name: sub_101216F0
 * func-address: 0x101216f0
 * callers: 0x1001436c
 * callees: none
 */

_DWORD *__thiscall sub_101216F0(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax
  int v3; // ecx

  result = this;
  v3 = this[3];
  if ( (unsigned int)(v3 + 4) <= result[2] )
  {
    *a2 = *(_DWORD *)(v3 + result[1]);
    result[3] += 4;
  }
  return result;
}
