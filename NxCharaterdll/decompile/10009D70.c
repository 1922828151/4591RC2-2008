/*
 * func-name: sub_10009D70
 * func-address: 0x10009d70
 * callers: none
 * callees: 0x10009e7c
 */

_DWORD *__thiscall sub_10009D70(_DWORD *Block, char a2)
{
  *Block = &SweptVolume::`vftable';
  if ( (a2 & 1) != 0 )
    j__free(Block);
  return Block;
}
