/*
 * func-name: sub_1028B1A0
 * func-address: 0x1028b1a0
 * callers: 0x10006dc5
 * callees: 0x102c9d50
 */

CRETabPages *__thiscall sub_1028B1A0(CRETabPages *this, char a2)
{
  CRETabPages::~CRETabPages(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
