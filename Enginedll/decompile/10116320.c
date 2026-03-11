/*
 * func-name: sub_10116320
 * func-address: 0x10116320
 * callers: 0x101b9520
 * callees: 0x10115c90, 0x101a2500
 */

void __thiscall sub_10116320(int *this)
{
  int v2; // esi
  int i; // edi

  v2 = this[1];
  if ( v2 )
  {
    for ( i = this[2]; v2 != i; v2 += 60 )
      sub_10115C90(v2);
    operator delete((void *)this[1]);
  }
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
}
