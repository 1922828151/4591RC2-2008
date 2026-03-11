/*
 * func-name: ??4MaterialIntersect@@QAEAAV0@ABV0@@Z
 * func-address: 0x1015aaf0
 * callers: none
 * callees: 0x1015a8d0
 */

char *__thiscall MaterialIntersect::operator=(char *this, _DWORD *a2)
{
  sub_1015A8D0((int)this, a2);
  sub_1015A8D0((int)(this + 16), a2 + 4);
  std::string::operator=(this + 32, a2 + 8);
  return this;
}
