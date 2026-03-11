/*
 * func-name: ??0CRENumericButton@@QAE@ABV0@@Z
 * func-address: 0x10073c80
 * callers: none
 * callees: 0x10071950
 */

CRENumericButton *__thiscall CRENumericButton::CRENumericButton(
        CRENumericButton *this,
        const struct CRENumericButton *a2)
{
  CREButton::CREButton(this, a2);
  *(_DWORD *)this = &CRENumericButton::`vftable';
  *((_BYTE *)this + 816) = *((_BYTE *)a2 + 816);
  *((_DWORD *)this + 205) = *((_DWORD *)a2 + 205);
  return this;
}
