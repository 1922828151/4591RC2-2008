/*
 * func-name: ??1TerrainNode@@UAE@XZ
 * func-address: 0x10161710
 * callers: 0x10055010
 * callees: 0x1013f020, 0x101a253a
 */

void __thiscall TerrainNode::~TerrainNode(TerrainNode *this)
{
  void *v2; // eax

  *(_DWORD *)this = &TerrainNode::`vftable';
  sub_1013F020((int)this + 1244);
  sub_1013F020((int)this + 1232);
  v2 = (void *)*((_DWORD *)this + 301);
  *((_DWORD *)this + 303) = 0;
  *((_DWORD *)this + 296) = 0;
  *((_DWORD *)this + 297) = 0;
  *((_DWORD *)this + 298) = 0;
  *((_DWORD *)this + 299) = 0;
  if ( v2 )
  {
    operator delete[](v2);
    *((_DWORD *)this + 301) = 0;
  }
  if ( *((_DWORD *)this + 302) )
  {
    operator delete[](*((void **)this + 302));
    *((_DWORD *)this + 302) = 0;
  }
  Prefab::~Prefab(this);
}
