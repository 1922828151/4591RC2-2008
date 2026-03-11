/*
 * func-name: ?Clone@HookEsbStore@@UAEXPAVActor@@_N@Z_0
 * func-address: 0x1012d130
 * callers: 0x100160ae
 * callees: none
 */

void __thiscall HookEsbStore::Clone(HookEsbStore *this, struct Actor *a2, bool a3)
{
  Actor::Clone(this, a2, a3);
  std::string::operator=((char *)a2 + 1052, (char *)this + 1052);
  std::string::operator=((char *)a2 + 1080, (char *)this + 1080);
}
