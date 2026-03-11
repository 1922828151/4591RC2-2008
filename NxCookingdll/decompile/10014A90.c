/*
 * func-name: sub_10014A90
 * func-address: 0x10014a90
 * callers: 0x10014b00
 * callees: 0x10014910
 */

bool __thiscall sub_10014A90(float *this, int a2)
{
  int (__stdcall ***v3)(size_t, int); // eax
  int (__stdcall ***v5)(size_t, int); // eax
  int v6; // eax

  if ( this[3] >= 0.0 && *((_DWORD *)this + 2) )
  {
    v3 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD))(*v3)[3])(v3, *((_DWORD *)this + 2));
    this[2] = 0.0;
  }
  *this = 0.0;
  this[1] = 0.0;
  if ( !a2 )
    return 0;
  *(_DWORD *)this = a2;
  v5 = sub_10014910();
  v6 = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v5)(v5, 4 * *(_DWORD *)this, 64);
  *((_DWORD *)this + 2) = v6;
  return v6 != 0;
}
