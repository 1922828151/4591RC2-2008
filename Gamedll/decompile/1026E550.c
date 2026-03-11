/*
 * func-name: sub_1026E550
 * func-address: 0x1026e550
 * callers: 0x10013205
 * callees: 0x102c9d50
 */

CItemHolder *__thiscall sub_1026E550(CItemHolder *this, char a2)
{
  CItemHolder::~CItemHolder(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
