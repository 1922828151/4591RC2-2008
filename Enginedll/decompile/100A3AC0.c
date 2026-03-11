/*
 * func-name: ?SetSelectedItemFontColor@CREComboBox@@UAEXHK@Z
 * func-address: 0x100a3ac0
 * callers: none
 * callees: none
 */

void __thiscall CREComboBox::SetSelectedItemFontColor(CREComboBox *this, int a2, unsigned int a3)
{
  *((_DWORD *)this + a2 + 405) = a3;
  if ( *((_BYTE *)this + 132) )
    (*(void (__thiscall **)(CREComboBox *))(*(_DWORD *)this + 196))(this);
}
