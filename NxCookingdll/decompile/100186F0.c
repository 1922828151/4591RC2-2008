/*
 * func-name: sub_100186F0
 * func-address: 0x100186f0
 * callers: none
 * callees: 0x10014910, 0x100175a0, 0x10017750
 */

int *__thiscall sub_100186F0(int *this, char a2)
{
  int (__stdcall ***v3)(size_t, int); // eax

  *this = (int)&Opcode::Model::`vftable';
  sub_100175A0(this);
  sub_10017750(this);
  if ( (a2 & 1) != 0 )
  {
    v3 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), int *))(*v3)[3])(v3, this);
  }
  return this;
}
