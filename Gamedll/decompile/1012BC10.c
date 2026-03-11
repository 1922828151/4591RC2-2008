/*
 * func-name: ??0HookEsbSheild@@QAE@ABV0@@Z_0
 * func-address: 0x1012bc10
 * callers: 0x10019655
 * callees: none
 */

HookEsbSheild *__thiscall HookEsbSheild::HookEsbSheild(HookEsbSheild *this, const struct HookEsbSheild *a2)
{
  Actor::Actor(this, a2);
  *(_DWORD *)this = &HookEsbSheild::`vftable';
  *((_BYTE *)this + 1052) = *((_BYTE *)a2 + 1052);
  std::string::string((char *)this + 1056, (char *)a2 + 1056);
  std::string::string((char *)this + 1084, (char *)a2 + 1084);
  std::string::string((char *)this + 1112, (char *)a2 + 1112);
  *((_DWORD *)this + 285) = *((_DWORD *)a2 + 285);
  std::string::string((char *)this + 1144, (char *)a2 + 1144);
  std::string::string((char *)this + 1172, (char *)a2 + 1172);
  *((_DWORD *)this + 300) = *((_DWORD *)a2 + 300);
  *((_DWORD *)this + 301) = *((_DWORD *)a2 + 301);
  *((float *)this + 302) = *((float *)a2 + 302);
  *((float *)this + 303) = *((float *)a2 + 303);
  *((_DWORD *)this + 304) = *((_DWORD *)a2 + 304);
  *((_DWORD *)this + 305) = *((_DWORD *)a2 + 305);
  *((_DWORD *)this + 306) = *((_DWORD *)a2 + 306);
  return this;
}
