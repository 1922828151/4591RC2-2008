/*
 * func-name: sub_10145600
 * func-address: 0x10145600
 * callers: 0x100011ea
 * callees: none
 */

_DWORD *__thiscall sub_10145600(_DWORD *this, _BYTE *a2)
{
  _DWORD *result; // eax
  int v3; // ecx

  result = this;
  v3 = this[3];
  if ( (unsigned int)(v3 + 1) <= result[2] )
  {
    *a2 = *(_BYTE *)(v3 + result[1]);
    ++result[3];
  }
  return result;
}
