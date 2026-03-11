/*
 * func-name: ??0SurfaceNode@@QAE@ABV0@@Z
 * func-address: 0x1005b060
 * callers: none
 * callees: 0x1002a570
 */

SurfaceNode *__thiscall SurfaceNode::SurfaceNode(SurfaceNode *this, const struct SurfaceNode *a2)
{
  Prefab::Prefab(this, a2);
  *(_DWORD *)this = &SurfaceNode::`vftable';
  std::string::string((char *)this + 1172, (char *)a2 + 1172);
  *((_DWORD *)this + 300) = *((_DWORD *)a2 + 300);
  *((_DWORD *)this + 301) = *((_DWORD *)a2 + 301);
  return this;
}
