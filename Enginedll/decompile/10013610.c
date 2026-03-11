/*
 * func-name: sub_10013610
 * func-address: 0x10013610
 * callers: 0x10013b10, 0x1008f580
 * callees: 0x10011870, 0x101a2500
 */

void __thiscall sub_10013610(int *this)
{
  int v2; // eax

  v2 = this[1];
  if ( v2 )
  {
    sub_10011870(v2, this[2]);
    operator delete((void *)this[1]);
  }
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
}
