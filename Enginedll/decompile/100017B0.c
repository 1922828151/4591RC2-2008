/*
 * func-name: ??1XMLSystem@@QAE@XZ
 * func-address: 0x100017b0
 * callers: 0x10036950, 0x100372d0, 0x10037a90, 0x10037b30, 0x10095720, 0x10096e60, 0x100e2c10, 0x100e6db0, 0x100f16a0, 0x1010b030, 0x1010b240, 0x1014a230, 0x1014a2e0, 0x10159c30
 * callees: none
 */

void __thiscall XMLSystem::~XMLSystem(XMLSystem *this)
{
  std::string::~string((char *)this + 32);
  std::string::~string(this);
}
