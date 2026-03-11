/*
 * func-name: ?DestroyMeshActor@NxPhysics@@QAE_NAAPAVNxActor@@@Z
 * func-address: 0x10140fe0
 * callers: 0x100518e0
 * callees: none
 */

char __userpurge NxPhysics::DestroyMeshActor@<al>(NxPhysics *this@<ecx>, int a2@<esi>, struct NxActor **a3)
{
  int v5; // ebx
  unsigned int v6; // esi
  int v7; // eax
  int v8; // eax

  if ( !*a3 )
    return 0;
  v5 = 0;
  v6 = 0;
  if ( (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*a3 + 76))(*a3, a2) )
  {
    do
    {
      v7 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a3 + 80))(*a3);
      if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v7 + 4 * v6) + 92))(*(_DWORD *)(v7 + 4 * v6)) == 6 )
      {
        v8 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a3 + 80))(*a3);
        v5 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v8 + 4 * v6) + 164))(*(_DWORD *)(v8 + 4 * v6));
      }
      ++v6;
    }
    while ( v6 < (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a3 + 76))(*a3) );
  }
  (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 3) + 32))(*((_DWORD *)this + 3), *a3);
  *a3 = 0;
  if ( v5 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 60))(v5);
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 2) + 36))(*((_DWORD *)this + 2), v5);
  }
  return 1;
}
