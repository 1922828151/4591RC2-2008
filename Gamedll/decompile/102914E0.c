/*
 * func-name: sub_102914E0
 * func-address: 0x102914e0
 * callers: 0x10011ed2
 * callees: 0x102c9d50
 */

CControlBox *__thiscall sub_102914E0(CControlBox *this, char a2)
{
  CControlBox::~CControlBox(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
