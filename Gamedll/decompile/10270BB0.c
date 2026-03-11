/*
 * func-name: sub_10270BB0
 * func-address: 0x10270bb0
 * callers: 0x10018223
 * callees: 0x102c9d50
 */

CProgressBar *__thiscall sub_10270BB0(CProgressBar *this, char a2)
{
  CProgressBar::~CProgressBar(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
