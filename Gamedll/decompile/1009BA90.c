/*
 * func-name: ?PreRender@Effect_TraceLineSystem@@UAEXPAVCamera@@@Z_0
 * func-address: 0x1009ba90
 * callers: 0x100102e9
 * callees: 0x1000e7f5
 */

void __thiscall Effect_TraceLineSystem::PreRender(Effect_TraceLineSystem *this, struct Camera *a2)
{
  Editor *v3; // eax

  v3 = (Editor *)Editor::Instance();
  if ( Editor::GetEditorMode(v3) )
    Effect_TraceLineSystem::Refresh(this);
  Actor::PreRender(this, a2);
}
