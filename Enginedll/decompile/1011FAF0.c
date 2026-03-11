/*
 * func-name: ?Set@ShaderVar@@QAEXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Type@EditorVar@@W4DeleteType@1@PAX@Z
 * func-address: 0x1011faf0
 * callers: 0x10122ce0, 0x10122e00, 0x1012ffd0
 * callees: none
 */

int __thiscall ShaderVar::Set(
        _DWORD *this,
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
  int v12; // eax

  *this = a9;
  std::string::operator=(this + 1, &a2);
  v12 = a11;
  this[69] = a10;
  this[15] = v12;
  return std::string::~string(&a2);
}
