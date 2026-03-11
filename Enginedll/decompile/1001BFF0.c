/*
 * func-name: ?Set@ShaderVar@@QAEXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VMatrix@@@Z
 * func-address: 0x1001bff0
 * callers: none
 * callees: 0x10122bb0, 0x101a24ac, 0x101a252e
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
        char Src,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24)
{
  void *v25; // eax

  std::string::operator=((char *)this + 4, &a2);
  ShaderVar::Destroy(this);
  *((_DWORD *)this + 16) = 64;
  v25 = operator new(0x40u);
  *((_DWORD *)this + 15) = v25;
  memcpy(v25, &Src, 0x40u);
  *((_DWORD *)this + 69) = 2;
  *(_DWORD *)this = 7;
  return std::string::~string(&a2);
}
