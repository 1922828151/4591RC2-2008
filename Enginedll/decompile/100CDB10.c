/*
 * func-name: ?DeleteAllItems@CREListCtrl@@QAEXXZ
 * func-address: 0x100cdb10
 * callers: none
 * callees: 0x1006a3d0, 0x10076040, 0x100ab130
 */

void __thiscall CREListCtrl::DeleteAllItems(CREListCtrl *this)
{
  unsigned int v2; // ebx
  int *v3; // esi
  unsigned int v4; // ebp
  CREScrollBar *v5; // ecx
  int v6; // [esp+10h] [ebp-8h] BYREF

  v2 = *((_DWORD *)this + 192);
  v3 = (int *)((char *)this + 760);
  if ( *((_DWORD *)this + 191) > v2 )
    invalid_parameter_noinfo();
  v4 = v3[1];
  if ( v4 > v3[2] )
    invalid_parameter_noinfo();
  sub_10076040(v3, &v6, (int)v3, v4, (int)v3, v2);
  v5 = (CREScrollBar *)*((_DWORD *)this + 177);
  if ( v5 )
  {
    CREScrollBar::SetPageSize(v5, 0);
    CREScrollBar::SetTrackRange(*((CREScrollBar **)this + 177), 0, 0);
  }
}
