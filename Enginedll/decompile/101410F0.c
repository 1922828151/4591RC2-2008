/*
 * func-name: ?DestroyControllerActor@NxPhysics@@QAE_NAAPAVNxActor@@@Z
 * func-address: 0x101410f0
 * callers: none
 * callees: 0x100956d0, 0x101a2500
 */

char __thiscall NxPhysics::DestroyControllerActor(NxPhysics *this, struct NxActor **a2)
{
  _DWORD *v2; // edi
  _DWORD *v4; // esi

  v2 = (_DWORD *)*((_DWORD *)*a2 + 1);
  if ( v2[2] != 2 )
    Error("This is not a controller.");
  v4 = (_DWORD *)v2[3];
  (*(void (__thiscall **)(_DWORD, _DWORD))(***((_DWORD ***)this + 4) + 12))(**((_DWORD **)this + 4), *v4);
  operator delete(v4);
  operator delete(v2);
  *a2 = 0;
  return 1;
}
