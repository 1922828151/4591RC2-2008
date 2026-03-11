/*
 * func-name: ?ContainsItem@CREComboBox@@QAE_NPB_W@Z
 * func-address: 0x100b0950
 * callers: none
 * callees: 0x100aa770
 */

bool __thiscall CREComboBox::ContainsItem(CREComboBox *this, wchar_t *a2)
{
  return CREComboBox::FindItem(this, a2) != -1;
}
