/*
 * func-name: sub_102778C0
 * func-address: 0x102778c0
 * callers: 0x10004543
 * callees: 0x102c9d50
 */

CPictureLabel *__thiscall sub_102778C0(CPictureLabel *this, char a2)
{
  *(_DWORD *)this = &CMiniMap::`vftable';
  CPictureLabel::~CPictureLabel(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
