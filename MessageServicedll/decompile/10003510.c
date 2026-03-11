/*
 * func-name: sub_10003510
 * func-address: 0x10003510
 * callers: none
 * callees: 0x100294f2
 */

std::exception *__thiscall sub_10003510(std::exception *this, char a2)
{
  *(_DWORD *)this = &std::bad_alloc::`vftable';
  std::exception::~exception(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
