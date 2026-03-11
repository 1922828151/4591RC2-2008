/*
 * func-name: ?GetDlgName@CTYDialog@@QAE?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ
 * func-address: 0x1006b6c0
 * callers: 0x1014d460
 * callees: none
 */

void *__thiscall CTYDialog::GetDlgName(int this, void *a2)
{
  std::wstring::wstring(a2, (void *)(this + 3840));
  return a2;
}
