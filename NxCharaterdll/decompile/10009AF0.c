/*
 * func-name: sub_10009AF0
 * func-address: 0x10009af0
 * callers: none
 * callees: 0x10009d60, 0x10009e7c
 */

_DWORD *__thiscall sub_10009AF0(_DWORD *Block, char a2)
{
  *Block = &SweptBox::`vftable';
  sub_10009D60();
  if ( (a2 & 1) != 0 )
    j__free(Block);
  return Block;
}
