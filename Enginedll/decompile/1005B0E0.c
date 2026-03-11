/*
 * func-name: ??0TerrainNode@@QAE@ABV0@@Z
 * func-address: 0x1005b0e0
 * callers: none
 * callees: 0x1002a570, 0x10059b50
 */

TerrainNode *__thiscall TerrainNode::TerrainNode(TerrainNode *this, const struct TerrainNode *a2)
{
  Prefab::Prefab(this, a2);
  *(_DWORD *)this = &TerrainNode::`vftable';
  *((_DWORD *)this + 293) = *((_DWORD *)a2 + 293);
  *((_DWORD *)this + 294) = *((_DWORD *)a2 + 294);
  *((_DWORD *)this + 295) = *((_DWORD *)a2 + 295);
  qmemcpy((char *)this + 1184, (char *)a2 + 1184, 0x30u);
  sub_10059B50((_DWORD *)this + 308, (int)a2 + 1232);
  sub_10059B50((_DWORD *)this + 311, (int)a2 + 1244);
  *((_DWORD *)this + 314) = *((_DWORD *)a2 + 314);
  *((_DWORD *)this + 315) = *((_DWORD *)a2 + 315);
  *((_DWORD *)this + 316) = *((_DWORD *)a2 + 316);
  return this;
}
