/*
 * func-name: sub_100DFD70
 * func-address: 0x100dfd70
 * callers: 0x1000e075
 * callees: none
 */

_DWORD *__thiscall sub_100DFD70(_DWORD *this, _DWORD *a2)
{
  *this = *a2;
  this[1] = a2[1];
  std::string::string(this + 2, a2 + 2);
  std::string::string(this + 9, a2 + 9);
  std::string::string(this + 16, a2 + 16);
  return this;
}
