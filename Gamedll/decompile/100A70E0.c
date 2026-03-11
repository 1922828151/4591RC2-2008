/*
 * func-name: sub_100A70E0
 * func-address: 0x100a70e0
 * callers: 0x10012693
 * callees: 0x10001b77, 0x102c9d50
 */

void __thiscall sub_100A70E0(int *this)
{
  int v2; // eax

  v2 = this[1];
  if ( v2 )
  {
    sub_10001B77(v2, this[2]);
    operator delete((void *)this[1]);
  }
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
}
