/*
 * func-name: sub_100261A0
 * func-address: 0x100261a0
 * callers: 0x10024900
 * callees: none
 */

int __stdcall sub_100261A0(int a1)
{
  if ( *(_DWORD *)(a1 + 8) )
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, *(_DWORD *)(a1 + 8));
    *(_DWORD *)(a1 + 8) = 0;
  }
  if ( *(_DWORD *)(a1 + 20) )
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, *(_DWORD *)(a1 + 20));
    *(_DWORD *)(a1 + 20) = 0;
  }
  return 0;
}
