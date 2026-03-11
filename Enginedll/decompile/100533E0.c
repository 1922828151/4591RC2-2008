/*
 * func-name: sub_100533E0
 * func-address: 0x100533e0
 * callers: 0x100534c0, 0x1013fff0
 * callees: 0x10052ef0, 0x101a2500
 */

void __thiscall sub_100533E0(int *this)
{
  int v2; // eax

  v2 = this[1];
  if ( v2 )
  {
    sub_10052EF0(v2, this[2]);
    operator delete((void *)this[1]);
  }
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
}
