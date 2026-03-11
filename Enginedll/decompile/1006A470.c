/*
 * func-name: ?SetTrackPos@CREHScrollBar@@QAEXH@Z
 * func-address: 0x1006a470
 * callers: 0x1014a750
 * callees: 0x100a3d90, 0x100a3ec0
 */

void __thiscall CREHScrollBar::SetTrackPos(CREHScrollBar *this, int a2)
{
  *((_DWORD *)this + 150) = a2;
  CREHScrollBar::Cap(this);
  CREHScrollBar::UpdateThumbRect(this);
}
