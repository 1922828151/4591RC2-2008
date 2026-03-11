/*
 * func-name: sub_1025C0E0
 * func-address: 0x1025c0e0
 * callers: 0x1000d116
 * callees: 0x102c9d50
 */

CProgressBar *__thiscall sub_1025C0E0(CProgressBar *this, char a2)
{
  *(_DWORD *)this = &CCircleProgress::`vftable';
  CProgressBar::~CProgressBar(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
