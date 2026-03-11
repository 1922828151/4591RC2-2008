/*
 * func-name: ?UpdateRects@CREComboBox@@UAEXXZ
 * func-address: 0x100bc4f0
 * callers: none
 * callees: 0x1006a3d0, 0x100a3ce0, 0x100b5280
 */

void __thiscall CREComboBox::UpdateRects(struct tagRECT *this)
{
  LONG *p_top; // edi
  LONG right; // ecx
  LONG bottom; // edx
  LONG left; // eax
  LONG v6; // edx
  int v7; // ecx
  LONG v8; // eax
  LONG v9; // edx
  int v10; // eax
  LONG v11; // ecx
  LONG v12; // edx
  LONG v13; // ecx
  LONG v14; // eax
  LONG top; // edx
  LONG v16; // eax
  LONG v17; // ecx
  void (__thiscall *v18)(LONG *, LONG, int); // edx
  LONG v19; // eax
  int v20; // ebx
  int v21; // ecx

  p_top = &this[10].top;
  SetRect(
    (struct tagRECT *)((char *)this + 164),
    this[6].left,
    this[6].top,
    this[6].left + this[6].right,
    this[6].top + this[6].bottom);
  right = this[10].right;
  bottom = this[10].bottom;
  this[92].left = *p_top;
  left = this[11].left;
  this[92].top = right;
  this[92].right = bottom;
  v6 = *p_top;
  this[92].bottom = left;
  v7 = this[92].top + this[92].right - left;
  v8 = this[10].right;
  this[91].left = v6;
  v9 = this[11].left;
  this[91].top = v8;
  this[92].left = v7;
  v10 = v7;
  v11 = *p_top;
  this[91].bottom = v9;
  v12 = this[10].right;
  this[93].left = v11;
  v13 = this[11].left;
  this[91].right = v10;
  v14 = this[10].bottom;
  this[93].top = v12;
  this[93].right = v14;
  this[93].bottom = v13;
  OffsetRect(this + 93, 0, this[91].bottom - this[91].top);
  this[93].bottom += this[51].right;
  top = this[93].top;
  v16 = this[93].right;
  this[94].left = this[93].left;
  v17 = this[93].bottom;
  this[94].top = top;
  v18 = *(void (__thiscall **)(LONG *, LONG, int))(this[51].bottom + 156);
  this[94].right = v16;
  v19 = this[93].top;
  this[94].bottom = v17;
  v18(&this[51].bottom, this[93].right, v19 + 2);
  (*(void (__thiscall **)(LONG *, LONG, int))(this[51].bottom + 160))(
    &this[51].bottom,
    this[90].top,
    this[93].bottom - this[93].top - 2);
  if ( this[95].top )
  {
    if ( this[7].left )
    {
      v20 = *(_DWORD *)(*(_DWORD *)(this[7].right + 8) + 4);
      v21 = *(_DWORD *)(*((_DWORD *)REGetGlobalDialogResourceManager() + 5) + 4 * v20);
      if ( v21 )
      {
        if ( *(_DWORD *)(v21 + 524) )
        {
          CREScrollBar::SetPageSize(
            (CREScrollBar *)&this[51].bottom,
            (this[94].bottom - this[94].top) / *(_DWORD *)(v21 + 528));
          CREScrollBar::ShowItem((CREScrollBar *)&this[51].bottom, this[51].left);
        }
      }
    }
  }
}
