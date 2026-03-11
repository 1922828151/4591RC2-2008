/*
 * func-name: ??1VertexManager@@QAE@XZ
 * func-address: 0x100299b0
 * callers: none
 * callees: 0x10022a00, 0x10118a60
 */

void __thiscall VertexManager::~VertexManager(VertexManager *this)
{
  std::vector<VertexManager::VFormat>::_Tidy((int)this + 4);
  RenderBase::~RenderBase(this);
}
