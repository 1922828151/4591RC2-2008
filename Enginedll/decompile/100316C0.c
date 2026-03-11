/*
 * func-name: sub_100316C0
 * func-address: 0x100316c0
 * callers: 0x100319f0, 0x10031e20, 0x10031ec0, 0x10173030, 0x10176a10
 * callees: 0x10013780, 0x101a2500
 */

void __thiscall sub_100316C0(int *this)
{
  int v2; // eax

  v2 = this[1];
  if ( v2 )
  {
    sub_10013780(v2, this[2]);
    operator delete((void *)this[1]);
  }
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
}
