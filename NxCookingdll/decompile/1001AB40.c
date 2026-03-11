/*
 * func-name: sub_1001AB40
 * func-address: 0x1001ab40
 * callers: none
 * callees: 0x10034bd3
 */

_DWORD *__thiscall sub_1001AB40(_DWORD *Block, char a2)
{
  *Block = &Opcode::PointDistanceQuery::`vftable';
  if ( (a2 & 1) != 0 )
    j__free(Block);
  return Block;
}
