/*
 * func-name: ??0HookEsbStore@@QAE@ABV0@@Z_0
 * func-address: 0x1012b780
 * callers: 0x1001a3b6
 * callees: none
 */

HookEsbStore *__thiscall HookEsbStore::HookEsbStore(HookEsbStore *this, const struct HookEsbStore *a2)
{
  Actor::Actor(this, a2);
  *(_DWORD *)this = &HookEsbStore::`vftable';
  std::string::string((char *)this + 1052, (char *)a2 + 1052);
  std::string::string((char *)this + 1080, (char *)a2 + 1080);
  std::string::string((char *)this + 1108, (char *)a2 + 1108);
  *((_DWORD *)this + 284) = *((_DWORD *)a2 + 284);
  return this;
}
