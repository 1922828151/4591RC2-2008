/*
 * func-name: ?Clone@HookEstablishment@@UAEXPAVActor@@_N@Z_0
 * func-address: 0x1012c9e0
 * callers: 0x10014777
 * callees: none
 */

void __thiscall HookEstablishment::Clone(HookEstablishment *this, struct Actor *a2, bool a3)
{
  Actor::Clone(this, a2, a3);
  std::string::operator=((char *)a2 + 1052, (char *)this + 1052);
  std::string::operator=((char *)a2 + 1108, (char *)this + 1108);
  *((_DWORD *)a2 + 317) = *((_DWORD *)this + 317);
  *((_DWORD *)a2 + 318) = *((_DWORD *)this + 318);
  std::string::operator=((char *)a2 + 1212, (char *)this + 1212);
  *((_DWORD *)a2 + 324) = *((_DWORD *)this + 324);
  std::string::operator=((char *)a2 + 1300, (char *)this + 1300);
  std::string::operator=((char *)a2 + 1328, (char *)this + 1328);
  std::string::operator=((char *)a2 + 1360, (char *)this + 1360);
  *((_DWORD *)a2 + 339) = *((_DWORD *)this + 339);
  *((float *)a2 + 355) = *((float *)this + 355);
  *((float *)a2 + 356) = *((float *)this + 356);
  *((_DWORD *)a2 + 357) = *((_DWORD *)this + 357);
  *((_DWORD *)a2 + 358) = *((_DWORD *)this + 358);
  *((_DWORD *)a2 + 359) = *((_DWORD *)this + 359);
}
