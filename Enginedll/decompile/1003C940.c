/*
 * func-name: sub_1003C940
 * func-address: 0x1003c940
 * callers: 0x1003c9c0, 0x1003cc50, 0x1015c5e0, 0x1015c650, 0x101b88e0
 * callees: 0x1003c060, 0x101a2500
 */

void __thiscall sub_1003C940(int *this)
{
  int v2; // eax

  v2 = this[1];
  if ( v2 )
  {
    sub_1003C060(v2, this[2]);
    operator delete((void *)this[1]);
  }
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
}
