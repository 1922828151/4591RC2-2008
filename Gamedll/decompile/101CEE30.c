/*
 * func-name: ??0CAlarmMessageUI@@QAE@ABV0@@Z_0
 * func-address: 0x101cee30
 * callers: 0x100159e2
 * callees: none
 */

CAlarmMessageUI *__thiscall CAlarmMessageUI::CAlarmMessageUI(CAlarmMessageUI *this, const struct CAlarmMessageUI *a2)
{
  CTYDialog::CTYDialog(this, a2);
  *(_DWORD *)this = &CAlarmMessageUI::`vftable';
  *((_DWORD *)this + 968) = *((_DWORD *)a2 + 968);
  *((_DWORD *)this + 969) = *((_DWORD *)a2 + 969);
  return this;
}
