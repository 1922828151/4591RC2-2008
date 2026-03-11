/*
 * func-name: sub_100159F0
 * func-address: 0x100159f0
 * callers: 0x10015a80
 * callees: 0x10014910
 */

char __thiscall sub_100159F0(int this, int a2)
{
  int (__stdcall ***v3)(size_t, int); // eax
  int (__stdcall ***v4)(size_t, int); // eax
  int (__stdcall ***v5)(size_t, int); // eax
  int v6; // eax
  int (__stdcall ***v8)(size_t, int); // eax
  int v9; // eax

  if ( !*(_BYTE *)(this + 20) )
    return 1;
  if ( *(_DWORD *)(this + 8) )
  {
    v3 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD))(*v3)[3])(v3, *(_DWORD *)(this + 8));
    *(_DWORD *)(this + 8) = 0;
  }
  if ( *(_DWORD *)(this + 4) )
  {
    v4 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD))(*v4)[3])(v4, *(_DWORD *)(this + 4));
    *(_DWORD *)(this + 4) = 0;
  }
  v5 = sub_10014910();
  v6 = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v5)(v5, 4 * a2, 72);
  *(_DWORD *)(this + 4) = v6;
  if ( v6
    && (v8 = sub_10014910(),
        v9 = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v8)(v8, 4 * a2, 73),
        (*(_DWORD *)(this + 8) = v9) != 0) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
