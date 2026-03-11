/*
 * func-name: sub_102782F0
 * func-address: 0x102782f0
 * callers: 0x10014c45
 * callees: 0x102c9d50
 */

CPictureLabel *__thiscall sub_102782F0(CPictureLabel *this, char a2)
{
  *(_DWORD *)this = &CNumberPicture::`vftable';
  CPictureLabel::~CPictureLabel(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
