/*
 * func-name: ?SetCompiling@Editor@@QAEX_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
 * func-address: 0x10001150
 * callers: 0x1007c450
 * callees: none
 */

int __thiscall Editor::SetCompiling(
        _BYTE *this,
        char a2,
        char a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        char a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16)
{
  this[2168] = a2;
  std::string::operator=(this + 2172, &a3);
  std::string::operator=(this + 2200, &a10);
  std::string::~string(&a3);
  return std::string::~string(&a10);
}
