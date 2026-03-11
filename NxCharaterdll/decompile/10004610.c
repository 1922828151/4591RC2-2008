/*
 * func-name: sub_10004610
 * func-address: 0x10004610
 * callers: none
 * callees: 0x10009e7c, 0x1000b0e9
 */

char *__thiscall sub_10004610(char *Block, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      Block,
      4u,
      *((_DWORD *)Block - 1),
      (void (__thiscall *)(void *))NxControllerManager::~NxControllerManager);
    if ( (a2 & 1) != 0 )
      j__free(Block - 4);
    return Block - 4;
  }
  else
  {
    *(_DWORD *)Block = &NxControllerManager::`vftable';
    if ( (a2 & 1) != 0 )
      j__free(Block);
    return Block;
  }
}
