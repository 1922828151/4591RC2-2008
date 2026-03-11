/*
 * func-name: sub_1000DBA0
 * func-address: 0x1000dba0
 * callers: none
 * callees: 0x10034bd3
 */

_DWORD *__thiscall sub_1000DBA0(_DWORD *Block, char a2)
{
  *Block = &IceCore::Stream::`vftable';
  if ( (a2 & 1) != 0 )
    j__free(Block);
  return Block;
}
