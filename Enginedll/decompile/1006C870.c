/*
 * func-name: ?GetItem@CREComboBox@@QAEPAUREComboBoxItem@@I@Z
 * func-address: 0x1006c870
 * callers: none
 * callees: none
 */

struct REComboBoxItem *__thiscall CREComboBox::GetItem(CREComboBox *this, unsigned int a2)
{
  return *(struct REComboBoxItem **)(*((_DWORD *)this + 380) + 4 * a2);
}
