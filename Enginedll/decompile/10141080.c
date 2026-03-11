/*
 * func-name: ?DestroyBoxActor@NxPhysics@@QAE_NAAPAVNxActor@@@Z
 * func-address: 0x10141080
 * callers: none
 * callees: 0x100956d0, 0x101a2500
 */

char __thiscall NxPhysics::DestroyBoxActor(NxPhysics *this, struct NxActor **a2)
{
  int v4; // esi

  if ( !*a2 )
    return 0;
  v4 = *((_DWORD *)*a2 + 1);
  if ( *(_DWORD *)(v4 + 8) )
    Error("This is not a normal box.");
  if ( *(_DWORD *)(v4 + 12) )
  {
    operator delete(*(void **)(v4 + 12));
    *(_DWORD *)(v4 + 12) = 0;
  }
  operator delete((void *)v4);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 3) + 32))(*((_DWORD *)this + 3), *a2);
  *a2 = 0;
  return 1;
}
