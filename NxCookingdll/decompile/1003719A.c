/*
 * func-name: sub_1003719A
 * func-address: 0x1003719a
 * callers: none
 * callees: 0x10034bd3, 0x10037177
 */

void *__thiscall sub_1003719A(void *Block, char a2)
{
  sub_10037177(Block);
  if ( (a2 & 1) != 0 )
    j__free(Block);
  return Block;
}
