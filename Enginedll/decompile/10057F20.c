/*
 * func-name: sub_10057F20
 * func-address: 0x10057f20
 * callers: 0x1005e7d0, 0x1016bc60
 * callees: none
 */

int __stdcall sub_10057F20(int (__thiscall ***a1)(_DWORD, _DWORD), int (__thiscall ***a2)(_DWORD, _DWORD))
{
  int (__thiscall ***i)(_DWORD, _DWORD); // esi
  int result; // eax

  for ( i = a1; i != a2; i += 13 )
    result = (**i)(i, 0);
  return result;
}
