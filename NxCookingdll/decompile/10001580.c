/*
 * func-name: sub_10001580
 * func-address: 0x10001580
 * callers: none
 * callees: 0x10034bd3
 */

_DWORD *__thiscall sub_10001580(_DWORD *Block, char a2)
{
  *Block = &NxRemoteDebugger::`vftable';
  if ( (a2 & 1) != 0 )
    j__free(Block);
  return Block;
}
