/*
 * func-name: ?SetDropDownSound@CREComboBox@@UAEXPAVSound@@@Z
 * func-address: 0x1006a820
 * callers: none
 * callees: none
 */

void __thiscall CREComboBox::SetDropDownSound(CREComboBox *this, struct Sound *a2)
{
  if ( !*((_DWORD *)this + 363) )
    *((_DWORD *)this + 363) = a2;
}
