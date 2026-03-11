/*
 * func-name: ??1Effect_LightDizzy@@UAE@XZ_0
 * func-address: 0x10089980
 * callers: 0x1001aa0a
 * callees: none
 */

void __thiscall Effect_LightDizzy::~Effect_LightDizzy(struct Model **this)
{
  Editor *v2; // eax

  *this = (struct Model *)&Effect_LightDizzy::`vftable';
  v2 = (Editor *)Editor::Instance();
  if ( Editor::GetEditorMode(v2) )
    Precacher::PurgeModel(this + 179);
  if ( this[281] )
    Precacher::PurgeTexture(this + 281);
  std::string::~string(this + 270);
  std::string::~string(this + 263);
  Actor::~Actor((Actor *)this);
}
