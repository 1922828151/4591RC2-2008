/*
 * func-name: sub_10262AA0
 * func-address: 0x10262aa0
 * callers: 0x1000cbb2
 * callees: 0x102c9d50
 */

CREStatic *__thiscall sub_10262AA0(CREStatic *this, char a2)
{
  CREStatic::~CREStatic(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
