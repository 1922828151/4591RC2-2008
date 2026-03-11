/*
 * func-name: sub_1014C600
 * func-address: 0x1014c600
 * callers: 0x10014560
 * callees: none
 */

int __stdcall sub_1014C600(int (__thiscall ***a1)(_DWORD, _DWORD), int (__thiscall ***a2)(_DWORD, _DWORD))
{
  int (__thiscall ***i)(_DWORD, _DWORD); // esi
  int result; // eax

  for ( i = a1; i != a2; i += 146 )
    result = (**i)(i, 0);
  return result;
}
