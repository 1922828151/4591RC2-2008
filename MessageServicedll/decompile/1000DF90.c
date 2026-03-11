/*
 * func-name: sub_1000DF90
 * func-address: 0x1000df90
 * callers: none
 * callees: 0x1000df00, 0x100294f2
 */

void *__thiscall sub_1000DF90(void *this, char a2)
{
  sub_1000DF00(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
