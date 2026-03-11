/*
 * func-name: sub_10056190
 * func-address: 0x10056190
 * callers: 0x1000fcc7
 * callees: 0x100026f8, 0x102c9d50
 */

void *__thiscall sub_10056190(void *this, char a2)
{
  sub_100026F8();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
