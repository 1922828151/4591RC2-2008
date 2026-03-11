/*
 * func-name: sub_10025520
 * func-address: 0x10025520
 * callers: 0x100205f0
 * callees: 0x10014910
 */

void __thiscall sub_10025520(_DWORD *this)
{
  int (__stdcall ***v2)(size_t, int); // eax
  int (__stdcall ***v3)(size_t, int); // eax

  if ( *this )
  {
    v2 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD))(*v2)[3])(v2, *this);
    *this = 0;
  }
  if ( this[1] )
  {
    v3 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD))(*v3)[3])(v3, this[1]);
    this[1] = 0;
  }
}
