/*
 * func-name: sub_10009900
 * func-address: 0x10009900
 * callers: none
 * callees: 0x10009760, 0x10009e7c
 */

_DWORD *__thiscall sub_10009900(_DWORD *Block, char a2)
{
  sub_10009760(Block);
  if ( (a2 & 1) != 0 )
    j__free(Block);
  return Block;
}
