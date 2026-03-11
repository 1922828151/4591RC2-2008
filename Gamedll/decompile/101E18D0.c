/*
 * func-name: sub_101E18D0
 * func-address: 0x101e18d0
 * callers: 0x1000c793
 * callees: 0x100016a4, 0x102c9d50
 */

void __thiscall sub_101E18D0(int *this)
{
  int v2; // eax

  v2 = this[1];
  if ( v2 )
  {
    sub_100016A4(v2, this[2]);
    operator delete((void *)this[1]);
  }
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
}
