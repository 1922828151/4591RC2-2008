/*
 * func-name: sub_100017C0
 * func-address: 0x100017c0
 * callers: 0x10001520
 * callees: 0x10001300, 0x10009e7c
 */

_DWORD *__thiscall sub_100017C0(_DWORD *Block, char a2)
{
  sub_10001300(Block);
  if ( (a2 & 1) != 0 )
    j__free(Block);
  return Block;
}
