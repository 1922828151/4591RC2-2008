/*
 * func-name: ?SetTrackRange@CREHScrollBar@@QAEXHH@Z
 * func-address: 0x100ab4e0
 * callers: 0x1014a750
 * callees: 0x100a3d90
 */

void __thiscall CREHScrollBar::SetTrackRange(CREHScrollBar *this, int a2, int a3)
{
  int v3; // edi
  int v4; // edx

  v3 = *((_DWORD *)this + 150);
  *((_DWORD *)this + 152) = a2;
  *((_DWORD *)this + 153) = a3;
  if ( v3 < a2 || (v4 = *((_DWORD *)this + 151), a3 - a2 <= v4) )
  {
    *((_DWORD *)this + 150) = a2;
  }
  else if ( v4 + v3 > a3 )
  {
    *((_DWORD *)this + 150) = a3 - v4;
    CREHScrollBar::UpdateThumbRect(this);
    return;
  }
  CREHScrollBar::UpdateThumbRect(this);
}
