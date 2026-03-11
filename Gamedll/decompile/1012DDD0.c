/*
 * func-name: ?Clone@HookEsbTransport@@UAEXPAVActor@@_N@Z_0
 * func-address: 0x1012ddd0
 * callers: 0x10019e98
 * callees: none
 */

void __thiscall HookEsbTransport::Clone(HookEsbTransport *this, struct Actor *a2, bool a3)
{
  Actor::Clone(this, a2, a3);
  std::string::operator=((char *)a2 + 1056, (char *)this + 1056);
  std::string::operator=((char *)a2 + 1084, (char *)this + 1084);
  *((_DWORD *)a2 + 286) = *((_DWORD *)this + 286);
  std::string::operator=((char *)a2 + 1148, (char *)this + 1148);
  *((_DWORD *)a2 + 294) = *((_DWORD *)this + 294);
  *((_DWORD *)a2 + 295) = *((_DWORD *)this + 295);
  *((_DWORD *)a2 + 296) = *((_DWORD *)this + 296);
  *((_DWORD *)a2 + 297) = *((_DWORD *)this + 297);
  *((_DWORD *)a2 + 298) = *((_DWORD *)this + 298);
  *((_DWORD *)a2 + 299) = *((_DWORD *)this + 299);
  *((float *)a2 + 300) = *((float *)this + 300);
  *((_DWORD *)a2 + 302) = *((_DWORD *)this + 302);
  *((_DWORD *)a2 + 303) = *((_DWORD *)this + 303);
  *((_DWORD *)a2 + 304) = *((_DWORD *)this + 304);
  *((_DWORD *)a2 + 305) = *((_DWORD *)this + 305);
  *((_DWORD *)a2 + 306) = *((_DWORD *)this + 306);
  *((_DWORD *)a2 + 307) = *((_DWORD *)this + 307);
  *((float *)a2 + 308) = *((float *)this + 308);
  *((_DWORD *)a2 + 310) = *((_DWORD *)this + 310);
  *((_DWORD *)a2 + 311) = *((_DWORD *)this + 311);
  *((_DWORD *)a2 + 312) = *((_DWORD *)this + 312);
  *((_DWORD *)a2 + 313) = *((_DWORD *)this + 313);
  *((_DWORD *)a2 + 314) = *((_DWORD *)this + 314);
  *((_DWORD *)a2 + 315) = *((_DWORD *)this + 315);
  *((float *)a2 + 316) = *((float *)this + 316);
}
