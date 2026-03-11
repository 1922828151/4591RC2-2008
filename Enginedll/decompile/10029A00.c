/*
 * func-name: ??0VertexManager@@QAE@ABV0@@Z
 * func-address: 0x10029a00
 * callers: none
 * callees: 0x10026190
 */

VertexManager *__thiscall VertexManager::VertexManager(VertexManager *this, const struct VertexManager *a2)
{
  *(_DWORD *)this = &VertexManager::`vftable';
  std::vector<VertexManager::VFormat>::vector<VertexManager::VFormat>((int)this + 4, (int)a2 + 4);
  return this;
}
