/*
 * func-name: sub_100D5110
 * func-address: 0x100d5110
 * callers: none
 * callees: 0x10069fa0, 0x101a2500
 */

CREStatic *__thiscall sub_100D5110(CREStatic *this, char a2)
{
  CREStatic::~CREStatic(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
