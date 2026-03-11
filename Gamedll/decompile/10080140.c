/*
 * func-name: ??4Effect_Laser@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x10080140
 * callers: 0x100066d6
 * callees: 0x10015424
 */

int __thiscall Effect_Laser::operator=(int this, int a2)
{
  int result; // eax

  Effect_Base::operator=(a2);
  *(float *)(this + 1136) = *(float *)(a2 + 1136);
  *(_DWORD *)(this + 1140) = *(_DWORD *)(a2 + 1140);
  *(float *)(this + 1144) = *(float *)(a2 + 1144);
  result = this;
  *(float *)(this + 1148) = *(float *)(a2 + 1148);
  *(float *)(this + 1152) = *(float *)(a2 + 1152);
  *(_BYTE *)(this + 1156) = *(_BYTE *)(a2 + 1156);
  return result;
}
