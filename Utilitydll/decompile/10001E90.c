/*
 * func-name: sub_10001E90
 * func-address: 0x10001e90
 * callers: 0x10001f00, 0x10001f20, 0x10001f80, 0x10001fd0, 0x100079b0
 * callees: none
 */

void __thiscall sub_10001E90(std::exception *this)
{
  *(_DWORD *)this = &std::logic_error::`vftable';
  std::string::~string((char *)this + 12);
  std::exception::~exception(this);
}
