/*
 * func-name: sub_10014B50
 * func-address: 0x10014b50
 * callers: 0x1000cad0, 0x1000fe90, 0x10011260, 0x100122c0, 0x10017170, 0x10017e30, 0x1001ebb0, 0x1001efc0, 0x10020740, 0x10020e00, 0x100250d0, 0x1002c060, 0x1002c280, 0x1002ceb0, 0x1002d2a0, 0x1002e590
 * callees: 0x10014910
 */

void __thiscall sub_10014B50(float *this)
{
  int (__stdcall ***v2)(size_t, int); // eax

  if ( this[3] >= 0.0 && *((_DWORD *)this + 2) )
  {
    v2 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD))(*v2)[3])(v2, *((_DWORD *)this + 2));
    this[2] = 0.0;
  }
  *this = 0.0;
  this[1] = 0.0;
}
