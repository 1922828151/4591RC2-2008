/*
 * func-name: sub_100178F0
 * func-address: 0x100178f0
 * callers: 0x10017e30
 * callees: 0x10014910
 */

void __thiscall sub_100178F0(_DWORD *this)
{
  int (__stdcall ***v2)(size_t, int); // eax

  if ( this[1] )
  {
    v2 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD))(*v2)[3])(v2, this[1]);
    this[1] = 0;
  }
}
