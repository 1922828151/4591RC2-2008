/*
 * func-name: ?GetSelectedItem@CREListBox@@QAEPAUREListBoxItem@@H@Z
 * func-address: 0x1006a5d0
 * callers: none
 * callees: 0x100ab620, 0x100b0b50
 */

struct REListBoxItem *__thiscall CREListBox::GetSelectedItem(CREListBox *this, int a2)
{
  int SelectedIndex; // eax

  SelectedIndex = CREListBox::GetSelectedIndex(this, a2);
  return CREListBox::GetItem(this, SelectedIndex);
}
