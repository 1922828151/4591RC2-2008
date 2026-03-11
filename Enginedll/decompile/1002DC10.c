/*
 * func-name: ??4VertexManager@@QAEAAV0@ABV0@@Z
 * func-address: 0x1002dc10
 * callers: none
 * callees: 0x1002c070
 */

void *__thiscall VertexManager::operator=(void *this, int a2)
{
  std::vector<VertexManager::VFormat>::operator=((int)this + 4, a2 + 4);
  return this;
}
