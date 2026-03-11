/*
 * func-name: ??0CInputBox@@QAE@ABV0@@Z
 * func-address: 0x10073a10
 * callers: none
 * callees: 0x100717b0
 */

CInputBox *__thiscall CInputBox::CInputBox(CInputBox *this, const struct CInputBox *a2)
{
  CREStatic::CREStatic(this, a2);
  *(_DWORD *)this = &CInputBox::`vftable';
  *((_BYTE *)this + 696) = *((_BYTE *)a2 + 696);
  *((_DWORD *)this + 175) = *((_DWORD *)a2 + 175);
  qmemcpy((char *)this + 704, (char *)a2 + 704, 0x20Cu);
  return this;
}
