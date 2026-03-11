/*
 * func-name: ?GetSelectedItem@CREComboBox@@QAEPAUREComboBoxItem@@XZ
 * func-address: 0x100aa750
 * callers: none
 * callees: none
 */

struct REComboBoxItem *__thiscall CREComboBox::GetSelectedItem(CREComboBox *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 204);
  if ( v1 >= 0 )
    return *(struct REComboBoxItem **)(*((_DWORD *)this + 380) + 4 * v1);
  else
    return 0;
}
