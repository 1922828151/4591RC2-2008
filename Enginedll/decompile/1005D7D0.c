/*
 * func-name: ??4SurfaceNode@@QAEAAV0@ABV0@@Z
 * func-address: 0x1005d7d0
 * callers: none
 * callees: 0x1002e3c0
 */

_DWORD *__thiscall SurfaceNode::operator=(_DWORD *this, int a2)
{
  Prefab::operator=((int)this, a2);
  std::string::operator=(this + 293, a2 + 1172);
  this[300] = *(_DWORD *)(a2 + 1200);
  this[301] = *(_DWORD *)(a2 + 1204);
  return this;
}
