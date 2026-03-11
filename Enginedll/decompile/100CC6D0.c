/*
 * func-name: ??0CRENumericButton@@QAE@PAVCREDialog@@@Z
 * func-address: 0x100cc6d0
 * callers: 0x1006b060
 * callees: 0x100cb5e0
 */

CRENumericButton *__thiscall CRENumericButton::CRENumericButton(CRENumericButton *this, struct CREDialog *a2)
{
  CREButton::CREButton(this, 0);
  *((_DWORD *)this + 28) = a2;
  *(_DWORD *)this = &CRENumericButton::`vftable';
  *((_DWORD *)this + 35) = 9;
  *((_BYTE *)this + 779) = 0;
  *((_DWORD *)this + 36) = 0;
  return this;
}
