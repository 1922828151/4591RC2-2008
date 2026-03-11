/*
 * func-name: ??0RandomTextureTraceLineEx@@QAE@ABV0@@Z_0
 * func-address: 0x1009eda0
 * callers: 0x1000d733
 * callees: 0x1001989e
 */

RandomTextureTraceLineEx *__thiscall RandomTextureTraceLineEx::RandomTextureTraceLineEx(
        RandomTextureTraceLineEx *this,
        const struct RandomTextureTraceLineEx *a2)
{
  RandomTextureTraceLine::RandomTextureTraceLine(this, a2);
  *(_DWORD *)this = &RandomTextureTraceLineEx::`vftable';
  *((float *)this + 101) = *((float *)a2 + 101);
  *((float *)this + 102) = *((float *)a2 + 102);
  *((float *)this + 103) = *((float *)a2 + 103);
  *((_BYTE *)this + 416) = *((_BYTE *)a2 + 416);
  return this;
}
