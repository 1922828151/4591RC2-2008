/*
 * func-name: ?NewWorld@World@@QAEXXZ
 * func-address: 0x1013df10
 * callers: none
 * callees: 0x1007ec70, 0x1008f6f0, 0x1013db50
 */

void __thiscall World::NewWorld(World *this)
{
  Editor *v2; // eax

  World::UnLoadWorld(this);
  v2 = Editor::Instance();
  Editor::Reset(v2);
  if ( World::m_RegisterWorld )
    World::m_RegisterWorld(this);
}
