/*
 * func-name: sub_101105A0
 * func-address: 0x101105a0
 * callers: 0x101107e0
 * callees: 0x1010fce0, 0x101a2500
 */

void __thiscall sub_101105A0(int *this)
{
  int v2; // eax

  v2 = this[1];
  if ( v2 )
  {
    sub_1010FCE0(v2, this[2]);
    operator delete((void *)this[1]);
  }
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
}
