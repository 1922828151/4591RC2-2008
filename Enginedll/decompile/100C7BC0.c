/*
 * func-name: ??0CREHScrollBar@@QAE@PAVCREDialog@@@Z
 * func-address: 0x100c7bc0
 * callers: 0x1006a4d0, 0x1014a750
 * callees: 0x100c6ff0
 */

CREHScrollBar *__thiscall CREHScrollBar::CREHScrollBar(CREHScrollBar *this, struct CREDialog *a2)
{
  CREControl::CREControl(this, 0);
  *(_DWORD *)this = &CREHScrollBar::`vftable';
  *((_DWORD *)this + 35) = 21;
  *((_DWORD *)this + 28) = a2;
  *((_BYTE *)this + 532) = 1;
  SetRect((LPRECT)((char *)this + 536), 0, 0, 0, 0);
  SetRect((LPRECT)((char *)this + 552), 0, 0, 0, 0);
  SetRect((LPRECT)((char *)this + 568), 0, 0, 0, 0);
  SetRect((LPRECT)((char *)this + 584), 0, 0, 0, 0);
  *((_DWORD *)this + 150) = 0;
  *((_DWORD *)this + 151) = 1;
  *((_DWORD *)this + 152) = 0;
  *((_DWORD *)this + 153) = 1;
  return this;
}
