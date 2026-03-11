/*
 * func-name: ?Attrib@XMLSystem@@QAEHPADV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVDOMNode@xercesc_2_5@@@Z
 * func-address: 0x1004a290
 * callers: 0x1003ea30, 0x1003ece0, 0x1003f520, 0x1003fa50, 0x1003fb30, 0x100405a0, 0x100431a0, 0x10043b90, 0x1004abc0, 0x100e2c10
 * callees: 0x1004a1f0
 */

int __thiscall XMLSystem::Attrib(
        XMLSystem *this,
        char *a2,
        char a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        struct xercesc_2_5::DOMNode *a10)
{
  const char *v11; // eax
  int v12; // esi
  struct xercesc_2_5::DOMNode *v14; // [esp-4h] [ebp-14h]

  v14 = a10;
  v11 = (const char *)std::string::c_str(&a3);
  v12 = XMLSystem::Attrib(this, a2, v11, v14);
  std::string::~string(&a3);
  return v12;
}
