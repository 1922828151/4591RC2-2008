/*
 * func-name: sub_100182E0
 * func-address: 0x100182e0
 * callers: none
 * callees: 0x10014910, 0x10018280
 */

int *__thiscall sub_100182E0(int *this, char a2)
{
  int (__stdcall ***v3)(size_t, int); // eax

  sub_10018280(this);
  if ( (a2 & 1) != 0 )
  {
    v3 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), int *))(*v3)[3])(v3, this);
  }
  return this;
}
