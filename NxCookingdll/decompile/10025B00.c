/*
 * func-name: sub_10025B00
 * func-address: 0x10025b00
 * callers: 0x1001fca0, 0x10021280, 0x1002c280, 0x1002c730
 * callees: 0x10014910
 */

void __thiscall sub_10025B00(_DWORD *this)
{
  int (__stdcall ***v2)(size_t, int); // eax
  int (__stdcall ***v3)(size_t, int); // eax

  if ( this[4] )
  {
    v2 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD))(*v2)[3])(v2, this[4]);
    this[4] = 0;
  }
  if ( this[3] )
  {
    v3 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD))(*v3)[3])(v3, this[3]);
    this[3] = 0;
  }
}
