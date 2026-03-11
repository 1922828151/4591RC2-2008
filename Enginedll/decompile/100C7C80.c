/*
 * func-name: ??0CREListBox@@QAE@PAVCREDialog@@@Z
 * func-address: 0x100c7c80
 * callers: 0x1006a5f0, 0x100cb420, 0x1014a750
 * callees: 0x100c6ff0, 0x100c7b00
 */

CREListBox *__thiscall CREListBox::CREListBox(CREListBox *this, struct CREDialog *a2)
{
  CREControl::CREControl(this, 0);
  *(_DWORD *)this = &CREListBox::`vftable';
  CREScrollBar::CREScrollBar((CREListBox *)((char *)this + 564), a2);
  *((_DWORD *)this + 303) = 0;
  *((_DWORD *)this + 304) = 0;
  *((_DWORD *)this + 305) = 0;
  *((_DWORD *)this + 28) = a2;
  *((_DWORD *)this + 300) = -1;
  *((_DWORD *)this + 309) = -1;
  *((_DWORD *)this + 299) = 0;
  *((_DWORD *)this + 301) = 0;
  *((_BYTE *)this + 1208) = 0;
  *((_DWORD *)this + 298) = 0;
  *((_BYTE *)this + 1209) = 0;
  *((_DWORD *)this + 306) = 0;
  *((_DWORD *)this + 308) = 0;
  *((_DWORD *)this + 35) = 11;
  *((_DWORD *)this + 295) = 16;
  *((_DWORD *)this + 296) = 6;
  *((_DWORD *)this + 297) = 5;
  *((_DWORD *)this + 307) = -16777216;
  return this;
}
