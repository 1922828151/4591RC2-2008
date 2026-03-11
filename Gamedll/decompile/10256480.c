/*
 * func-name: sub_10256480
 * func-address: 0x10256480
 * callers: 0x10004499
 * callees: 0x102c9d50
 */

CSeperateLine *__thiscall sub_10256480(CSeperateLine *this, char a2)
{
  CSeperateLine::~CSeperateLine(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
