/*
 * func-name: sub_1001229C
 * func-address: 0x1001229c
 * callers: none
 * callees: 0x10009e7c, 0x10012279
 */

void *__thiscall sub_1001229C(void *Block, char a2)
{
  sub_10012279(Block);
  if ( (a2 & 1) != 0 )
    j__free(Block);
  return Block;
}
