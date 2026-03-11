/*
 * func-name: sub_1001E600
 * func-address: 0x1001e600
 * callers: 0x1001e4a0, 0x1001e7b0
 * callees: 0x1001e2b0
 */

_DWORD *__userpurge sub_1001E600@<eax>(_DWORD *a1@<esi>, _DWORD *a2)
{
  _DWORD *result; // eax

  result = a2;
  if ( a2 )
    return sub_1001E2B0(a1, a2);
  return result;
}
