/*
 * func-name: ?Clone@HookEsbSheild@@UAEXPAVActor@@_N@Z_0
 * func-address: 0x1012d7e0
 * callers: 0x10005358
 * callees: none
 */

void __thiscall HookEsbSheild::Clone(HookEsbSheild *this, struct Actor *a2, bool a3)
{
  Actor::Clone(this, a2, a3);
  std::string::operator=((char *)a2 + 1056, (char *)this + 1056);
  std::string::operator=((char *)a2 + 1084, (char *)this + 1084);
  std::string::operator=((char *)a2 + 1144, (char *)this + 1144);
  *((float *)a2 + 302) = *((float *)this + 302);
  *((float *)a2 + 303) = *((float *)this + 303);
  *((_DWORD *)a2 + 301) = *((_DWORD *)this + 301);
  *((float *)a2 + 302) = *((float *)this + 302);
  *((float *)a2 + 303) = *((float *)this + 303);
  *((_DWORD *)a2 + 304) = *((_DWORD *)this + 304);
  *((_DWORD *)a2 + 305) = *((_DWORD *)this + 305);
  *((_DWORD *)a2 + 306) = *((_DWORD *)this + 306);
}
