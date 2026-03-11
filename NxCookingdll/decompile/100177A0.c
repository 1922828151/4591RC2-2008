/*
 * func-name: sub_100177A0
 * func-address: 0x100177a0
 * callers: none
 * callees: 0x10014910, 0x10017360
 */

_DWORD *__thiscall sub_100177A0(_DWORD *this, char a2)
{
  int v3; // edi
  int (__stdcall ***v4)(size_t, int); // eax
  void (__thiscall ***v5)(_DWORD, int); // ecx
  int (__stdcall ***v6)(size_t, int); // eax

  v3 = this[3];
  *this = &Opcode::BaseModel::`vftable';
  if ( v3 )
  {
    sub_10017360(v3);
    v4 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), int))(*v4)[3])(v4, v3);
    this[3] = 0;
  }
  v5 = (void (__thiscall ***)(_DWORD, int))this[4];
  if ( v5 )
  {
    (**v5)(v5, 1);
    this[4] = 0;
  }
  if ( (a2 & 1) != 0 )
  {
    v6 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD *))(*v6)[3])(v6, this);
  }
  return this;
}
