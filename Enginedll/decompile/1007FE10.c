/*
 * func-name: sub_1007FE10
 * func-address: 0x1007fe10
 * callers: 0x1000d860
 * callees: none
 */

_DWORD *__thiscall sub_1007FE10(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax
  int v3; // edx

  result = this;
  v3 = a2[4];
  if ( v3 )
    ++*(_DWORD *)(v3 + 4);
  this[4] = a2[4];
  this[5] = a2[5];
  *this = *a2;
  this[1] = a2[1];
  this[2] = a2[2];
  this[3] = a2[3];
  return result;
}
