/*
 * func-name: sub_1002B5D0
 * func-address: 0x1002b5d0
 * callers: none
 * callees: 0x10014910
 */

bool __thiscall sub_1002B5D0(_DWORD *this)
{
  int (__stdcall ***v3)(size_t, int); // eax
  int (__stdcall ***v4)(size_t, int); // eax

  if ( *(_DWORD *)(*(_DWORD *)(this[2] + 32) + 12) > 0xFFu )
    return 0;
  v3 = sub_10014910();
  *(_DWORD *)(this[2] + 24) = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD, int))**v3)(
                                v3,
                                *(_DWORD *)(this[2] + 8),
                                55);
  if ( !*(_DWORD *)(this[2] + 24) )
    return 0;
  v4 = sub_10014910();
  *(_DWORD *)(this[2] + 28) = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD, int))**v4)(
                                v4,
                                *(_DWORD *)(this[2] + 8),
                                55);
  return *(_DWORD *)(this[2] + 28) != 0;
}
