/*
 * func-name: sub_1001D620
 * func-address: 0x1001d620
 * callers: none
 * callees: 0x10017840, 0x10034bd3
 */

_DWORD *__thiscall sub_1001D620(_DWORD *Block, char a2)
{
  *Block = &Opcode::RayCollider::`vftable';
  sub_10017840(Block);
  if ( (a2 & 1) != 0 )
    j__free(Block);
  return Block;
}
