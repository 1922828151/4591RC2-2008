/*
 * func-name: sub_1025B060
 * func-address: 0x1025b060
 * callers: 0x100078a1
 * callees: 0x10003dff, 0x102c9d50
 */

void __thiscall sub_1025B060(int *this)
{
  int v2; // eax

  v2 = this[1];
  if ( v2 )
  {
    sub_10003DFF(v2, this[2]);
    operator delete((void *)this[1]);
  }
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
}
