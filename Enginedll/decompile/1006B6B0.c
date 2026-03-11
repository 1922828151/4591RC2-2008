/*
 * func-name: ?SetDlgName@CTYDialog@@QAEXABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z
 * func-address: 0x1006b6b0
 * callers: none
 * callees: none
 */

int __thiscall CTYDialog::SetDlgName(char *this, int a2)
{
  return std::wstring::operator=(this + 3840, a2);
}
