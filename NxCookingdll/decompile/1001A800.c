/*
 * func-name: sub_1001A800
 * func-address: 0x1001a800
 * callers: none
 * callees: 0x10014910
 */

_DWORD *__thiscall sub_1001A800(_DWORD *this, char a2)
{
  int v3; // edi
  int (__stdcall ***v4)(size_t, int); // eax
  int (__stdcall ***v5)(size_t, int); // eax

  v3 = this[2];
  *this = &Opcode::AABBStacklessNoLeafTree::`vftable';
  if ( v3 )
  {
    v4 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), int))(*v4)[3])(v4, v3 - 4);
    this[2] = 0;
  }
  *this = &Opcode::AABBOptimizedTree::`vftable';
  if ( (a2 & 1) != 0 )
  {
    v5 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD *))(*v5)[3])(v5, this);
  }
  return this;
}
