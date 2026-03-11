/*
 * func-name: ?SetItemFontColor@CREComboBox@@UAEXHK@Z
 * func-address: 0x100a3a50
 * callers: none
 * callees: none
 */

void __thiscall CREComboBox::SetItemFontColor(CREComboBox *this, int a2, unsigned int a3)
{
  *((_DWORD *)this + a2 + 384) = a3;
  if ( *((_BYTE *)this + 132) )
    (*(void (__thiscall **)(CREComboBox *))(*(_DWORD *)this + 196))(this);
}
