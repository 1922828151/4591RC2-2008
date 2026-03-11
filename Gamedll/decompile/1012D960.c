/*
 * func-name: ?Clone@HookEsbAirDrop@@UAEXPAVActor@@_N@Z_0
 * func-address: 0x1012d960
 * callers: 0x10011013
 * callees: none
 */

void __thiscall HookEsbAirDrop::Clone(HookEsbAirDrop *this, struct Actor *a2, bool a3)
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
}
