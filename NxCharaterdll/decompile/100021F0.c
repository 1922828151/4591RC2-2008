/*
 * func-name: sub_100021F0
 * func-address: 0x100021f0
 * callers: none
 * callees: 0x10009e7c
 */

_DWORD *__thiscall sub_100021F0(_DWORD *Block, char a2)
{
  *Block = &NxShapeDesc::`vftable';
  if ( (a2 & 1) != 0 )
    j__free(Block);
  return Block;
}
