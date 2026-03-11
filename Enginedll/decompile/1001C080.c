/*
 * func-name: ?Set@ShaderVar@@QAEXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VVector@@@Z
 * func-address: 0x1001c080
 * callers: none
 * callees: 0x10122bb0, 0x101a24ac
 */

int __thiscall ShaderVar::Set(
        ShaderVar *this,
        char a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int *v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // ecx

  std::string::operator=((char *)this + 4, &a2);
  ShaderVar::Destroy(this);
  *((_DWORD *)this + 16) = 12;
  v12 = (int *)operator new(0xCu);
  v13 = a9;
  v14 = a10;
  *((_DWORD *)this + 15) = v12;
  *v12 = v13;
  v15 = a11;
  v12[1] = v14;
  v12[2] = v15;
  *((_DWORD *)this + 69) = 2;
  *(_DWORD *)this = 5;
  return std::string::~string(&a2);
}
