/*
 * func-name: NxCreateControllerManager
 * func-address: 0x10009350
 * callers: none
 * callees: 0x10009110
 */

_DWORD *__cdecl NxCreateControllerManager(int a1)
{
  _DWORD *v2; // eax
  _DWORD *v3; // edi

  if ( !a1 )
    return 0;
  dword_1002F7BC = a1;
  v2 = (_DWORD *)(*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 8))(a1, 16, 0);
  v3 = v2;
  if ( v2 )
    sub_10009110(v2, a1);
  return v3;
}
