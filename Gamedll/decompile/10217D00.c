/*
 * func-name: ??0CLoginUI@@QAE@ABV0@@Z_0
 * func-address: 0x10217d00
 * callers: 0x100076df
 * callees: none
 */

CLoginUI *__thiscall CLoginUI::CLoginUI(CLoginUI *this, const struct CLoginUI *a2)
{
  CTYDialog::CTYDialog(this, a2);
  *(_DWORD *)this = &CLoginUI::`vftable';
  *((_DWORD *)this + 968) = *((_DWORD *)a2 + 968);
  *((_DWORD *)this + 969) = *((_DWORD *)a2 + 969);
  return this;
}
