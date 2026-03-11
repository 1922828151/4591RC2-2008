/*
 * func-name: sub_10259A40
 * func-address: 0x10259a40
 * callers: 0x1001382c
 * callees: 0x102c9d50
 */

CREIMEEditBox *__thiscall sub_10259A40(CREIMEEditBox *this, char a2)
{
  CREIMEEditBox::~CREIMEEditBox(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
