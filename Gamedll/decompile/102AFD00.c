/*
 * func-name: sub_102AFD00
 * func-address: 0x102afd00
 * callers: 0x100119c3
 * callees: 0x102c9d98
 */

_DWORD *sub_102AFD00()
{
  _DWORD *result; // eax

  result = operator new(0x10u);
  if ( result )
    *result = result;
  if ( result != (_DWORD *)-4 )
    result[1] = result;
  return result;
}
