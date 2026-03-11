/*
 * func-name: sub_1001E4A0
 * func-address: 0x1001e4a0
 * callers: 0x1002ecc0
 * callees: 0x10014910
 */

void __thiscall sub_1001E4A0(_DWORD *this)
{
  int (__stdcall ***v2)(size_t, int); // eax
  int (__stdcall ***v3)(size_t, int); // eax

  if ( this[12] )
  {
    v2 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD))(*v2)[3])(v2, this[12]);
    this[12] = 0;
  }
  if ( this[10] )
  {
    v3 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD))(*v3)[3])(v3, this[10]);
    this[10] = 0;
  }
}
