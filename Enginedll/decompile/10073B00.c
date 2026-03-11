/*
 * func-name: ??0CREContainer@@QAE@ABV0@@Z
 * func-address: 0x10073b00
 * callers: none
 * callees: 0x1006e600, 0x1006e7d0, 0x10071230
 */

CREContainer *__thiscall CREContainer::CREContainer(CREContainer *this, const struct CREContainer *a2)
{
  CREControl::CREControl(this, a2);
  *(_DWORD *)this = &CREContainer::`vftable';
  sub_1006E600((_DWORD *)this + 133, (int)a2 + 532);
  sub_1006E7D0((_DWORD *)this + 137, (int)a2 + 548);
  return this;
}
