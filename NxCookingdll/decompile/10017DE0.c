/*
 * func-name: sub_10017DE0
 * func-address: 0x10017de0
 * callers: 0x1000d920, 0x1000db40, 0x10017e30, 0x10018240, 0x10023610
 * callees: 0x10014910, 0x100175a0
 */

void __thiscall sub_10017DE0(int *this)
{
  int (__stdcall ***v2)(size_t, int); // eax
  int v3; // edi
  int (__stdcall ***v4)(size_t, int); // eax

  sub_100175A0(this);
  if ( this[8] )
  {
    v2 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), int))(*v2)[3])(v2, this[8]);
    this[8] = 0;
  }
  v3 = this[6];
  if ( v3 )
  {
    v4 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), int))(*v4)[3])(v4, v3 - 4);
    this[6] = 0;
  }
  this[7] = 0;
  this[5] = 0;
}
