/*
 * func-name: ??0CControlBox@@QAE@ABV0@@Z
 * func-address: 0x100d4880
 * callers: none
 * callees: 0x10071230, 0x100d0620
 */

CControlBox *__thiscall CControlBox::CControlBox(CControlBox *this, const struct CControlBox *a2)
{
  CREControl::CREControl(this, a2);
  *(_DWORD *)this = &CControlBox::`vftable';
  sub_100D0620((_DWORD *)this + 133, (int)a2 + 532);
  *((_BYTE *)this + 548) = *((_BYTE *)a2 + 548);
  *((_DWORD *)this + 138) = *((_DWORD *)a2 + 138);
  *((_DWORD *)this + 139) = *((_DWORD *)a2 + 139);
  return this;
}
