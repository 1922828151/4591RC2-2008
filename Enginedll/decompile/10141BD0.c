/*
 * func-name: ?CreateNxActor@NxPhysics@@QAEPAVNxActor@@PAVActor@@JAAVNxActorDesc@@W4PhysicsGroup@@@Z
 * func-address: 0x10141bd0
 * callers: 0x10141cd0, 0x10142040, 0x101438a0
 * callees: 0x10140eb0, 0x101a2534
 */

int __thiscall NxPhysics::CreateNxActor(_DWORD **this, int a2, int a3, int a4, int a5)
{
  int v5; // edi
  _DWORD *v6; // eax
  _DWORD *v7; // esi

  v5 = (*(int (__thiscall **)(_DWORD *, int))(*this[3] + 28))(this[3], a4);
  v6 = operator new(0x10u);
  if ( v6 )
  {
    v6[1] = -1;
    v6[2] = 4;
    v6[3] = 0;
    v7 = v6;
  }
  else
  {
    v7 = 0;
  }
  v7[2] = 0;
  v7[3] = 0;
  v7[1] = a3;
  *v7 = a2;
  NxPhysics::SetActorCollisionGroup(v5, a5);
  *(_DWORD *)(v5 + 4) = v7;
  return v5;
}
