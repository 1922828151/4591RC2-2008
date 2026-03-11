/*
 * func-name: sub_1001E420
 * func-address: 0x1001e420
 * callers: none
 * callees: 0x10014910, 0x10020190, 0x10030130
 */

_DWORD *__thiscall sub_1001E420(_DWORD *this, char a2)
{
  _DWORD *v3; // edi
  int (__stdcall ***v4)(size_t, int); // eax
  int (__stdcall ***v5)(size_t, int); // eax

  v3 = (_DWORD *)this[4];
  *this = &CollisionHullBuilder::`vftable';
  if ( v3 )
  {
    sub_10030130(v3);
    v4 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD *))(*v4)[3])(v4, v3);
    this[4] = 0;
  }
  sub_10020190(this);
  if ( (a2 & 1) != 0 )
  {
    v5 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD *))(*v5)[3])(v5, this);
  }
  return this;
}
