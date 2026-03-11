/*
 * func-name: ??0CREPropertiesList@@QAE@PAVCREDialog@@@Z
 * func-address: 0x100c7e50
 * callers: 0x1006a6d0, 0x100cb500
 * callees: 0x100c6ff0, 0x100c7b00
 */

CREPropertiesList *__thiscall CREPropertiesList::CREPropertiesList(CREPropertiesList *this, struct CREDialog *a2)
{
  CREControl::CREControl(this, 0);
  *(_DWORD *)this = &CREPropertiesList::`vftable';
  CREScrollBar::CREScrollBar((CREPropertiesList *)((char *)this + 564), a2);
  *((_DWORD *)this + 305) = 0;
  *((_DWORD *)this + 306) = 0;
  *((_DWORD *)this + 307) = 0;
  *((_DWORD *)this + 28) = a2;
  *((_DWORD *)this + 299) = 0;
  *((_DWORD *)this + 301) = 0;
  *((_BYTE *)this + 1208) = 0;
  *((_DWORD *)this + 298) = 0;
  *((_DWORD *)this + 35) = 13;
  *((_DWORD *)this + 295) = 16;
  *((_DWORD *)this + 300) = -1;
  *((_DWORD *)this + 296) = 6;
  *((_DWORD *)this + 297) = 5;
  *((_DWORD *)this + 304) = 60;
  return this;
}
