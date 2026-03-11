/*
 * func-name: sub_10026FF0
 * func-address: 0x10026ff0
 * callers: 0x1002c700, 0x1002e7f0, 0x100e40e0, 0x100e42b0, 0x100e4420
 * callees: 0x10020a70, 0x101a2500
 */

void __thiscall sub_10026FF0(int *this)
{
  int v2; // eax

  v2 = this[1];
  if ( v2 )
  {
    sub_10020A70(v2, this[2]);
    operator delete((void *)this[1]);
  }
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
}
