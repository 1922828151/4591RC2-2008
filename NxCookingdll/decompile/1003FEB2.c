/*
 * func-name: sub_1003FEB2
 * func-address: 0x1003feb2
 * callers: none
 * callees: 0x10034bd3, 0x10037177
 */

_DWORD *__thiscall sub_1003FEB2(_DWORD *Block, char a2)
{
  *Block = &std::bad_exception::`vftable';
  sub_10037177(Block);
  if ( (a2 & 1) != 0 )
    j__free(Block);
  return Block;
}
