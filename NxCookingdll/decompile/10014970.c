/*
 * func-name: sub_10014970
 * func-address: 0x10014970
 * callers: 0x1002b9c0
 * callees: 0x10014910
 */

float *__thiscall sub_10014970(float *this)
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
  return this;
}
