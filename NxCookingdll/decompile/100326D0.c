/*
 * func-name: sub_100326D0
 * func-address: 0x100326d0
 * callers: none
 * callees: 0x10034bd3, 0x10037177
 */

void **__thiscall sub_100326D0(void **Block, char a2)
{
  *Block = &std::logic_error::`vftable';
  if ( (unsigned int)Block[9] >= 0x10 )
    j__free(Block[4]);
  Block[9] = (void *)15;
  Block[8] = 0;
  *((_BYTE *)Block + 16) = 0;
  sub_10037177(Block);
  if ( (a2 & 1) != 0 )
    j__free(Block);
  return Block;
}
