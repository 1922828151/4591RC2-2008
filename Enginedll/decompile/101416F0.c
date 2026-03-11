/*
 * func-name: ?AttachNxActor@NxPhysics@@QAE_NPAVNxActor@@PAUUserDataHeader@@W4PhysicsGroup@@@Z
 * func-address: 0x101416f0
 * callers: none
 * callees: 0x10140eb0
 */

char __stdcall NxPhysics::AttachNxActor(int a1, int a2, int a3)
{
  NxPhysics::SetActorCollisionGroup(a1, a3);
  *(_DWORD *)(a1 + 4) = a2;
  return 1;
}
