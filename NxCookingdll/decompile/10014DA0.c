/*
 * func-name: sub_10014DA0
 * func-address: 0x10014da0
 * callers: 0x100122c0, 0x10013f60
 * callees: none
 */

_DWORD *__thiscall sub_10014DA0(_DWORD *this, unsigned int a2)
{
  _DWORD *result; // eax
  int v3; // ecx

  result = this;
  v3 = *this;
  if ( a2 < *(_DWORD *)(v3 + 8) )
  {
    *(_DWORD *)(v3 + 4) = a2;
    result[4] = *(_DWORD *)*result + *(_DWORD *)(*result + 4);
  }
  return result;
}
