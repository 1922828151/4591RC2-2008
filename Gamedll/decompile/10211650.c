/*
 * func-name: ??0CControlCenterListUI@@QAE@ABV0@@Z_0
 * func-address: 0x10211650
 * callers: 0x1000a8a3
 * callees: 0x1000df8a, 0x10011c89
 */

CControlCenterListUI *__thiscall CControlCenterListUI::CControlCenterListUI(
        CControlCenterListUI *this,
        const struct CControlCenterListUI *a2)
{
  CTYDialog::CTYDialog(this, a2);
  *(_DWORD *)this = &CControlCenterListUI::`vftable';
  sub_1000DF8A((int)a2 + 3872);
  sub_10011C89((int)a2 + 3888);
  *((_DWORD *)this + 976) = *((_DWORD *)a2 + 976);
  *((float *)this + 977) = *((float *)a2 + 977);
  return this;
}
