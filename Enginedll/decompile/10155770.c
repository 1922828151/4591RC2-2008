/*
 * func-name: ??0CControlBox@@QAE@PAVCREDialog@@@Z
 * func-address: 0x10155770
 * callers: 0x100a2610
 * callees: 0x100c6ff0
 */

CControlBox *__thiscall CControlBox::CControlBox(CControlBox *this, struct CREDialog *a2)
{
  CREControl::CREControl(this, a2);
  *(_DWORD *)this = &CControlBox::`vftable';
  *((_DWORD *)this + 134) = 0;
  *((_DWORD *)this + 135) = 0;
  *((_DWORD *)this + 136) = 0;
  *((_DWORD *)this + 138) = 0;
  *((_BYTE *)this + 548) = 0;
  *((_DWORD *)this + 35) = 25;
  return this;
}
