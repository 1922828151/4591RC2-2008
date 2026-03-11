/*
 * func-name: sub_10290AC0
 * func-address: 0x10290ac0
 * callers: 0x10010f05
 * callees: 0x102c9d50
 */

CFormatedStatic *__thiscall sub_10290AC0(CFormatedStatic *this, char a2)
{
  CFormatedStatic::~CFormatedStatic(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
