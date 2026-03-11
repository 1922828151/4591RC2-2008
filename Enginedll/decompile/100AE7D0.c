/*
 * func-name: ?ResetScrollBar@CREListCtrl@@IAEXXZ
 * func-address: 0x100ae7d0
 * callers: 0x100cdb80
 * callees: 0x1006a3d0, 0x100ab130
 */

void __thiscall CREListCtrl::ResetScrollBar(CREListCtrl *this)
{
  CREScrollBar *v2; // ecx
  int v3; // eax

  v2 = (CREScrollBar *)*((_DWORD *)this + 177);
  if ( v2 )
  {
    CREScrollBar::SetPageSize(
      v2,
      (*((_DWORD *)this + 44) - *((_DWORD *)this + 178) - *((_DWORD *)this + 42) - 2) / *((_DWORD *)this + 180));
    v3 = *((_DWORD *)this + 191);
    if ( v3 )
      CREScrollBar::SetTrackRange(*((CREScrollBar **)this + 177), 0, (*((_DWORD *)this + 192) - v3) / 20);
    else
      CREScrollBar::SetTrackRange(*((CREScrollBar **)this + 177), 0, 0);
  }
}
