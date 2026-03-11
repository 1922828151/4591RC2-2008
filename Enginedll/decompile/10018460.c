/*
 * func-name: ?SetCollisionModel@Actor@@UAEXPAVModel@@@Z
 * func-address: 0x10018460
 * callers: none
 * callees: none
 */

void __thiscall Actor::SetCollisionModel(Actor *this, struct Model *a2)
{
  *((_DWORD *)this + 180) = a2;
}
