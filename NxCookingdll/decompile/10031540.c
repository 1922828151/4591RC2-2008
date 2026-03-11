/*
 * func-name: sub_10031540
 * func-address: 0x10031540
 * callers: none
 * callees: 0x10034bd3, 0x10037177
 */

_DWORD *__thiscall sub_10031540(_DWORD *Block, char a2)
{
  *Block = &std::bad_alloc::`vftable';
  sub_10037177();
  if ( (a2 & 1) != 0 )
    j__free(Block);
  return Block;
}
