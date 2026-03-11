/*
 * func-name: ?AddRef@Actor@@AAEXPAV1@@Z
 * func-address: 0x10050780
 * callers: none
 * callees: 0x10012a30
 */

void __thiscall Actor::AddRef(Actor *this, struct Actor *a2)
{
  std::vector<Actor *>::push_back((_DWORD *)this + 36, (int *)&a2);
}
