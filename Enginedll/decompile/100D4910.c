/*
 * func-name: ??0CControlBoxList@@QAE@ABV0@@Z
 * func-address: 0x100d4910
 * callers: none
 * callees: 0x10071230, 0x100d0710
 */

CControlBoxList *__thiscall CControlBoxList::CControlBoxList(CControlBoxList *this, const struct CControlBoxList *a2)
{
  CREControl::CREControl(this, a2);
  *(_DWORD *)this = &CControlBoxList::`vftable';
  sub_100D0710((_DWORD *)this + 133, (int)a2 + 532);
  *((_DWORD *)this + 137) = *((_DWORD *)a2 + 137);
  *((_DWORD *)this + 138) = *((_DWORD *)a2 + 138);
  *((_DWORD *)this + 139) = *((_DWORD *)a2 + 139);
  *((_DWORD *)this + 140) = *((_DWORD *)a2 + 140);
  *((_DWORD *)this + 141) = *((_DWORD *)a2 + 141);
  *((_DWORD *)this + 142) = *((_DWORD *)a2 + 142);
  *((_DWORD *)this + 143) = *((_DWORD *)a2 + 143);
  return this;
}
