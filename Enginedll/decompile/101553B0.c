/*
 * func-name: ??0CControlBoxList@@QAE@PAVCREDialog@@@Z
 * func-address: 0x101553b0
 * callers: 0x100a26b0
 * callees: 0x100c6ff0
 */

CControlBoxList *__thiscall CControlBoxList::CControlBoxList(CControlBoxList *this, struct CREDialog *a2)
{
  CREControl::CREControl(this, a2);
  *(_DWORD *)this = &CControlBoxList::`vftable';
  *((_DWORD *)this + 134) = 0;
  *((_DWORD *)this + 135) = 0;
  *((_DWORD *)this + 136) = 0;
  *((_DWORD *)this + 140) = 0;
  *((_DWORD *)this + 141) = 0;
  *((_DWORD *)this + 142) = 2;
  *((_DWORD *)this + 143) = 1;
  return this;
}
