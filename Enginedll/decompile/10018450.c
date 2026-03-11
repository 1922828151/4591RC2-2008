/*
 * func-name: ?GetParent@Actor@@QAEPAV1@XZ
 * func-address: 0x10018450
 * callers: none
 * callees: none
 */

struct Actor *__thiscall Actor::GetParent(Actor *this)
{
  return (struct Actor *)*((_DWORD *)this + 25);
}
