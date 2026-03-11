/*
 * func-name: sub_1000E56B
 * func-address: 0x1000e56b
 * callers: none
 * callees: 0x10009e7c, 0x10012279
 */

_DWORD *__thiscall sub_1000E56B(_DWORD *Block, char a2)
{
  *Block = &std::bad_exception::`vftable';
  sub_10012279();
  if ( (a2 & 1) != 0 )
    j__free(Block);
  return Block;
}
