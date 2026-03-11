/*
 * func-name: sub_101458F0
 * func-address: 0x101458f0
 * callers: 0x1000b5c3
 * callees: none
 */

_DWORD *__thiscall sub_101458F0(_DWORD *this, float *a2)
{
  _DWORD *result; // eax
  int v3; // ecx

  result = this;
  v3 = this[3];
  if ( (unsigned int)(v3 + 4) <= result[2] )
  {
    *a2 = *(float *)(v3 + result[1]);
    result[3] += 4;
  }
  return result;
}
