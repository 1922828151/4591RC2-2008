/*
 * func-name: sub_10002500
 * func-address: 0x10002500
 * callers: none
 * callees: 0x10023306
 */

std::exception *__thiscall sub_10002500(std::exception *this, char a2)
{
  *(_DWORD *)this = &std::logic_error::`vftable';
  std::string::~string((char *)this + 12);
  std::exception::~exception(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
