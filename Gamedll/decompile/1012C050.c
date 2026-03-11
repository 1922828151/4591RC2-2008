/*
 * func-name: ??4HookEsbAirDrop@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x1012c050
 * callers: 0x10012729
 * callees: none
 */

int __thiscall HookEsbAirDrop::operator=(int this, int a2)
{
  Actor::operator=(a2);
  *(_BYTE *)(this + 1052) = *(_BYTE *)(a2 + 1052);
  std::string::operator=(this + 1056, a2 + 1056);
  std::string::operator=(this + 1084, a2 + 1084);
  std::string::operator=(this + 1112, a2 + 1112);
  *(_DWORD *)(this + 1140) = *(_DWORD *)(a2 + 1140);
  *(_DWORD *)(this + 1144) = *(_DWORD *)(a2 + 1144);
  std::string::operator=(this + 1148, a2 + 1148);
  *(_DWORD *)(this + 1176) = *(_DWORD *)(a2 + 1176);
  *(_DWORD *)(this + 1180) = *(_DWORD *)(a2 + 1180);
  *(_DWORD *)(this + 1184) = *(_DWORD *)(a2 + 1184);
  *(_DWORD *)(this + 1188) = *(_DWORD *)(a2 + 1188);
  *(_DWORD *)(this + 1192) = *(_DWORD *)(a2 + 1192);
  *(_DWORD *)(this + 1196) = *(_DWORD *)(a2 + 1196);
  *(float *)(this + 1200) = *(float *)(a2 + 1200);
  *(_DWORD *)(this + 1204) = *(_DWORD *)(a2 + 1204);
  return this;
}
