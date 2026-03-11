/*
 * func-name: sub_10003540
 * func-address: 0x10003540
 * callers: none
 * callees: 0x10019870
 */

std::exception *__thiscall sub_10003540(std::exception *this, char a2)
{
  *(_DWORD *)this = &std::bad_alloc::`vftable';
  std::exception::~exception(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
