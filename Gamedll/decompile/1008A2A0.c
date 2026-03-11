/*
 * func-name: ?Tick@Effect_LightDizzy@@UAEXXZ_0
 * func-address: 0x1008a2a0
 * callers: 0x10017ec7
 * callees: 0x10004200
 */

void __thiscall Effect_LightDizzy::Tick(Effect_LightDizzy *this)
{
  Editor *v2; // eax

  v2 = (Editor *)Editor::Instance();
  if ( Editor::GetEditorMode(v2) )
    Effect_LightDizzy::Refresh(this);
  Actor::Tick(this);
}
