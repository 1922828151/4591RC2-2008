/*
 * func-name: sub_10259A10
 * func-address: 0x10259a10
 * callers: 0x1000f81c
 * callees: 0x102c9d50
 */

CREButton *__thiscall sub_10259A10(CREButton *this, char a2)
{
  CREButton::~CREButton(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
