/*
 * func-name: sub_100D88C0
 * func-address: 0x100d88c0
 * callers: none
 * callees: 0x100cbcc0, 0x101a2534
 */

CREComboBox *sub_100D88C0()
{
  CREComboBox *v0; // eax

  v0 = (CREComboBox *)operator new(0x6A4u);
  if ( v0 )
    return CREComboBox::CREComboBox(v0, 0);
  else
    return 0;
}
