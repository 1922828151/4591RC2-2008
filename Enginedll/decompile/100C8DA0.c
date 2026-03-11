/*
 * func-name: ??0CMultiLineEB@@QAE@PAVCREDialog@@@Z
 * func-address: 0x100c8da0
 * callers: 0x1006acd0, 0x100ca030
 * callees: 0x100b3510, 0x100c7b00, 0x100c84a0, 0x101a2534
 */

CMultiLineEB *__thiscall CMultiLineEB::CMultiLineEB(CMultiLineEB *this, struct CREDialog *a2)
{
  CREScrollBar *v3; // eax
  struct CREControl *v4; // eax

  CREEditBox::CREEditBox(this, 0);
  *(_DWORD *)this = &CMultiLineEB::`vftable';
  *((_DWORD *)this + 203) = 1;
  *((_DWORD *)this + 204) = 0;
  *((_DWORD *)this + 205) = 0;
  *((_DWORD *)this + 206) = 0;
  *((_DWORD *)this + 207) = 0;
  *((_DWORD *)this + 208) = 0;
  *((_BYTE *)this + 856) = 0;
  *((_DWORD *)this + 216) = 0;
  *((_DWORD *)this + 217) = 0;
  *((_DWORD *)this + 218) = 0;
  *((_DWORD *)this + 220) = 0;
  *((_DWORD *)this + 221) = 0;
  *((_DWORD *)this + 222) = 0;
  *((_DWORD *)this + 224) = 0;
  *((_DWORD *)this + 225) = 0;
  *((_DWORD *)this + 226) = 0;
  v3 = (CREScrollBar *)operator new(0x268u);
  if ( v3 )
    v4 = CREScrollBar::CREScrollBar(v3, a2);
  else
    v4 = 0;
  *((_DWORD *)this + 198) = v4;
  CREDialog::AddControl(a2, v4);
  return this;
}
