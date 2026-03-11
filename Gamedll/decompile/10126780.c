/*
 * func-name: sub_10126780
 * func-address: 0x10126780
 * callers: 0x100189e9
 * callees: 0x102c9d50
 */

void __thiscall sub_10126780(int *this)
{
  int v2; // esi
  int i; // edi

  v2 = this[1];
  if ( v2 )
  {
    for ( i = this[2]; v2 != i; v2 += 16 )
      std::vector<ModelFrame *>::~vector<ModelFrame *>(v2);
    operator delete((void *)this[1]);
  }
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
}
