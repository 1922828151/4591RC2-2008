/*
 * func-name: sub_100079B0
 * func-address: 0x100079b0
 * callers: none
 * callees: 0x10002030
 */

std::exception *__thiscall sub_100079B0(std::exception *this, const struct std::exception *a2)
{
  sub_10002030(this, a2);
  *(_DWORD *)this = &std::length_error::`vftable';
  return this;
}
