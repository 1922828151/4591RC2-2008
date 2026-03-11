/*
 * func-name: sub_10009600
 * func-address: 0x10009600
 * callers: none
 * callees: 0x10009390, 0x10009e7c
 */

void *__thiscall sub_10009600(void *Block, char a2)
{
  sub_10009390(Block);
  if ( (a2 & 1) != 0 )
    j__free(Block);
  return Block;
}
