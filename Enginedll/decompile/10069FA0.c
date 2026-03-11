/*
 * func-name: ??1CREStatic@@UAE@XZ
 * func-address: 0x10069fa0
 * callers: 0x1006a020, 0x1006a130, 0x1006a190, 0x1006a1b0, 0x1006a270, 0x1006a340, 0x1006b070, 0x10075a20, 0x100761d0, 0x100cb5e0, 0x100cbde0, 0x100cc5f0, 0x100cc650, 0x100cc710, 0x100cc8a0, 0x100cca30, 0x100ccaa0, 0x100ccf60, 0x100cd060, 0x100cd910, 0x100cd9c0, 0x100d4ef0, 0x100d5110, 0x1014fff0, 0x101500f0, 0x10150a20, 0x10150bb0, 0x10155c10, 0x10155c80, 0x10156ed0
 * callees: 0x100c7390
 */

void __thiscall CREStatic::~CREStatic(CREStatic *this)
{
  std::wstring::~wstring((char *)this + 656);
  std::wstring::~wstring((char *)this + 532);
  CREControl::~CREControl(this);
}
