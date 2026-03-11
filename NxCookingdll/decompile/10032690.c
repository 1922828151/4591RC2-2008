/*
 * func-name: sub_10032690
 * func-address: 0x10032690
 * callers: 0x1004839e, 0x100483a9
 * callees: 0x10034bd3
 */

int __thiscall sub_10032690(void **this)
{
  *this = &std::logic_error::`vftable';
  if ( (unsigned int)this[9] >= 0x10 )
    j__free(this[4]);
  this[9] = (void *)15;
  this[8] = 0;
  *((_BYTE *)this + 16) = 0;
  return sub_10037177(this);
}
