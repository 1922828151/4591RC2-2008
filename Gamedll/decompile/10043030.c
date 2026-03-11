/*
 * func-name: sub_10043030
 * func-address: 0x10043030
 * callers: 0x100068c5
 * callees: none
 */

_DWORD *__thiscall sub_10043030(_DWORD *this, char *a2)
{
  std::string::string(this, a2);
  this[7] = *((_DWORD *)a2 + 7);
  this[8] = *((_DWORD *)a2 + 8);
  std::string::string(this + 9, a2 + 36);
  return this;
}
