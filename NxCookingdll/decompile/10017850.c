/*
 * func-name: sub_10017850
 * func-address: 0x10017850
 * callers: none
 * callees: 0x10034bd3
 */

_DWORD *__thiscall sub_10017850(_DWORD *Block, char a2)
{
  *Block = &Opcode::Collider::`vftable';
  if ( (a2 & 1) != 0 )
    j__free(Block);
  return Block;
}
