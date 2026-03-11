/*
 * func-name: ??4RandomTextureTraceLineEx@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x1009f3b0
 * callers: 0x100141a0
 * callees: 0x100041a1
 */

int __thiscall RandomTextureTraceLineEx::operator=(int this, int a2)
{
  RandomTextureTraceLine::operator=(a2);
  *(float *)(this + 404) = *(float *)(a2 + 404);
  *(float *)(this + 408) = *(float *)(a2 + 408);
  *(float *)(this + 412) = *(float *)(a2 + 412);
  *(_BYTE *)(this + 416) = *(_BYTE *)(a2 + 416);
  return this;
}
