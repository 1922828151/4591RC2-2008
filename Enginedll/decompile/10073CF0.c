/*
 * func-name: ??0CRENumericEditBox@@QAE@ABV0@@Z
 * func-address: 0x10073cf0
 * callers: none
 * callees: 0x10072db0
 */

CRENumericEditBox *__thiscall CRENumericEditBox::CRENumericEditBox(
        CRENumericEditBox *this,
        const struct CRENumericEditBox *a2)
{
  CREEditBox::CREEditBox(this, a2);
  *(_DWORD *)this = &CRENumericEditBox::`vftable';
  *((_DWORD *)this + 198) = *((_DWORD *)a2 + 198);
  return this;
}
