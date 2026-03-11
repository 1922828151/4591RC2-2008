/*
 * func-name: sub_1025A450
 * func-address: 0x1025a450
 * callers: 0x10006a46
 * callees: 0x102c9d50
 */

CMultiLineStatic *__thiscall sub_1025A450(CMultiLineStatic *this, char a2)
{
  CMultiLineStatic::~CMultiLineStatic(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
