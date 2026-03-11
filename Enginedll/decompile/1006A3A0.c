/*
 * func-name: ?SetTrackPos@CREScrollBar@@QAEXH@Z
 * func-address: 0x1006a3a0
 * callers: 0x100ae340, 0x100c5520, 0x1014a750
 * callees: 0x100a3c30, 0x100a3d40
 */

void __thiscall CREScrollBar::SetTrackPos(CREScrollBar *this, int a2)
{
  *((_DWORD *)this + 150) = a2;
  CREScrollBar::Cap(this);
  CREScrollBar::UpdateThumbRect(this);
}
