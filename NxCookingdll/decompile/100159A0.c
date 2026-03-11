/*
 * func-name: sub_100159A0
 * func-address: 0x100159a0
 * callers: 0x1000e060, 0x1000f160, 0x1000fe90, 0x10011260, 0x1001efc0, 0x10022410, 0x10025310, 0x1002d920, 0x10030940
 * callees: 0x10014910
 */

void __thiscall sub_100159A0(int this)
{
  int (__stdcall ***v2)(size_t, int); // eax
  int (__stdcall ***v3)(size_t, int); // eax

  if ( *(_BYTE *)(this + 20) )
  {
    if ( *(_DWORD *)(this + 8) )
    {
      v2 = sub_10014910();
      ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD))(*v2)[3])(v2, *(_DWORD *)(this + 8));
      *(_DWORD *)(this + 8) = 0;
    }
    if ( *(_DWORD *)(this + 4) )
    {
      v3 = sub_10014910();
      ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD))(*v3)[3])(v3, *(_DWORD *)(this + 4));
      *(_DWORD *)(this + 4) = 0;
    }
  }
}
