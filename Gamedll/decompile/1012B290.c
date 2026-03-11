/*
 * func-name: ??0HookEsbEnergy@@QAE@ABV0@@Z_0
 * func-address: 0x1012b290
 * callers: 0x10006776
 * callees: none
 */

HookEsbEnergy *__thiscall HookEsbEnergy::HookEsbEnergy(HookEsbEnergy *this, const struct HookEsbEnergy *a2)
{
  HookEsbEnergy *result; // eax

  Actor::Actor(this, a2);
  *(_DWORD *)this = &HookEsbEnergy::`vftable';
  std::string::string((char *)this + 1052, (char *)a2 + 1052);
  std::string::string((char *)this + 1080, (char *)a2 + 1080);
  std::string::string((char *)this + 1108, (char *)a2 + 1108);
  *((_DWORD *)this + 284) = *((_DWORD *)a2 + 284);
  std::string::string((char *)this + 1140, (char *)a2 + 1140);
  std::string::string((char *)this + 1168, (char *)a2 + 1168);
  *((_DWORD *)this + 299) = *((_DWORD *)a2 + 299);
  *((float *)this + 300) = *((float *)a2 + 300);
  result = this;
  *((float *)this + 301) = *((float *)a2 + 301);
  *((_BYTE *)this + 1208) = *((_BYTE *)a2 + 1208);
  return result;
}
