/*
 * func-name: ?SetFixedTextHeight@CREListBox@@QAEX_NH@Z
 * func-address: 0x100a3f60
 * callers: none
 * callees: none
 */

void __thiscall CREListBox::SetFixedTextHeight(CREListBox *this, bool a2, int a3)
{
  *((_BYTE *)this + 1209) = a2;
  if ( a2 )
    *((_DWORD *)this + 298) = a3;
}
