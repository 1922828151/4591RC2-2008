/*
 * func-name: sub_10001000
 * func-address: 0x10001000
 * callers: none
 * callees: 0x10034bd3
 */

_DWORD *__thiscall sub_10001000(_DWORD *Block, char a2)
{
  *Block = &NxFoundationSDK::`vftable';
  if ( (a2 & 1) != 0 )
    j__free(Block);
  return Block;
}
