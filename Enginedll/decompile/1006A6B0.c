/*
 * func-name: ?GetSelectedItem@CREPropertiesList@@QAEPAUREPropListItem@@H@Z
 * func-address: 0x1006a6b0
 * callers: none
 * callees: 0x100a41c0, 0x100b14e0
 */

struct REPropListItem *__thiscall CREPropertiesList::GetSelectedItem(CREPropertiesList *this, int a2)
{
  int SelectedIndex; // eax

  SelectedIndex = CREPropertiesList::GetSelectedIndex(this, a2);
  return CREPropertiesList::GetItem(this, SelectedIndex);
}
