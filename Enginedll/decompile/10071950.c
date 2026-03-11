/*
 * func-name: ??0CREButton@@QAE@ABV0@@Z
 * func-address: 0x10071950
 * callers: 0x10071af0, 0x10071be0, 0x10072840, 0x10073c80, 0x100d4c80
 * callees: 0x100717b0
 */

CREButton *__thiscall CREButton::CREButton(CREButton *this, const struct CREButton *a2)
{
  CREStatic::CREStatic(this, a2);
  *(_DWORD *)this = &CREButton::`vftable';
  qmemcpy((char *)this + 696, (char *)a2 + 696, 0x78u);
  return this;
}
