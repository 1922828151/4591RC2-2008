/*
 * func-name: ??0RandomTextureTraceLineEx@@QAE@PAVWorld@@KMHHAAVVector@@MM11MMMMMMMMM_NAAV?$vector@PAVTexture@@V?$allocator@PAVTexture@@@std@@@std@@W4BlendMode@@@Z_0
 * func-address: 0x1009d6b0
 * callers: 0x100030ee
 * callees: 0x100162d9
 */

RandomTextureTraceLineEx *__thiscall RandomTextureTraceLineEx::RandomTextureTraceLineEx(
        RandomTextureTraceLineEx *this,
        int a2,
        int a3,
        float a4,
        int a5,
        int a6,
        int a7,
        float a8,
        float a9,
        int a10,
        int a11,
        float a12,
        float a13,
        float a14,
        float a15,
        float a16,
        float a17,
        float a18,
        float a19,
        float a20,
        int a21,
        int a22,
        int a23)
{
  RandomTextureTraceLineEx *result; // eax

  RandomTextureTraceLine::RandomTextureTraceLine(
    this,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a10,
    a11,
    a12,
    a13,
    a14,
    a16,
    a17,
    a18,
    a19,
    a20,
    a21,
    a22,
    a23);
  *((float *)this + 101) = a8;
  *(_DWORD *)this = &RandomTextureTraceLineEx::`vftable';
  result = this;
  *((float *)this + 102) = a9;
  *((float *)this + 103) = a15;
  return result;
}
