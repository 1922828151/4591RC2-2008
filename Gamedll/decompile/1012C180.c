/*
 * func-name: ??0HookEsbTransport@@QAE@ABV0@@Z_0
 * func-address: 0x1012c180
 * callers: 0x1000e840
 * callees: none
 */

HookEsbTransport *__thiscall HookEsbTransport::HookEsbTransport(
        HookEsbTransport *this,
        const struct HookEsbTransport *a2)
{
  Actor::Actor(this, a2);
  *(_DWORD *)this = &HookEsbTransport::`vftable';
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
  *((_DWORD *)this + 302) = *((_DWORD *)a2 + 302);
  *((_DWORD *)this + 303) = *((_DWORD *)a2 + 303);
  *((_DWORD *)this + 304) = *((_DWORD *)a2 + 304);
  *((_DWORD *)this + 305) = *((_DWORD *)a2 + 305);
  *((_DWORD *)this + 306) = *((_DWORD *)a2 + 306);
  *((_DWORD *)this + 307) = *((_DWORD *)a2 + 307);
  *((float *)this + 308) = *((float *)a2 + 308);
  *((_DWORD *)this + 309) = *((_DWORD *)a2 + 309);
  *((_DWORD *)this + 310) = *((_DWORD *)a2 + 310);
  *((_DWORD *)this + 311) = *((_DWORD *)a2 + 311);
  *((_DWORD *)this + 312) = *((_DWORD *)a2 + 312);
  *((_DWORD *)this + 313) = *((_DWORD *)a2 + 313);
  *((_DWORD *)this + 314) = *((_DWORD *)a2 + 314);
  *((_DWORD *)this + 315) = *((_DWORD *)a2 + 315);
  *((float *)this + 316) = *((float *)a2 + 316);
  *((_DWORD *)this + 317) = *((_DWORD *)a2 + 317);
  return this;
}
