/*
 * func-name: sub_10008650
 * func-address: 0x10008650
 * callers: none
 * callees: 0x10008510, 0x10018cf2
 */

void *__thiscall sub_10008650(void *this, char a2)
{
  sub_10008510(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
