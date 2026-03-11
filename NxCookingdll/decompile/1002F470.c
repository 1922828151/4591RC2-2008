/*
 * func-name: NxReleasePMap
 * func-address: 0x1002f470
 * callers: 0x10024b90
 * callees: none
 */

char __cdecl NxReleasePMap(int a1)
{
  if ( *(_DWORD *)(a1 + 4) )
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, *(_DWORD *)(a1 + 4));
    *(_DWORD *)(a1 + 4) = 0;
  }
  return 1;
}
