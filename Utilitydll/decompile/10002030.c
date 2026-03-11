/*
 * func-name: sub_10002030
 * func-address: 0x10002030
 * callers: 0x100079b0
 * callees: none
 */

std::exception *__thiscall sub_10002030(std::exception *this, const struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::logic_error::`vftable';
  std::string::string((char *)this + 12, (char *)a2 + 12);
  return this;
}
