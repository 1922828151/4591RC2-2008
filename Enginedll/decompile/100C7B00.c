/*
 * func-name: ??0CREScrollBar@@QAE@PAVCREDialog@@@Z
 * func-address: 0x100c7b00
 * callers: 0x1006a3f0, 0x100c7c80, 0x100c7e50, 0x100c8da0, 0x100cbcc0, 0x1014a750
 * callees: 0x100c6ff0
 */

CREScrollBar *__thiscall CREScrollBar::CREScrollBar(CREScrollBar *this, struct CREDialog *a2)
{
  CREControl::CREControl(this, 0);
  *(_DWORD *)this = &CREScrollBar::`vftable';
  *((_BYTE *)this + 533) = 0;
  *((_DWORD *)this + 35) = 12;
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
