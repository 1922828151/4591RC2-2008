/*
 * func-name: sub_10055010
 * func-address: 0x10055010
 * callers: none
 * callees: 0x10161710, 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_10055010(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x4F4u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))TerrainNode::~TerrainNode);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    TerrainNode::~TerrainNode((TerrainNode *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
