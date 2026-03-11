/*
 * func-name: sub_10053610
 * func-address: 0x10053610
 * callers: 0x10053990, 0x10053a80, 0x10053bd0, 0x10053d20
 * callees: 0x10053240, 0x101a2500
 */

void __thiscall sub_10053610(int *this)
{
  int v2; // eax

  v2 = this[1];
  if ( v2 )
  {
    sub_10053240(v2, this[2]);
    operator delete((void *)this[1]);
  }
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
}
