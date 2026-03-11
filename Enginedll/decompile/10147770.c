/*
 * func-name: ?onControllerHit@OutpopControllerHitReport@@UAE?AW4NxControllerAction@@ABUNxControllersHit@@@Z
 * func-address: 0x10147770
 * callers: none
 * callees: none
 */

int __stdcall OutpopControllerHitReport::onControllerHit(_DWORD *a1)
{
  int v1; // edi
  int v2; // eax
  int v3; // ecx
  int v4; // eax

  v1 = *(_DWORD *)((*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a1 + 24))(*a1) + 4);
  v2 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[1] + 24))(a1[1]);
  v3 = *(_DWORD *)(v1 + 12);
  v4 = *(_DWORD *)(v2 + 4);
  if ( *(_DWORD *)(v3 + 56) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v3 + 56) + 8))(*(_DWORD *)(v3 + 56), *(_DWORD *)(v4 + 4));
  return 0;
}
