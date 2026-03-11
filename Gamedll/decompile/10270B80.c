/*
 * func-name: sub_10270B80
 * func-address: 0x10270b80
 * callers: 0x1000d7f1
 * callees: 0x102c9d50
 */

CTYVStatic *__thiscall sub_10270B80(CTYVStatic *this, char a2)
{
  CTYVStatic::~CTYVStatic(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
