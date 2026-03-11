/*
 * func-name: sub_1002B570
 * func-address: 0x1002b570
 * callers: none
 * callees: 0x10014910
 */

_DWORD *__thiscall sub_1002B570(_DWORD *this, char a2)
{
  int (__stdcall ***v3)(size_t, int); // eax

  *this = &GaussMapBuilder::`vftable';
  if ( (a2 & 1) != 0 )
  {
    v3 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD *))(*v3)[3])(v3, this);
  }
  return this;
}
