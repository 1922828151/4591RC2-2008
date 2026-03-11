/*
 * func-name: ?Set@ShaderVar@@QAEXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VVector4@@@Z
 * func-address: 0x1001c120
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
        int a11,
        int a12)
{
  int *v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // ecx
  int v17; // edx

  std::string::operator=((char *)this + 4, &a2);
  ShaderVar::Destroy(this);
  *((_DWORD *)this + 16) = 16;
  v13 = (int *)operator new(0x10u);
  v14 = a9;
  v15 = a10;
  *((_DWORD *)this + 15) = v13;
  *v13 = v14;
  v16 = a11;
  v13[1] = v15;
  v17 = a12;
  v13[2] = v16;
  v13[3] = v17;
  *((_DWORD *)this + 69) = 2;
  *(_DWORD *)this = 6;
  return std::string::~string(&a2);
}
