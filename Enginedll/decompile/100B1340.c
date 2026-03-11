/*
 * func-name: ?SetNormalFont@CREListBox@@QAEXI@Z
 * func-address: 0x100b1340
 * callers: none
 * callees: 0x100ab680
 */

void __thiscall CREListBox::SetNormalFont(CREListBox *this, unsigned int a2)
{
  bool v2; // zf

  v2 = *((_BYTE *)this + 132) == 0;
  *((_DWORD *)this + 306) = a2;
  if ( !v2 )
    CREListBox::ApplyFontProperties(this);
}
