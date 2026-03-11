/*
 * func-name: sub_10034B72
 * func-address: 0x10034b72
 * callers: none
 * callees: 0x10034b64, 0x10034bd3
 */

struct type_info *__thiscall sub_10034B72(struct type_info *Block, char a2)
{
  sub_10034B64(Block);
  if ( (a2 & 1) != 0 )
    j__free(Block);
  return Block;
}
