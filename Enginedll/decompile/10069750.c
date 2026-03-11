/*
 * func-name: ?SetCaptionText@CREDialog@@QAEXPB_W@Z
 * func-address: 0x10069750
 * callers: none
 * callees: none
 */

void __thiscall CREDialog::SetCaptionText(wchar_t *this, wchar_t *Source)
{
  wcsncpy(this + 90, Source, 0x100u);
  this[345] = 0;
}
