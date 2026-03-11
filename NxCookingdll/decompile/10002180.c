/*
 * func-name: sub_10002180
 * func-address: 0x10002180
 * callers: 0x10001e60
 * callees: 0x100019e0, 0x10034bd3
 */

char *__thiscall sub_10002180(char *Block, char a2)
{
  sub_100019E0(Block);
  if ( (a2 & 1) != 0 )
    j__free(Block);
  return Block;
}
