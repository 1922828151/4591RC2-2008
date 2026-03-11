/*
 * func-name: ?Clone@HookEsbProduce@@UAEXPAVActor@@_N@Z_0
 * func-address: 0x1012cf00
 * callers: 0x100026e9
 * callees: none
 */

void __thiscall HookEsbProduce::Clone(HookEsbProduce *this, struct Actor *a2, bool a3)
{
  Actor::Clone(this, a2, a3);
  std::string::operator=((char *)a2 + 1052, (char *)this + 1052);
  std::string::operator=((char *)a2 + 1080, (char *)this + 1080);
  std::string::operator=((char *)a2 + 1140, (char *)this + 1140);
  std::string::operator=((char *)a2 + 1200, (char *)this + 1200);
  *((float *)a2 + 315) = *((float *)this + 315);
  *((float *)a2 + 316) = *((float *)this + 316);
}
