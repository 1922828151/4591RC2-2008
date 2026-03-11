/*
 * func-name: ??4Effect_DynamicLasers@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x1007f150
 * callers: 0x1000fb82
 * callees: 0x10015424
 */

int __thiscall Effect_DynamicLasers::operator=(int this, int a2)
{
  Effect_Base::operator=(a2);
  *(_DWORD *)(this + 1136) = *(_DWORD *)(a2 + 1136);
  *(float *)(this + 1140) = *(float *)(a2 + 1140);
  *(_DWORD *)(this + 1144) = *(_DWORD *)(a2 + 1144);
  *(float *)(this + 1148) = *(float *)(a2 + 1148);
  *(float *)(this + 1152) = *(float *)(a2 + 1152);
  *(float *)(this + 1156) = *(float *)(a2 + 1156);
  *(_DWORD *)(this + 1160) = *(_DWORD *)(a2 + 1160);
  *(_DWORD *)(this + 1164) = *(_DWORD *)(a2 + 1164);
  *(_DWORD *)(this + 1168) = *(_DWORD *)(a2 + 1168);
  *(float *)(this + 1172) = *(float *)(a2 + 1172);
  return this;
}
