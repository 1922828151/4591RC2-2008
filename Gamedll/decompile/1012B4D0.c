/*
 * func-name: ??0HookEsbProduce@@QAE@ABV0@@Z_0
 * func-address: 0x1012b4d0
 * callers: 0x1000f498
 * callees: none
 */

HookEsbProduce *__thiscall HookEsbProduce::HookEsbProduce(HookEsbProduce *this, const struct HookEsbProduce *a2)
{
  HookEsbProduce *result; // eax

  Actor::Actor(this, a2);
  *(_DWORD *)this = &HookEsbProduce::`vftable';
  std::string::string((char *)this + 1052, (char *)a2 + 1052);
  std::string::string((char *)this + 1080, (char *)a2 + 1080);
  std::string::string((char *)this + 1108, (char *)a2 + 1108);
  *((_DWORD *)this + 284) = *((_DWORD *)a2 + 284);
  std::string::string((char *)this + 1140, (char *)a2 + 1140);
  std::string::string((char *)this + 1168, (char *)a2 + 1168);
  *((_DWORD *)this + 299) = *((_DWORD *)a2 + 299);
  std::string::string((char *)this + 1200, (char *)a2 + 1200);
  std::string::string((char *)this + 1228, (char *)a2 + 1228);
  *((_DWORD *)this + 314) = *((_DWORD *)a2 + 314);
  *((float *)this + 315) = *((float *)a2 + 315);
  result = this;
  *((float *)this + 316) = *((float *)a2 + 316);
  return result;
}
