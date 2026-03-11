/*
 * func-name: sub_100483A9
 * func-address: 0x100483a9
 * callers: none
 * callees: 0x10032690, 0x10034bd3
 */

void **__thiscall sub_100483A9(void **Block, char a2)
{
  *Block = &std::out_of_range::`vftable';
  sub_10032690(Block);
  if ( (a2 & 1) != 0 )
    j__free(Block);
  return Block;
}
