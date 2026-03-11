/*
 * func-name: ??4RandomTextureTraceLine@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x1009f340
 * callers: 0x100041a1
 * callees: 0x10006a0a, 0x100086ca, 0x1000b52d
 */

_BYTE *__thiscall RandomTextureTraceLine::operator=(_BYTE *this, int a2)
{
  TraceLineSystem::operator=(a2);
  sub_1000B52D(a2 + 352);
  std::vector<Material *>::operator=(this + 368, a2 + 368);
  sub_10006A0A(a2 + 384);
  this[400] = *(_BYTE *)(a2 + 400);
  return this;
}
