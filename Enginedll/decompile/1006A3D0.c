/*
 * func-name: ?SetPageSize@CREScrollBar@@QAEXH@Z
 * func-address: 0x1006a3d0
 * callers: 0x100ae7d0, 0x100bc4f0, 0x100bc680, 0x100bd330, 0x100bd450, 0x100bda20, 0x100bdb80, 0x100c5520, 0x100cdb10, 0x1014a750
 * callees: 0x100a3c30, 0x100a3d40
 */

void __thiscall CREScrollBar::SetPageSize(CREScrollBar *this, int a2)
{
  *((_DWORD *)this + 151) = a2;
  CREScrollBar::Cap(this);
  CREScrollBar::UpdateThumbRect(this);
}
