/*
 * func-name: ?SetSelectedItemFont@CREComboBox@@UAEXI@Z
 * func-address: 0x100a3a90
 * callers: none
 * callees: none
 */

void __thiscall CREComboBox::SetSelectedItemFont(CREComboBox *this, unsigned int a2)
{
  bool v2; // zf

  v2 = *((_BYTE *)this + 132) == 0;
  *((_DWORD *)this + 404) = a2;
  if ( !v2 )
    (*(void (__thiscall **)(CREComboBox *))(*(_DWORD *)this + 196))(this);
}
