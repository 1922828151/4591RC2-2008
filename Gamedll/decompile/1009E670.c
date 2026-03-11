/*
 * func-name: sub_1009E670
 * func-address: 0x1009e670
 * callers: 0x10003283
 * callees: 0x10010a1e, 0x102c9d50
 */

void __thiscall sub_1009E670(int *this)
{
  int v2; // eax

  v2 = this[1];
  if ( v2 )
  {
    sub_10010A1E(v2, this[2]);
    operator delete((void *)this[1]);
  }
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
}
