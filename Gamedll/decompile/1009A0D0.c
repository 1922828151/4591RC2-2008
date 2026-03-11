/*
 * func-name: ?SetWorld@Effect_TraceLineSystem@@UAEXPAVWorld@@@Z_0
 * func-address: 0x1009a0d0
 * callers: 0x1000c892
 * callees: none
 */

void __thiscall Effect_TraceLineSystem::SetWorld(Effect_TraceLineSystem *this, struct World *a2)
{
  Actor::SetWorld(this, a2);
  *(_DWORD *)(*((_DWORD *)this + 270) + 116) = a2;
}
