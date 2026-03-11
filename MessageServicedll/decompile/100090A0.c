/*
 * func-name: sub_100090A0
 * func-address: 0x100090a0
 * callers: 0x10004910, 0x1001a980, 0x1001aa00, 0x1001ab90, 0x1001ac90, 0x1001d730, 0x100250e0, 0x100251f0
 * callees: 0x1000b280, 0x100294f2
 */

void __usercall sub_100090A0(int *a1@<esi>)
{
  int v1; // eax

  v1 = a1[1];
  if ( v1 )
  {
    sub_1000B280(v1, a1[2]);
    operator delete((void *)a1[1]);
  }
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
}
