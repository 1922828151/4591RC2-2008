/*
 * func-name: sub_100FDD70
 * func-address: 0x100fdd70
 * callers: 0x1001813d
 * callees: none
 */

_DWORD *__thiscall sub_100FDD70(_DWORD *this, char *a2)
{
  std::string::string(this, a2);
  std::string::string(this + 7, a2 + 28);
  this[14] = *((_DWORD *)a2 + 14);
  return this;
}
