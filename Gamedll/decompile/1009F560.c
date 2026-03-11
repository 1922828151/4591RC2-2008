/*
 * func-name: ??4Effect_Light@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x1009f560
 * callers: 0x10005e25
 * callees: 0x10015424
 */

int __thiscall Effect_Light::operator=(int this, int a2)
{
  Effect_Base::operator=(a2);
  *(_DWORD *)(this + 1136) = *(_DWORD *)(a2 + 1136);
  *(float *)(this + 1140) = *(float *)(a2 + 1140);
  return this;
}
