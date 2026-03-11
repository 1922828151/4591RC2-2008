/*
 * func-name: sub_1001E3C0
 * func-address: 0x1001e3c0
 * callers: 0x10023310, 0x10023790, 0x100242e0
 * callees: 0x10014910, 0x10030130
 */

int __thiscall sub_1001E3C0(_DWORD *this)
{
  _DWORD *v2; // edi
  int (__stdcall ***v3)(size_t, int); // eax

  v2 = (_DWORD *)this[4];
  *this = &CollisionHullBuilder::`vftable';
  if ( v2 )
  {
    sub_10030130(v2);
    v3 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD *))(*v3)[3])(v3, v2);
    this[4] = 0;
  }
  return sub_10020190(this);
}
