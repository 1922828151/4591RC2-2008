/*
 * func-name: sub_1000B1C0
 * func-address: 0x1000b1c0
 * callers: none
 * callees: 0x10009e7c, 0x10012279
 */

_DWORD *__thiscall sub_1000B1C0(_DWORD *Block, char a2)
{
  *Block = &std::bad_alloc::`vftable';
  sub_10012279();
  if ( (a2 & 1) != 0 )
    j__free(Block);
  return Block;
}
