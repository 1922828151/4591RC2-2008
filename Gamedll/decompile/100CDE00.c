/*
 * func-name: ??0RandomTextureTraceLine@@QAE@PAVWorld@@KMHHAAVVector@@11MMMMMMMM_NAAV?$vector@PAVMaterial@@V?$allocator@PAVMaterial@@@std@@@std@@@Z_0
 * func-address: 0x100cde00
 * callers: 0x100028b0
 * callees: 0x10004b60, 0x1001302a, 0x10016e28
 */

RandomTextureTraceLine *__thiscall RandomTextureTraceLine::RandomTextureTraceLine(
        RandomTextureTraceLine *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19)
{
  int v20; // eax

  TraceLineSystem::TraceLineSystem(a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, 0, 2);
  *(_DWORD *)this = &RandomTextureTraceLine::`vftable';
  *((_DWORD *)this + 89) = 0;
  *((_DWORD *)this + 90) = 0;
  *((_DWORD *)this + 91) = 0;
  std::vector<Material *>::vector<Material *>((char *)this + 368);
  *((_DWORD *)this + 97) = 0;
  *((_DWORD *)this + 98) = 0;
  *((_DWORD *)this + 99) = 0;
  *((_BYTE *)this + 400) = 1;
  std::vector<Material *>::operator=((char *)this + 368, a19);
  v20 = std::vector<Material *>::size((char *)this + 368);
  sub_1001302A((char *)this + 384, v20, 0);
  TraceLineSystem::SetDefaults(this);
  return this;
}
