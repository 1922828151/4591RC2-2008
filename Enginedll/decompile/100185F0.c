/*
 * func-name: ??0ShaderVar@@QAE@ABU0@@Z
 * func-address: 0x100185f0
 * callers: 0x1001f770, 0x1005ddc0
 * callees: none
 */

ShaderVar *__thiscall ShaderVar::ShaderVar(ShaderVar *this, const struct ShaderVar *a2)
{
  *(_DWORD *)this = *(_DWORD *)a2;
  std::string::string((char *)this + 4, (char *)a2 + 4);
  std::string::string((char *)this + 32, (char *)a2 + 32);
  *((_DWORD *)this + 15) = *((_DWORD *)a2 + 15);
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 16);
  *((_DWORD *)this + 17) = *((_DWORD *)a2 + 17);
  qmemcpy((char *)this + 72, (char *)a2 + 72, 0xA0u);
  qmemcpy((char *)this + 232, (char *)a2 + 232, 0x2Au);
  *((_DWORD *)this + 69) = *((_DWORD *)a2 + 69);
  return this;
}
