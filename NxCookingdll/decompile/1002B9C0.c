/*
 * func-name: sub_1002B9C0
 * func-address: 0x1002b9c0
 * callers: 0x1002ceb0, 0x1002cf30
 * callees: 0x10014910, 0x10014970
 */

int __thiscall sub_1002B9C0(int this)
{
  int (__stdcall ***v2)(size_t, int); // eax
  int (__stdcall ***v3)(size_t, int); // eax
  int (__stdcall ***v4)(size_t, int); // eax
  int (__stdcall ***v5)(size_t, int); // eax
  int (__stdcall ***v6)(size_t, int); // eax
  int (__stdcall ***v7)(size_t, int); // eax
  int (__stdcall ***v8)(size_t, int); // eax
  int (__stdcall ***v9)(size_t, int); // eax
  int (__stdcall ***v10)(size_t, int); // eax

  sub_10014970((float *)this);
  sub_10014970((float *)(this + 16));
  sub_10014970((float *)(this + 32));
  sub_10014970((float *)(this + 48));
  sub_10014970((float *)(this + 64));
  sub_10014970((float *)(this + 80));
  sub_10014970((float *)(this + 96));
  sub_10014970((float *)(this + 112));
  sub_10014970((float *)(this + 128));
  sub_10014970((float *)(this + 144));
  sub_10014970((float *)(this + 160));
  sub_10014970((float *)(this + 176));
  sub_10014970((float *)(this + 192));
  if ( *(_DWORD *)(this + 236) )
  {
    v2 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD))(*v2)[3])(v2, *(_DWORD *)(this + 236));
    *(_DWORD *)(this + 236) = 0;
  }
  if ( *(_DWORD *)(this + 240) )
  {
    v3 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD))(*v3)[3])(v3, *(_DWORD *)(this + 240));
    *(_DWORD *)(this + 240) = 0;
  }
  if ( *(_DWORD *)(this + 244) )
  {
    v4 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD))(*v4)[3])(v4, *(_DWORD *)(this + 244));
    *(_DWORD *)(this + 244) = 0;
  }
  if ( *(_DWORD *)(this + 248) )
  {
    v5 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD))(*v5)[3])(v5, *(_DWORD *)(this + 248));
    *(_DWORD *)(this + 248) = 0;
  }
  if ( *(_DWORD *)(this + 252) )
  {
    v6 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD))(*v6)[3])(v6, *(_DWORD *)(this + 252));
    *(_DWORD *)(this + 252) = 0;
  }
  if ( *(_DWORD *)(this + 264) )
  {
    v7 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD))(*v7)[3])(v7, *(_DWORD *)(this + 264));
    *(_DWORD *)(this + 264) = 0;
  }
  if ( *(_DWORD *)(this + 268) )
  {
    v8 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD))(*v8)[3])(v8, *(_DWORD *)(this + 268));
    *(_DWORD *)(this + 268) = 0;
  }
  if ( *(_DWORD *)(this + 272) )
  {
    v9 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD))(*v9)[3])(v9, *(_DWORD *)(this + 272));
    *(_DWORD *)(this + 272) = 0;
  }
  if ( *(_DWORD *)(this + 256) )
  {
    v10 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD))(*v10)[3])(v10, *(_DWORD *)(this + 256));
    *(_DWORD *)(this + 256) = 0;
  }
  return this;
}
