/*
 * func-name: sub_10014D30
 * func-address: 0x10014d30
 * callers: 0x10033dc0
 * callees: none
 */

_WORD *__thiscall sub_10014D30(_WORD *this, int a2)
{
  _WORD *result; // eax
  __int16 v3; // cx
  int v4; // edx
  unsigned __int16 v5; // cx

  result = this;
  v3 = this[10];
  if ( v3 )
  {
    v4 = *((_DWORD *)result + 3);
    v5 = v3 - 1;
    result[10] = v5;
    **(_DWORD **)(v4 + 4 * v5) = a2;
  }
  return result;
}
