/*
 * func-name: sub_1025A420
 * func-address: 0x1025a420
 * callers: 0x10005d67
 * callees: 0x102c9d50
 */

CREScrollBar *__thiscall sub_1025A420(CREScrollBar *this, char a2)
{
  CREScrollBar::~CREScrollBar(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
