/*
 * func-name: ??1HookEsbTake@@UAE@XZ_0
 * func-address: 0x1012d210
 * callers: 0x1000e3fe
 * callees: none
 */

void __thiscall HookEsbTake::~HookEsbTake(struct Model **this)
{
  Editor *v2; // eax
  struct Model *v3; // ecx
  int v4; // [esp+0h] [ebp-1Ch]
  int v5; // [esp+4h] [ebp-18h]

  *this = (struct Model *)&HookEsbTake::`vftable';
  v2 = (Editor *)Editor::Instance(v4, v5);
  if ( Editor::GetEditorMode(v2) )
  {
    Precacher::PurgeModel(this + 179);
    Precacher::PurgeModel((struct Model **)this[310] + 179);
    v3 = this[310];
    if ( v3 )
    {
      (*(void (__thiscall **)(struct Model *, int))(*(_DWORD *)v3 + 80))(v3, 1);
      this[310] = 0;
    }
  }
  std::string::~string(this + 293);
  std::string::~string(this + 286);
  std::string::~string(this + 278);
  std::string::~string(this + 271);
  std::string::~string(this + 264);
  Actor::~Actor((Actor *)this);
}
