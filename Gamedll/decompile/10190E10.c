/*
 * func-name: sub_10190E10
 * func-address: 0x10190e10
 * callers: 0x10012d50
 * callees: none
 */

_DWORD *__thiscall sub_10190E10(_DWORD *this, _DWORD *a2)
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
