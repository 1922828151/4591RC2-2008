/*
 * func-name: sub_1000C840
 * func-address: 0x1000c840
 * callers: 0x1000bbd0, 0x1000c7d0, 0x1000c8a0, 0x1000c930, 0x1000c980, 0x1000ca50, 0x1000cb30
 * callees: none
 */

void __thiscall sub_1000C840(std::exception *this)
{
  *(_DWORD *)this = &std::logic_error::`vftable';
  std::string::~string((char *)this + 12);
  std::exception::~exception(this);
}
