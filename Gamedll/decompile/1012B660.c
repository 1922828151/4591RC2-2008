/*
 * func-name: ??4HookEsbProduce@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x1012b660
 * callers: 0x10018467
 * callees: none
 */

int __thiscall HookEsbProduce::operator=(int this, int a2)
{
  int result; // eax

  Actor::operator=(a2);
  std::string::operator=(this + 1052, a2 + 1052);
  std::string::operator=(this + 1080, a2 + 1080);
  std::string::operator=(this + 1108, a2 + 1108);
  *(_DWORD *)(this + 1136) = *(_DWORD *)(a2 + 1136);
  std::string::operator=(this + 1140, a2 + 1140);
  std::string::operator=(this + 1168, a2 + 1168);
  *(_DWORD *)(this + 1196) = *(_DWORD *)(a2 + 1196);
  std::string::operator=(this + 1200, a2 + 1200);
  std::string::operator=(this + 1228, a2 + 1228);
  *(_DWORD *)(this + 1256) = *(_DWORD *)(a2 + 1256);
  *(float *)(this + 1260) = *(float *)(a2 + 1260);
  result = this;
  *(float *)(this + 1264) = *(float *)(a2 + 1264);
  return result;
}
