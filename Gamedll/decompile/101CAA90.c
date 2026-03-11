/*
 * func-name: ??0CPasswordInputUI@@QAE@ABV0@@Z_0
 * func-address: 0x101caa90
 * callers: 0x10011e50
 * callees: none
 */

CPasswordInputUI *__thiscall CPasswordInputUI::CPasswordInputUI(
        CPasswordInputUI *this,
        const struct CPasswordInputUI *a2)
{
  CTYDialog::CTYDialog(this, a2);
  *(_DWORD *)this = &CPasswordInputUI::`vftable';
  *((_DWORD *)this + 968) = *((_DWORD *)a2 + 968);
  *((_BYTE *)this + 3876) = *((_BYTE *)a2 + 3876);
  return this;
}
