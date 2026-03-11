/*
 * func-name: sub_10001060
 * func-address: 0x10001060
 * callers: none
 * callees: 0x10034bd3
 */

_DWORD *__thiscall sub_10001060(_DWORD *Block, char a2)
{
  *Block = &NxUserAllocator::`vftable';
  if ( (a2 & 1) != 0 )
    j__free(Block);
  return Block;
}
