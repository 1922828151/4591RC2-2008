/*
 * func-name: sub_10002450
 * func-address: 0x10002450
 * callers: none
 * callees: 0x10023306
 */

std::exception *__thiscall sub_10002450(std::exception *this, char a2)
{
  *(_DWORD *)this = &std::bad_alloc::`vftable';
  std::exception::~exception(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
