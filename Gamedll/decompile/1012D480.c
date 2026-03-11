/*
 * func-name: ?Clone@HookEsbTake@@UAEXPAVActor@@_N@Z_0
 * func-address: 0x1012d480
 * callers: 0x10012c8d
 * callees: none
 */

void __thiscall HookEsbTake::Clone(HookEsbTake *this, struct Actor *a2, bool a3)
{
  Actor::Clone(this, a2, a3);
  std::string::operator=((char *)a2 + 1056, (char *)this + 1056);
  std::string::operator=((char *)a2 + 1084, (char *)this + 1084);
  std::string::operator=((char *)a2 + 1144, (char *)this + 1144);
  *((float *)a2 + 301) = *((float *)this + 301);
  *((float *)a2 + 302) = *((float *)this + 302);
  *((_DWORD *)a2 + 304) = *((_DWORD *)this + 304);
  *((_DWORD *)a2 + 305) = *((_DWORD *)this + 305);
  *((_DWORD *)a2 + 306) = *((_DWORD *)this + 306);
  *((float *)a2 + 303) = *((float *)this + 303);
  *((_DWORD *)a2 + 307) = *((_DWORD *)this + 307);
  *((_DWORD *)a2 + 308) = *((_DWORD *)this + 308);
  *((_DWORD *)a2 + 309) = *((_DWORD *)this + 309);
}
