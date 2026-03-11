/*
 * func-name: ?Set@ShaderVar@@QAEXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@Z
 * func-address: 0x1001bf60
 * callers: none
 * callees: 0x10122bb0, 0x101a24ac
 */

int __thiscall ShaderVar::Set(ShaderVar *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int *v10; // eax
  int v11; // ecx

  std::string::operator=((char *)this + 4, &a2);
  ShaderVar::Destroy(this);
  *((_DWORD *)this + 16) = 4;
  v10 = (int *)operator new(4u);
  v11 = a9;
  *((_DWORD *)this + 15) = v10;
  *v10 = v11;
  *((_DWORD *)this + 69) = 2;
  *(_DWORD *)this = 3;
  return std::string::~string(&a2);
}
