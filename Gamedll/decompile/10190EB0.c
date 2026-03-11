/*
 * func-name: sub_10190EB0
 * func-address: 0x10190eb0
 * callers: 0x1000f5e7
 * callees: none
 */

_DWORD *__thiscall sub_10190EB0(_DWORD *this, _DWORD *a2)
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
