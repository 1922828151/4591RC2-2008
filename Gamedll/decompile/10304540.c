/*
 * func-name: sub_10304540
 * func-address: 0x10304540
 * callers: none
 * callees: 0x102c9d98
 */

_DWORD *sub_10304540()
{
  _DWORD *result; // eax

  result = operator new(4u);
  if ( result )
  {
    *result = &CMsgSystem::`vftable';
    dword_103B9580 = (int)result;
  }
  else
  {
    result = 0;
    dword_103B9580 = 0;
  }
  return result;
}
