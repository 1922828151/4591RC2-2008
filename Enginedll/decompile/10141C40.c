/*
 * func-name: ?CreateVehicleActor@NxPhysics@@QAEPAVNxActor@@PAVActor@@JAAVNxActorDesc@@W4PhysicsGroup@@PAVPhysicsVehicle_Callback@@@Z
 * func-address: 0x10141c40
 * callers: none
 * callees: 0x10140eb0, 0x101a2534
 */

int __thiscall NxPhysics::CreateVehicleActor(_DWORD **this, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // edi
  _DWORD *v7; // eax
  _DWORD *v8; // esi
  _DWORD *v9; // eax

  v6 = (*(int (__thiscall **)(_DWORD *, int))(*this[3] + 28))(this[3], a4);
  v7 = operator new(0x10u);
  if ( v7 )
  {
    v7[1] = -1;
    v7[2] = 4;
    v7[3] = 0;
    v8 = v7;
  }
  else
  {
    v8 = 0;
  }
  v8[1] = a3;
  *v8 = a2;
  v8[2] = 1;
  v9 = operator new(4u);
  if ( v9 )
    *v9 = 0;
  else
    v9 = 0;
  *v9 = a6;
  v8[3] = v9;
  NxPhysics::SetActorCollisionGroup(v6, a5);
  *(_DWORD *)(v6 + 4) = v8;
  return v6;
}
