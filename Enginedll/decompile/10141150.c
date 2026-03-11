/*
 * func-name: ?DestroyTriggerActor@NxPhysics@@QAE_NAAPAVNxActor@@@Z
 * func-address: 0x10141150
 * callers: none
 * callees: 0x100956d0, 0x101a2500
 */

char __thiscall NxPhysics::DestroyTriggerActor(NxPhysics *this, struct NxActor **a2)
{
  int v4; // ebp
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  int v7; // ebx
  void **v8; // ebx
  struct NxActor **v10; // [esp+10h] [ebp+4h]

  v4 = 0;
  v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a2 + 80))(*a2);
  if ( (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*v5 + 108))(*v5, 5) )
  {
    v6 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a2 + 80))(*a2);
    v4 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v6 + 164))(*v6);
  }
  v7 = *((_DWORD *)*a2 + 1);
  v10 = (struct NxActor **)v7;
  if ( *(_DWORD *)(v7 + 8) != 3 )
    Error("This is not a trriger.");
  v8 = *(void ***)(v7 + 12);
  operator delete(v10);
  if ( v8[1] )
  {
    operator delete(v8[1]);
    v8[1] = 0;
  }
  operator delete(v8);
  if ( *a2 )
    *((_DWORD *)*a2 + 1) = 0;
  (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 3) + 32))(*((_DWORD *)this + 3), *a2);
  *a2 = 0;
  if ( v4 )
  {
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 2) + 80))(*((_DWORD *)this + 2));
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 2) + 76))(*((_DWORD *)this + 2), v4);
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 2) + 80))(*((_DWORD *)this + 2));
  }
  return 1;
}
