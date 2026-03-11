/*
 * func-name: ??0CRETextBox@@QAE@PAVCREDialog@@@Z
 * func-address: 0x100cc600
 * callers: 0x1006aff0
 * callees: 0x100c7520
 */

CRETextBox *__thiscall CRETextBox::CRETextBox(CRETextBox *this, struct CREDialog *a2)
{
  CREStatic::CREStatic(this, 0);
  *((_DWORD *)this + 28) = a2;
  *((_DWORD *)this + 177) = 4;
  *((_DWORD *)this + 176) = 4;
  *(_DWORD *)this = &CRETextBox::`vftable';
  *((_DWORD *)this + 35) = 16;
  *((_BYTE *)this + 700) = 0;
  *((_DWORD *)this + 174) = 0;
  *((_BYTE *)this + 701) = 1;
  return this;
}
