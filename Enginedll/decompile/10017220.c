/*
 * func-name: ??0EditorVar@@QAE@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAH00_N2@Z
 * func-address: 0x10017220
 * callers: 0x1004f700, 0x10051b50, 0x100da530, 0x100de140, 0x100e4800, 0x100e8d80, 0x1013a9b0, 0x1015bcd0, 0x10162f00, 0x101655b0, 0x10165f10
 * callees: none
 */

_DWORD *__thiscall EditorVar::EditorVar(
        _DWORD *this,
        char a2,
        int a3,
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
        int a16,
        char a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        char a24,
        char a25)
{
  char *v26; // edi
  char v27; // dl

  v26 = (char *)(this + 1);
  std::string::string(this + 1);
  std::string::string(this + 8);
  std::string::string(this + 15);
  std::string::operator=(v26, &a2);
  this[22] = a9;
  *this = 2;
  std::string::operator=(this + 15, &a10);
  std::string::operator=(this + 8, &a17);
  v27 = a25;
  *((_BYTE *)this + 92) = a24;
  *((_BYTE *)this + 93) = v27;
  std::string::~string(&a2);
  std::string::~string(&a10);
  std::string::~string(&a17);
  return this;
}
