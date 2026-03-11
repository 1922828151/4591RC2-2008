/*
 * func-name: ?DestroyVehicleActor@NxPhysics@@QAEXAAPAVNxActor@@@Z
 * func-address: 0x10141680
 * callers: none
 * callees: 0x100956d0, 0x101a2500
 */

void __thiscall NxPhysics::DestroyVehicleActor(NxPhysics *this, struct NxActor **a2)
{
  int v3; // edi

  if ( *a2 )
  {
    v3 = *((_DWORD *)*a2 + 1);
    if ( *(_DWORD *)(v3 + 8) != 1 )
      Error("This is not a vehicle.");
    if ( *(_DWORD *)(v3 + 12) )
      operator delete(*(void **)(v3 + 12));
    operator delete((void *)v3);
    if ( *a2 )
      *((_DWORD *)*a2 + 1) = 0;
    (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 3) + 32))(*((_DWORD *)this + 3), *a2);
    *a2 = 0;
  }
}
