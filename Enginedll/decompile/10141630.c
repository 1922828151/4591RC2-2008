/*
 * func-name: ?DestroyNxActor@NxPhysics@@QAEXAAPAVNxActor@@@Z
 * func-address: 0x10141630
 * callers: 0x1004d5d0, 0x1004d7b0, 0x1004e860, 0x100511a0
 * callees: 0x101a2500
 */

void __thiscall NxPhysics::DestroyNxActor(NxPhysics *this, struct NxActor **a2)
{
  void *v3; // eax

  if ( *a2 )
  {
    v3 = (void *)*((_DWORD *)*a2 + 1);
    if ( v3 )
      operator delete(v3);
    if ( *a2 )
      *((_DWORD *)*a2 + 1) = 0;
    (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 3) + 32))(*((_DWORD *)this + 3), *a2);
    *a2 = 0;
  }
}
