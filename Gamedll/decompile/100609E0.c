/*
 * func-name: sub_100609E0
 * func-address: 0x100609e0
 * callers: 0x1000eb29
 * callees: 0x10001bd1
 */

_DWORD *__thiscall sub_100609E0(_DWORD *this, int a2)
{
  *this = &SerializeObject::`vftable';
  std::string::string(this + 1, (void *)(a2 + 4));
  sub_10001BD1(a2 + 32);
  return this;
}
