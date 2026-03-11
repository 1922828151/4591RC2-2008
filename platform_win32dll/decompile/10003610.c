/*
 * func-name: sub_10003610
 * func-address: 0x10003610
 * callers: none
 * callees: 0x10019870
 */

std::exception *__thiscall sub_10003610(std::exception *this, char a2)
{
  *(_DWORD *)this = &std::logic_error::`vftable';
  std::string::~string((char *)this + 12);
  std::exception::~exception(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
