/*
 * func-name: ??0Shader@@QAE@ABV0@@Z
 * func-address: 0x1001f770
 * callers: none
 * callees: 0x100185f0
 */

Shader *__thiscall Shader::Shader(Shader *this, const struct Shader *a2)
{
  *(_DWORD *)this = *(_DWORD *)a2;
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 5);
  std::string::string((char *)this + 24, (char *)a2 + 24);
  *((float *)this + 13) = 0.0;
  *((float *)this + 14) = 0.0;
  *((float *)this + 15) = 0.0;
  *((float *)this + 17) = 0.0;
  *((float *)this + 18) = 0.0;
  *((float *)this + 19) = 0.0;
  *((float *)this + 21) = 0.0;
  *((float *)this + 22) = 0.0;
  *((float *)this + 23) = 0.0;
  *((float *)this + 25) = 0.0;
  *((float *)this + 26) = 0.0;
  *((float *)this + 27) = 0.0;
  qmemcpy((char *)this + 52, (char *)a2 + 52, 0x40u);
  *((float *)this + 29) = 0.0;
  *((float *)this + 30) = 0.0;
  *((float *)this + 31) = 0.0;
  *((float *)this + 33) = 0.0;
  *((float *)this + 34) = 0.0;
  *((float *)this + 35) = 0.0;
  *((float *)this + 37) = 0.0;
  *((float *)this + 38) = 0.0;
  *((float *)this + 39) = 0.0;
  *((float *)this + 41) = 0.0;
  *((float *)this + 42) = 0.0;
  *((float *)this + 43) = 0.0;
  qmemcpy((char *)this + 116, (char *)a2 + 116, 0x41u);
  *((_DWORD *)this + 46) = *((_DWORD *)a2 + 46);
  std::string::string((char *)this + 188, (char *)a2 + 188);
  std::string::string((char *)this + 216, (char *)a2 + 216);
  *((_BYTE *)this + 244) = *((_BYTE *)a2 + 244);
  ShaderVar::ShaderVar((Shader *)((char *)this + 248), (const struct Shader *)((char *)a2 + 248));
  ShaderVar::ShaderVar((Shader *)((char *)this + 528), (const struct Shader *)((char *)a2 + 528));
  ShaderVar::ShaderVar((Shader *)((char *)this + 808), (const struct Shader *)((char *)a2 + 808));
  ShaderVar::ShaderVar((Shader *)((char *)this + 1088), (const struct Shader *)((char *)a2 + 1088));
  ShaderVar::ShaderVar((Shader *)((char *)this + 1368), (const struct Shader *)((char *)a2 + 1368));
  ShaderVar::ShaderVar((Shader *)((char *)this + 1648), (const struct Shader *)((char *)a2 + 1648));
  ShaderVar::ShaderVar((Shader *)((char *)this + 1928), (const struct Shader *)((char *)a2 + 1928));
  ShaderVar::ShaderVar((Shader *)((char *)this + 2208), (const struct Shader *)((char *)a2 + 2208));
  ShaderVar::ShaderVar((Shader *)((char *)this + 2488), (const struct Shader *)((char *)a2 + 2488));
  ShaderVar::ShaderVar((Shader *)((char *)this + 2768), (const struct Shader *)((char *)a2 + 2768));
  ShaderVar::ShaderVar((Shader *)((char *)this + 3048), (const struct Shader *)((char *)a2 + 3048));
  ShaderVar::ShaderVar((Shader *)((char *)this + 3328), (const struct Shader *)((char *)a2 + 3328));
  ShaderVar::ShaderVar((Shader *)((char *)this + 3608), (const struct Shader *)((char *)a2 + 3608));
  ShaderVar::ShaderVar((Shader *)((char *)this + 3888), (const struct Shader *)((char *)a2 + 3888));
  ShaderVar::ShaderVar((Shader *)((char *)this + 4168), (const struct Shader *)((char *)a2 + 4168));
  ShaderVar::ShaderVar((Shader *)((char *)this + 4448), (const struct Shader *)((char *)a2 + 4448));
  ShaderVar::ShaderVar((Shader *)((char *)this + 4728), (const struct Shader *)((char *)a2 + 4728));
  ShaderVar::ShaderVar((Shader *)((char *)this + 5008), (const struct Shader *)((char *)a2 + 5008));
  ShaderVar::ShaderVar((Shader *)((char *)this + 5288), (const struct Shader *)((char *)a2 + 5288));
  ShaderVar::ShaderVar((Shader *)((char *)this + 5568), (const struct Shader *)((char *)a2 + 5568));
  ShaderVar::ShaderVar((Shader *)((char *)this + 5848), (const struct Shader *)((char *)a2 + 5848));
  ShaderVar::ShaderVar((Shader *)((char *)this + 6128), (const struct Shader *)((char *)a2 + 6128));
  ShaderVar::ShaderVar((Shader *)((char *)this + 6408), (const struct Shader *)((char *)a2 + 6408));
  ShaderVar::ShaderVar((Shader *)((char *)this + 6688), (const struct Shader *)((char *)a2 + 6688));
  ShaderVar::ShaderVar((Shader *)((char *)this + 6968), (const struct Shader *)((char *)a2 + 6968));
  ShaderVar::ShaderVar((Shader *)((char *)this + 7248), (const struct Shader *)((char *)a2 + 7248));
  ShaderVar::ShaderVar((Shader *)((char *)this + 7528), (const struct Shader *)((char *)a2 + 7528));
  ShaderVar::ShaderVar((Shader *)((char *)this + 7808), (const struct Shader *)((char *)a2 + 7808));
  ShaderVar::ShaderVar((Shader *)((char *)this + 8088), (const struct Shader *)((char *)a2 + 8088));
  ShaderVar::ShaderVar((Shader *)((char *)this + 8368), (const struct Shader *)((char *)a2 + 8368));
  ShaderVar::ShaderVar((Shader *)((char *)this + 8648), (const struct Shader *)((char *)a2 + 8648));
  ShaderVar::ShaderVar((Shader *)((char *)this + 8928), (const struct Shader *)((char *)a2 + 8928));
  ShaderVar::ShaderVar((Shader *)((char *)this + 9208), (const struct Shader *)((char *)a2 + 9208));
  ShaderVar::ShaderVar((Shader *)((char *)this + 9488), (const struct Shader *)((char *)a2 + 9488));
  ShaderVar::ShaderVar((Shader *)((char *)this + 9768), (const struct Shader *)((char *)a2 + 9768));
  ShaderVar::ShaderVar((Shader *)((char *)this + 10048), (const struct Shader *)((char *)a2 + 10048));
  ShaderVar::ShaderVar((Shader *)((char *)this + 10328), (const struct Shader *)((char *)a2 + 10328));
  ShaderVar::ShaderVar((Shader *)((char *)this + 10608), (const struct Shader *)((char *)a2 + 10608));
  ShaderVar::ShaderVar((Shader *)((char *)this + 10888), (const struct Shader *)((char *)a2 + 10888));
  ShaderVar::ShaderVar((Shader *)((char *)this + 11168), (const struct Shader *)((char *)a2 + 11168));
  ShaderVar::ShaderVar((Shader *)((char *)this + 11448), (const struct Shader *)((char *)a2 + 11448));
  ShaderVar::ShaderVar((Shader *)((char *)this + 11728), (const struct Shader *)((char *)a2 + 11728));
  ShaderVar::ShaderVar((Shader *)((char *)this + 12008), (const struct Shader *)((char *)a2 + 12008));
  ShaderVar::ShaderVar((Shader *)((char *)this + 12288), (const struct Shader *)((char *)a2 + 12288));
  ShaderVar::ShaderVar((Shader *)((char *)this + 12568), (const struct Shader *)((char *)a2 + 12568));
  ShaderVar::ShaderVar((Shader *)((char *)this + 12848), (const struct Shader *)((char *)a2 + 12848));
  ShaderVar::ShaderVar((Shader *)((char *)this + 13128), (const struct Shader *)((char *)a2 + 13128));
  ShaderVar::ShaderVar((Shader *)((char *)this + 13408), (const struct Shader *)((char *)a2 + 13408));
  ShaderVar::ShaderVar((Shader *)((char *)this + 13688), (const struct Shader *)((char *)a2 + 13688));
  ShaderVar::ShaderVar((Shader *)((char *)this + 13968), (const struct Shader *)((char *)a2 + 13968));
  ShaderVar::ShaderVar((Shader *)((char *)this + 14248), (const struct Shader *)((char *)a2 + 14248));
  return this;
}
