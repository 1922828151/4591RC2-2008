/*
 * func-name: ?RemoveFromRigidBodySimulation@Actor@@UAEXXZ
 * func-address: 0x1004d7b0
 * callers: none
 * callees: 0x10141630, 0x10143fd0
 */

void __thiscall Actor::RemoveFromRigidBodySimulation(Actor *this)
{
  _DWORD *v1; // esi
  NxPhysics *v2; // eax
  struct NxActor **v3; // [esp-4h] [ebp-8h]

  *((_DWORD *)this + 182) &= ~0x400u;
  v1 = (_DWORD *)((char *)this + 620);
  if ( *((_DWORD *)this + 155) )
  {
    v3 = (struct NxActor **)((char *)this + 620);
    v2 = NxPhysics::Instance();
    NxPhysics::DestroyNxActor(v2, v3);
    *v1 = 0;
  }
}
