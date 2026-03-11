/*
 * func-name: ??4Effect_LightDizzy@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x10089800
 * callers: 0x10014f4c
 * callees: none
 */

int __thiscall Effect_LightDizzy::operator=(int this, int a2)
{
  Actor::operator=(a2);
  std::string::operator=(this + 1052, a2 + 1052);
  std::string::operator=(this + 1080, a2 + 1080);
  *(float *)(this + 1108) = *(float *)(a2 + 1108);
  *(float *)(this + 1112) = *(float *)(a2 + 1112);
  *(float *)(this + 1116) = *(float *)(a2 + 1116);
  *(float *)(this + 1120) = *(float *)(a2 + 1120);
  *(_DWORD *)(this + 1124) = *(_DWORD *)(a2 + 1124);
  *(float *)(this + 1128) = *(float *)(a2 + 1128);
  *(_DWORD *)(this + 1132) = *(_DWORD *)(a2 + 1132);
  *(_DWORD *)(this + 1136) = *(_DWORD *)(a2 + 1136);
  *(_DWORD *)(this + 1140) = *(_DWORD *)(a2 + 1140);
  *(_DWORD *)(this + 1144) = *(_DWORD *)(a2 + 1144);
  *(_DWORD *)(this + 1148) = *(_DWORD *)(a2 + 1148);
  *(_DWORD *)(this + 1152) = *(_DWORD *)(a2 + 1152);
  *(float *)(this + 1156) = *(float *)(a2 + 1156);
  *(float *)(this + 1160) = *(float *)(a2 + 1160);
  *(float *)(this + 1164) = *(float *)(a2 + 1164);
  *(float *)(this + 1168) = *(float *)(a2 + 1168);
  *(_BYTE *)(this + 1172) = *(_BYTE *)(a2 + 1172);
  return this;
}
