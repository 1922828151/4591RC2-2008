/*
 * func-name: sub_10033750
 * func-address: 0x10033750
 * callers: 0x1000b53c
 * callees: none
 */

_DWORD *__thiscall sub_10033750(_DWORD *this, char *a2)
{
  std::string::string(this, a2);
  std::string::string(this + 7, a2 + 28);
  std::string::string(this + 14, a2 + 56);
  std::string::string(this + 21, a2 + 84);
  this[28] = *((_DWORD *)a2 + 28);
  this[29] = *((_DWORD *)a2 + 29);
  return this;
}
