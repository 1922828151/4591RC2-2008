/*
 * func-name: sub_1014EEB0
 * func-address: 0x1014eeb0
 * callers: 0x10017eb3
 * callees: none
 */

_DWORD *__thiscall sub_1014EEB0(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax
  int v3; // ecx
  _DWORD *v4; // edx

  result = this;
  v3 = this[3];
  if ( (unsigned int)(v3 + 12) <= result[2] )
  {
    v4 = (_DWORD *)(v3 + result[1]);
    *a2 = *v4;
    a2[1] = v4[1];
    a2[2] = v4[2];
    result[3] += 12;
  }
  return result;
}
