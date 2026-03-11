/*
 * func-name: sub_10009E1B
 * func-address: 0x10009e1b
 * callers: none
 * callees: 0x10009e0d, 0x10009e7c
 */

struct type_info *__thiscall sub_10009E1B(struct type_info *Block, char a2)
{
  sub_10009E0D(Block);
  if ( (a2 & 1) != 0 )
    j__free(Block);
  return Block;
}
