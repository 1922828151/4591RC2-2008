/*
 * func-name: sub_1001AB60
 * func-address: 0x1001ab60
 * callers: none
 * callees: 0x10019882
 */

_DWORD *sub_1001AB60()
{
  _DWORD *result; // eax

  result = operator new(4u);
  if ( result )
  {
    *result = &CMsgSystem::`vftable';
    *(_DWORD *)&byte_10039118[2048] = result;
  }
  else
  {
    result = 0;
    *(_DWORD *)&byte_10039118[2048] = 0;
  }
  return result;
}
