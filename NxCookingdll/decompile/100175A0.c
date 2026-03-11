/*
 * func-name: sub_100175A0
 * func-address: 0x100175a0
 * callers: 0x10017de0, 0x10018280, 0x10018510, 0x10018570, 0x10018590, 0x100186f0
 * callees: 0x10014910, 0x10017360
 */

void __thiscall sub_100175A0(int *this)
{
  int v2; // edi
  int (__stdcall ***v3)(size_t, int); // eax
  void (__thiscall ***v4)(_DWORD, int); // ecx

  v2 = this[3];
  if ( v2 )
  {
    sub_10017360(this[3]);
    v3 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), int))(*v3)[3])(v3, v2);
    this[3] = 0;
  }
  v4 = (void (__thiscall ***)(_DWORD, int))this[4];
  if ( v4 )
  {
    (**v4)(v4, 1);
    this[4] = 0;
  }
}
