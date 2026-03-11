/*
 * func-name: sub_1001E5A0
 * func-address: 0x1001e5a0
 * callers: 0x1001e400, 0x1001e710
 * callees: 0x1000bfa0
 */

_DWORD *__thiscall sub_1001E5A0(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax

  result = a2;
  if ( a2 )
    return sub_1000BFA0(a2, this);
  return result;
}
