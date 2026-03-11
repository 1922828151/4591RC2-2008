/*
 * func-name: ?GetCaptionText@CREDialog@@QAE?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ
 * func-address: 0x10069780
 * callers: 0x1014d460
 * callees: none
 */

int __thiscall CREDialog::GetCaptionText(char *this, int a2)
{
  std::wstring::wstring(a2, this + 180);
  return a2;
}
