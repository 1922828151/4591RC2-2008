/*
 * func-name: ??4TraceLineSystemEx@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x1009f2c0
 * callers: 0x10006e7e
 * callees: 0x100086ca
 */

int __thiscall TraceLineSystemEx::operator=(int this, int a2)
{
  TraceLineSystem::operator=(a2);
  *(float *)(this + 352) = *(float *)(a2 + 352);
  *(float *)(this + 356) = *(float *)(a2 + 356);
  *(float *)(this + 360) = *(float *)(a2 + 360);
  *(_BYTE *)(this + 364) = *(_BYTE *)(a2 + 364);
  *(float *)(this + 368) = *(float *)(a2 + 368);
  *(_BYTE *)(this + 372) = *(_BYTE *)(a2 + 372);
  return this;
}
