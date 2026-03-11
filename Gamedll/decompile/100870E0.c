/*
 * func-name: ??4Effect_LightBeam@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x100870e0
 * callers: 0x10002941
 * callees: 0x10015424
 */

int __thiscall Effect_LightBeam::operator=(int this, int a2)
{
  int result; // eax

  Effect_Base::operator=(a2);
  *(_DWORD *)(this + 1136) = *(_DWORD *)(a2 + 1136);
  *(float *)(this + 1140) = *(float *)(a2 + 1140);
  result = this;
  *(float *)(this + 1144) = *(float *)(a2 + 1144);
  *(float *)(this + 1148) = *(float *)(a2 + 1148);
  *(float *)(this + 1152) = *(float *)(a2 + 1152);
  *(float *)(this + 1156) = *(float *)(a2 + 1156);
  *(float *)(this + 1160) = *(float *)(a2 + 1160);
  *(float *)(this + 1164) = *(float *)(a2 + 1164);
  *(float *)(this + 1168) = *(float *)(a2 + 1168);
  *(float *)(this + 1172) = *(float *)(a2 + 1172);
  *(float *)(this + 1176) = *(float *)(a2 + 1176);
  *(_DWORD *)(this + 1180) = *(_DWORD *)(a2 + 1180);
  return result;
}
