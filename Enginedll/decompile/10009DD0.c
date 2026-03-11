/*
 * func-name: ?Set@ShaderVar@@QAEXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVTexture@@@Z
 * func-address: 0x10009dd0
 * callers: 0x10042bf0, 0x100e4db0, 0x100e6db0
 * callees: 0x10122bb0
 */

int __thiscall ShaderVar::Set(ShaderVar *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  std::string::operator=((char *)this + 4, &a2);
  ShaderVar::Destroy(this);
  *((_DWORD *)this + 15) = a9;
  *(_DWORD *)this = 9;
  *((_DWORD *)this + 69) = 3;
  return std::string::~string(&a2);
}
