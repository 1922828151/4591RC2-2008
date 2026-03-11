/*
 * func-name: sub_10002210
 * func-address: 0x10002210
 * callers: 0x10001f70
 * callees: 0x10001cf0, 0x10009e7c
 */

_DWORD *__thiscall sub_10002210(_DWORD *Block, char a2)
{
  sub_10001CF0(Block);
  if ( (a2 & 1) != 0 )
    j__free(Block);
  return Block;
}
