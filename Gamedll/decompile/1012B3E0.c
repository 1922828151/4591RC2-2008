/*
 * func-name: ??4HookEsbEnergy@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x1012b3e0
 * callers: 0x10008eb8
 * callees: none
 */

int __thiscall HookEsbEnergy::operator=(int this, int a2)
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
  *(float *)(this + 1200) = *(float *)(a2 + 1200);
  result = this;
  *(float *)(this + 1204) = *(float *)(a2 + 1204);
  *(_BYTE *)(this + 1208) = *(_BYTE *)(a2 + 1208);
  return result;
}
