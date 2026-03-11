/*
 * func-name: sub_10024500
 * func-address: 0x10024500
 * callers: none
 * callees: 0x10034bd3
 */

_DWORD *__thiscall sub_10024500(_DWORD *Block, char a2)
{
  *Block = &NxCookingInterface::`vftable';
  if ( (a2 & 1) != 0 )
    j__free(Block);
  return Block;
}
