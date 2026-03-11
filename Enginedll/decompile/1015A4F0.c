/*
 * func-name: sub_1015A4F0
 * func-address: 0x1015a4f0
 * callers: 0x10159ac0, 0x10159b20, 0x1015a400, 0x1015a860
 * callees: 0x1015a210, 0x101a2500
 */

void __thiscall sub_1015A4F0(int *this)
{
  int v2; // eax

  v2 = this[1];
  if ( v2 )
  {
    sub_1015A210(v2, this[2]);
    operator delete((void *)this[1]);
  }
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
}
