/*
 * func-name: sub_10014E60
 * func-address: 0x10014e60
 * callers: 0x10015020
 * callees: 0x10014910
 */

_DWORD *__thiscall sub_10014E60(_DWORD *this)
{
  int (__stdcall ***v2)(size_t, int); // eax
  int (__stdcall ***v3)(size_t, int); // eax
  _DWORD *v4; // edi
  _DWORD *v5; // esi
  bool v6; // zf
  int (__stdcall ***v7)(size_t, int); // eax
  int (__stdcall ***v8)(size_t, int); // eax

  if ( this[2] )
  {
    v2 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD))(*v2)[3])(v2, this[2]);
    this[2] = 0;
  }
  if ( this[3] )
  {
    v3 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD))(*v3)[3])(v3, this[3]);
    this[3] = 0;
  }
  v4 = (_DWORD *)this[1];
  while ( v4 )
  {
    v5 = v4;
    v6 = *v4 == 0;
    v4 = (_DWORD *)v4[3];
    if ( !v6 )
    {
      v7 = sub_10014910();
      ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD))(*v7)[3])(v7, *v5);
      *v5 = 0;
    }
    v8 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD *))(*v8)[3])(v8, v5);
  }
  return this;
}
