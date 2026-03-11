/*
 * func-name: ??4HookAlarmArea@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x1012c790
 * callers: 0x10019808
 * callees: none
 */

int __thiscall HookAlarmArea::operator=(int this, int a2)
{
  Actor::operator=(a2);
  std::string::operator=(this + 1052, a2 + 1052);
  std::string::operator=(this + 1080, a2 + 1080);
  *(_DWORD *)(this + 1108) = *(_DWORD *)(a2 + 1108);
  *(_DWORD *)(this + 1112) = *(_DWORD *)(a2 + 1112);
  std::string::operator=(this + 1116, a2 + 1116);
  std::string::operator=(this + 1144, a2 + 1144);
  *(_DWORD *)(this + 1172) = *(_DWORD *)(a2 + 1172);
  *(_DWORD *)(this + 1176) = *(_DWORD *)(a2 + 1176);
  *(float *)(this + 1180) = *(float *)(a2 + 1180);
  *(float *)(this + 1184) = *(float *)(a2 + 1184);
  *(_DWORD *)(this + 1188) = *(_DWORD *)(a2 + 1188);
  *(_DWORD *)(this + 1192) = *(_DWORD *)(a2 + 1192);
  *(_DWORD *)(this + 1196) = *(_DWORD *)(a2 + 1196);
  return this;
}
