/*
 * func-name: sub_1001A960
 * func-address: 0x1001a960
 * callers: none
 * callees: 0x1001a7e0, 0x100294f2
 */

void *__thiscall sub_1001A960(void *this, char a2)
{
  sub_1001A7E0(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
