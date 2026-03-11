/*
 * func-name: ??4HookEsbSheild@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x1012bd90
 * callers: 0x1001a0b9
 * callees: none
 */

int __thiscall HookEsbSheild::operator=(int this, int a2)
{
  Actor::operator=(a2);
  *(_BYTE *)(this + 1052) = *(_BYTE *)(a2 + 1052);
  std::string::operator=(this + 1056, a2 + 1056);
  std::string::operator=(this + 1084, a2 + 1084);
  std::string::operator=(this + 1112, a2 + 1112);
  *(_DWORD *)(this + 1140) = *(_DWORD *)(a2 + 1140);
  std::string::operator=(this + 1144, a2 + 1144);
  std::string::operator=(this + 1172, a2 + 1172);
  *(_DWORD *)(this + 1200) = *(_DWORD *)(a2 + 1200);
  *(_DWORD *)(this + 1204) = *(_DWORD *)(a2 + 1204);
  *(float *)(this + 1208) = *(float *)(a2 + 1208);
  *(float *)(this + 1212) = *(float *)(a2 + 1212);
  *(_DWORD *)(this + 1216) = *(_DWORD *)(a2 + 1216);
  *(_DWORD *)(this + 1220) = *(_DWORD *)(a2 + 1220);
  *(_DWORD *)(this + 1224) = *(_DWORD *)(a2 + 1224);
  return this;
}
