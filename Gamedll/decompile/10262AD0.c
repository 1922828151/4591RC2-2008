/*
 * func-name: sub_10262AD0
 * func-address: 0x10262ad0
 * callers: 0x10017ad0
 * callees: 0x102c9d50
 */

CPictureLabel *__thiscall sub_10262AD0(CPictureLabel *this, char a2)
{
  CPictureLabel::~CPictureLabel(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
