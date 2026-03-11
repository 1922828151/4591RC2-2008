/*
 * func-name: ??0CRETextBox@@QAE@ABV0@@Z
 * func-address: 0x10073bc0
 * callers: none
 * callees: 0x100717b0
 */

CRETextBox *__thiscall CRETextBox::CRETextBox(CRETextBox *this, const struct CRETextBox *a2)
{
  CREStatic::CREStatic(this, a2);
  *(_DWORD *)this = &CRETextBox::`vftable';
  *((_DWORD *)this + 174) = *((_DWORD *)a2 + 174);
  *((_BYTE *)this + 700) = *((_BYTE *)a2 + 700);
  *((_BYTE *)this + 701) = *((_BYTE *)a2 + 701);
  *((_DWORD *)this + 176) = *((_DWORD *)a2 + 176);
  *((_DWORD *)this + 177) = *((_DWORD *)a2 + 177);
  return this;
}
