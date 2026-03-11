/*
 * func-name: ??4Shader@@QAEAAV0@ABV0@@Z
 * func-address: 0x10018810
 * callers: none
 * callees: 0x100186b0
 */

char *__thiscall Shader::operator=(char *this, int a2)
{
  *(_DWORD *)this = *(_DWORD *)a2;
  *((_DWORD *)this + 1) = *(_DWORD *)(a2 + 4);
  *((_DWORD *)this + 2) = *(_DWORD *)(a2 + 8);
  *((_DWORD *)this + 3) = *(_DWORD *)(a2 + 12);
  *((_DWORD *)this + 4) = *(_DWORD *)(a2 + 16);
  *((_DWORD *)this + 5) = *(_DWORD *)(a2 + 20);
  std::string::operator=(this + 24, a2 + 24);
  qmemcpy(this + 52, (const void *)(a2 + 52), 0x40u);
  qmemcpy(this + 116, (const void *)(a2 + 116), 0x41u);
  *((_DWORD *)this + 46) = *(_DWORD *)(a2 + 184);
  std::string::operator=(this + 188, a2 + 188);
  std::string::operator=(this + 216, a2 + 216);
  this[244] = *(_BYTE *)(a2 + 244);
  ShaderVar::operator=(this + 248, a2 + 248);
  ShaderVar::operator=(this + 528, a2 + 528);
  ShaderVar::operator=(this + 808, a2 + 808);
  ShaderVar::operator=(this + 1088, a2 + 1088);
  ShaderVar::operator=(this + 1368, a2 + 1368);
  ShaderVar::operator=(this + 1648, a2 + 1648);
  ShaderVar::operator=(this + 1928, a2 + 1928);
  ShaderVar::operator=(this + 2208, a2 + 2208);
  ShaderVar::operator=(this + 2488, a2 + 2488);
  ShaderVar::operator=(this + 2768, a2 + 2768);
  ShaderVar::operator=(this + 3048, a2 + 3048);
  ShaderVar::operator=(this + 3328, a2 + 3328);
  ShaderVar::operator=(this + 3608, a2 + 3608);
  ShaderVar::operator=(this + 3888, a2 + 3888);
  ShaderVar::operator=(this + 4168, a2 + 4168);
  ShaderVar::operator=(this + 4448, a2 + 4448);
  ShaderVar::operator=(this + 4728, a2 + 4728);
  ShaderVar::operator=(this + 5008, a2 + 5008);
  ShaderVar::operator=(this + 5288, a2 + 5288);
  ShaderVar::operator=(this + 5568, a2 + 5568);
  ShaderVar::operator=(this + 5848, a2 + 5848);
  ShaderVar::operator=(this + 6128, a2 + 6128);
  ShaderVar::operator=(this + 6408, a2 + 6408);
  ShaderVar::operator=(this + 6688, a2 + 6688);
  ShaderVar::operator=(this + 6968, a2 + 6968);
  ShaderVar::operator=(this + 7248, a2 + 7248);
  ShaderVar::operator=(this + 7528, a2 + 7528);
  ShaderVar::operator=(this + 7808, a2 + 7808);
  ShaderVar::operator=(this + 8088, a2 + 8088);
  ShaderVar::operator=(this + 8368, a2 + 8368);
  ShaderVar::operator=(this + 8648, a2 + 8648);
  ShaderVar::operator=(this + 8928, a2 + 8928);
  ShaderVar::operator=(this + 9208, a2 + 9208);
  ShaderVar::operator=(this + 9488, a2 + 9488);
  ShaderVar::operator=(this + 9768, a2 + 9768);
  ShaderVar::operator=(this + 10048, a2 + 10048);
  ShaderVar::operator=(this + 10328, a2 + 10328);
  ShaderVar::operator=(this + 10608, a2 + 10608);
  ShaderVar::operator=(this + 10888, a2 + 10888);
  ShaderVar::operator=(this + 11168, a2 + 11168);
  ShaderVar::operator=(this + 11448, a2 + 11448);
  ShaderVar::operator=(this + 11728, a2 + 11728);
  ShaderVar::operator=(this + 12008, a2 + 12008);
  ShaderVar::operator=(this + 12288, a2 + 12288);
  ShaderVar::operator=(this + 12568, a2 + 12568);
  ShaderVar::operator=(this + 12848, a2 + 12848);
  ShaderVar::operator=(this + 13128, a2 + 13128);
  ShaderVar::operator=(this + 13408, a2 + 13408);
  ShaderVar::operator=(this + 13688, a2 + 13688);
  ShaderVar::operator=(this + 13968, a2 + 13968);
  ShaderVar::operator=(this + 14248, a2 + 14248);
  return this;
}
