/*
 * func-name: sub_101B8A80
 * func-address: 0x101b8a80
 * callers: none
 * callees: 0x101a2534
 */

_DWORD *sub_101B8A80()
{
  _DWORD *result; // eax

  result = operator new(4u);
  if ( result )
  {
    *result = &CMsgSystem::`vftable';
    dword_11249F38 = result;
  }
  else
  {
    result = 0;
    dword_11249F38 = 0;
  }
  return result;
}
