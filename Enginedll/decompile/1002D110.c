/*
 * func-name: sub_1002D110
 * func-address: 0x1002d110
 * callers: 0x100310b0
 * callees: 0x10026cc0
 */

_DWORD *__cdecl sub_1002D110(_DWORD *a1, _DWORD *a2)
{
  _DWORD *result; // eax

  result = a1;
  if ( a1 )
  {
    *a1 = *a2;
    return sub_10026CC0(a1 + 1, (int)(a2 + 1));
  }
  return result;
}
