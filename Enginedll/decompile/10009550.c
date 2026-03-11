/*
 * func-name: ??1EditorVar@@QAE@XZ
 * func-address: 0x10009550
 * callers: 0x10006230, 0x10006780, 0x100080a0, 0x1000c0c0, 0x1000cc70, 0x1000f8d0, 0x10011a10, 0x1001e530, 0x1002bbd0, 0x1002be20, 0x100300f0, 0x10038ca0, 0x10045740, 0x1004f700, 0x10051b50, 0x100544f0, 0x100da530, 0x100de140, 0x100e4800, 0x100e8d80, 0x10116c70, 0x1013a9b0, 0x1015bcd0, 0x10162f00, 0x101655b0, 0x10165f10, 0x1016e600
 * callees: none
 */

void __thiscall EditorVar::~EditorVar(EditorVar *this)
{
  std::string::~string((char *)this + 60);
  std::string::~string((char *)this + 32);
  std::string::~string((char *)this + 4);
}
