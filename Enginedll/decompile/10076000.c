/*
 * func-name: sub_10076000
 * func-address: 0x10076000
 * callers: 0x100760a0
 * callees: 0x10075f50, 0x101a2500
 */

void __thiscall sub_10076000(int *this)
{
  int v2; // eax

  v2 = this[1];
  if ( v2 )
  {
    sub_10075F50(v2, this[2]);
    operator delete((void *)this[1]);
  }
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
}
