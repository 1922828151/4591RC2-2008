/*
 * func-name: sub_101DB460
 * func-address: 0x101db460
 * callers: 0x10013ab1
 * callees: 0x1001503c, 0x102c9d50
 */

void __thiscall sub_101DB460(int *this)
{
  int v2; // eax

  v2 = this[1];
  if ( v2 )
  {
    sub_1001503C(v2, this[2]);
    operator delete((void *)this[1]);
  }
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
}
