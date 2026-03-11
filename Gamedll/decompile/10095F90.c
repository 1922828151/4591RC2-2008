/*
 * func-name: sub_10095F90
 * func-address: 0x10095f90
 * callers: 0x1000d3be
 * callees: 0x1000f9d4, 0x102c9d50
 */

void __thiscall sub_10095F90(int *this)
{
  int v2; // eax

  v2 = this[1];
  if ( v2 )
  {
    sub_1000F9D4(v2, this[2]);
    operator delete((void *)this[1]);
  }
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
}
