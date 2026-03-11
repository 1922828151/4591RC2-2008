/*
 * func-name: ?SetParent@Actor@@QAEXPAV1@@Z
 * func-address: 0x100507a0
 * callers: 0x100542a0
 * callees: 0x10012a30, 0x1004ec70
 */

void __thiscall Actor::SetParent(Actor *this, struct Actor *a2)
{
  Actor *v3; // ecx
  struct Actor *v4; // eax
  bool v5; // zf

  v3 = (Actor *)*((_DWORD *)this + 25);
  if ( v3 )
    Actor::DelRef(v3, this);
  v4 = a2;
  v5 = a2 == 0;
  *((_DWORD *)this + 25) = a2;
  if ( !v5 )
  {
    a2 = this;
    std::vector<Actor *>::push_back((_DWORD *)v4 + 36, (int *)&a2);
  }
}
