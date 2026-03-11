/*
 * func-name: sub_10017170
 * func-address: 0x10017170
 * callers: 0x100171d0, 0x10017360
 * callees: 0x10014910, 0x10014b50, 0x100168a0
 */

void __thiscall sub_10017170(_DWORD *this)
{
  int v2; // edi
  int (__stdcall ***v3)(size_t, int); // eax
  _DWORD *v4; // ecx
  int (__stdcall ***v5)(size_t, int); // eax

  v2 = this[6];
  if ( v2 )
  {
    sub_10014B50((float *)this[6]);
    v3 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), int))(*v3)[3])(v3, v2);
    this[6] = 0;
  }
  v4 = (_DWORD *)this[1];
  if ( v4 )
  {
    sub_100168A0(v4, 3);
    this[1] = 0;
  }
  if ( *this )
  {
    v5 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD))(*v5)[3])(v5, *this);
    *this = 0;
  }
}
