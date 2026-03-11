/*
 * func-name: ??0HookEsbAirDrop@@QAE@ABV0@@Z_0
 * func-address: 0x1012bec0
 * callers: 0x100175f3
 * callees: none
 */

HookEsbAirDrop *__thiscall HookEsbAirDrop::HookEsbAirDrop(HookEsbAirDrop *this, const struct HookEsbAirDrop *a2)
{
  Actor::Actor(this, a2);
  *(_DWORD *)this = &HookEsbAirDrop::`vftable';
  *((_BYTE *)this + 1052) = *((_BYTE *)a2 + 1052);
  std::string::string((char *)this + 1056, (char *)a2 + 1056);
  std::string::string((char *)this + 1084, (char *)a2 + 1084);
  std::string::string((char *)this + 1112, (char *)a2 + 1112);
  *((_DWORD *)this + 285) = *((_DWORD *)a2 + 285);
  *((_DWORD *)this + 286) = *((_DWORD *)a2 + 286);
  std::string::string((char *)this + 1148, (char *)a2 + 1148);
  *((_DWORD *)this + 294) = *((_DWORD *)a2 + 294);
  *((_DWORD *)this + 295) = *((_DWORD *)a2 + 295);
  *((_DWORD *)this + 296) = *((_DWORD *)a2 + 296);
  *((_DWORD *)this + 297) = *((_DWORD *)a2 + 297);
  *((_DWORD *)this + 298) = *((_DWORD *)a2 + 298);
  *((_DWORD *)this + 299) = *((_DWORD *)a2 + 299);
  *((float *)this + 300) = *((float *)a2 + 300);
  *((_DWORD *)this + 301) = *((_DWORD *)a2 + 301);
  return this;
}
